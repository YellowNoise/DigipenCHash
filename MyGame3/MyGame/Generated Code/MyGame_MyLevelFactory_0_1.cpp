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
	background_9_Sprite = new Sprite(backgroundAnimations);

	background_9_Sprite->SetName("background");
	background_9_Sprite->SetCollisionActorIndex(0);
	background_9_Sprite->SetOpacity(1.0f);
	background_9_Sprite->Play(true);
	background_9_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	background_9_Sprite->SetCurrentAnimationIndex(0);
	background_9_Sprite->SetCurrentFrameIndex(0);
	background_9_Sprite->SetLoop(true);
	background_9_Sprite->SetAnimationSpeed(1.0f);
	background_9_Sprite->SetFlipHorizontal(false);
	background_9_Sprite->SetFlipVertical(false);
	background_9_Sprite->SetLifeTime(0.0f);
	background_9_Sprite->SetVisible(true);
	background_9_Sprite->SetRotationAngle(0.0f);
	background_9_Sprite->SetScale(1.0f, 1.0f);
	background_9_Sprite->SetCenter(Point2D(0.0f,0.0f));
	background_9_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(background_9_Sprite);


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
	ball_7_Sprite = new Sprite(ballAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		ball_7_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	ball_7_Sprite->SetName("ball");
	ball_7_Sprite->SetCollisionActorIndex(1);
	ball_7_Sprite->SetOpacity(1.0f);
	ball_7_Sprite->Play(true);
	ball_7_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	ball_7_Sprite->SetCurrentAnimationIndex(0);
	ball_7_Sprite->SetCurrentFrameIndex(0);
	ball_7_Sprite->SetLoop(true);
	ball_7_Sprite->SetAnimationSpeed(1.0f);
	ball_7_Sprite->SetFlipHorizontal(false);
	ball_7_Sprite->SetFlipVertical(false);
	ball_7_Sprite->SetLifeTime(0.0f);
	ball_7_Sprite->SetVisible(true);
	ball_7_Sprite->SetRotationAngle(0.0f);
	ball_7_Sprite->SetScale(1.0f, 1.0f);
	ball_7_Sprite->SetCenter(Point2D(0.0f,0.0f));
	ball_7_Sprite->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		ball_7_Sprite->SetCenter(Point2D(0.0f,0.0f));
		ball_7_Sprite->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		ball_7_Sprite->AddForce(new ConstantForce(Vector2D(150.0f,150.0f),0.2f));
		ball_7_Sprite->SetVelocity(Vector2D(0.0f,0.0f));
		ball_7_Sprite->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(ball_7_Sprite);


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
