#include "MyGame_MainDeclarations.h"
#include "MyGame_Declarations.h"
#include <Core_DetectMemoryLeaks.h>

using namespace Core;
using namespace Math;
using namespace Input;
using namespace ProjectFun;
using namespace Collision2D;
using namespace Physics2D;
using namespace GUI;
using namespace std;


//TileMaps Setters

//Texts Setters

//Sounds Setters

//Sprites Setters
void Level0_Layer1_Sprite0(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> backgroundAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Background.png",1,1,frames);
	anim->SetName("Background");
	backgroundAnimations.push_back(anim);
	frames.clear();
	background_4_Sprite = new Sprite(backgroundAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor00);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		background_4_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	background_4_Sprite->SetName("background");
	background_4_Sprite->SetCollisionActorIndex(0);
	background_4_Sprite->SetOpacity(1.0f);
	background_4_Sprite->Play(true);
	background_4_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	background_4_Sprite->SetCurrentAnimationIndex(0);
	background_4_Sprite->SetCurrentFrameIndex(0);
	background_4_Sprite->SetLoop(true);
	background_4_Sprite->SetAnimationSpeed(1.0f);
	background_4_Sprite->SetFlipHorizontal(false);
	background_4_Sprite->SetFlipVertical(false);
	background_4_Sprite->SetLifeTime(0.0f);
	background_4_Sprite->SetVisible(true);
	background_4_Sprite->SetRotationAngle(0.0f);
	background_4_Sprite->SetScale(1.0f, 1.0f);
	background_4_Sprite->SetCenter(Point2D(0.0f,0.0f));
	background_4_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(background_4_Sprite);


}
void Level0_Layer1_Sprite1(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> ballAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Ball.png",1,1,frames);
	anim->SetName("Ball");
	ballAnimations.push_back(anim);
	frames.clear();
	ball_3_Sprite = new Sprite(ballAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		ball_3_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	ball_3_Sprite->SetName("ball");
	ball_3_Sprite->SetCollisionActorIndex(1);
	ball_3_Sprite->SetOpacity(1.0f);
	ball_3_Sprite->Play(true);
	ball_3_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	ball_3_Sprite->SetCurrentAnimationIndex(0);
	ball_3_Sprite->SetCurrentFrameIndex(0);
	ball_3_Sprite->SetLoop(true);
	ball_3_Sprite->SetAnimationSpeed(1.0f);
	ball_3_Sprite->SetFlipHorizontal(false);
	ball_3_Sprite->SetFlipVertical(false);
	ball_3_Sprite->SetLifeTime(0.0f);
	ball_3_Sprite->SetVisible(true);
	ball_3_Sprite->SetRotationAngle(0.0f);
	ball_3_Sprite->SetScale(1.0f, 1.0f);
	ball_3_Sprite->SetCenter(Point2D(0.0f,0.0f));
	ball_3_Sprite->SetZOrder(10.0f);
	
	mlf->layer1_Layer->AddGameObject(ball_3_Sprite);


}


//ParticleSystems Setters

//Joints Setters

void MyLevelFactory::Level0_Layer1_StaticCollision()
{
	layer1_Layer->ReadInformation_StaticCollision(Game::GetInstance()->GetDirectory() + "\\Resources\\Layers Collisions\\level0_layer1.txt");
}

void MyLevelFactory::Set_Level0_Layer1_Objects()
{
	 Level0_Layer1_Sprite0(this);
	 Level0_Layer1_Sprite1(this);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level0_Layer1_StaticCollision();
}
