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
	std::vector<ProjectFun::SpriteAnimationPtr> sprite0Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Ball.png",1,1,frames);
	anim->SetName("Ball");
	sprite0Animations.push_back(anim);
	frames.clear();
	sprite0_23_BallClass = new BallClass(sprite0Animations);

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
		sprite0_23_BallClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	sprite0_23_BallClass->SetName("sprite0");
	sprite0_23_BallClass->SetCollisionActorIndex(0);
	sprite0_23_BallClass->SetOpacity(1.0f);
	sprite0_23_BallClass->Play(true);
	sprite0_23_BallClass->SetPosition(Point2D(2.0f ,0.0f));
	sprite0_23_BallClass->SetCurrentAnimationIndex(0);
	sprite0_23_BallClass->SetCurrentFrameIndex(0);
	sprite0_23_BallClass->SetLoop(true);
	sprite0_23_BallClass->SetAnimationSpeed(1.0f);
	sprite0_23_BallClass->SetFlipHorizontal(false);
	sprite0_23_BallClass->SetFlipVertical(false);
	sprite0_23_BallClass->SetLifeTime(0.0f);
	sprite0_23_BallClass->SetVisible(true);
	sprite0_23_BallClass->SetRotationAngle(0.0f);
	sprite0_23_BallClass->SetScale(1.0f, 1.0f);
	sprite0_23_BallClass->SetCenter(Point2D(0.0f,0.0f));
	sprite0_23_BallClass->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(sprite0_23_BallClass);


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

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level0_Layer1_StaticCollision();
}
