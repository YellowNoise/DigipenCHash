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
	std::vector<ProjectFun::SpriteAnimationPtr> ballAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Ball.png",1,1,frames);
	anim->SetName("Ball");
	ballAnimations.push_back(anim);
	frames.clear();
	ball_144_BallClass = new BallClass(ballAnimations);

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
		ball_144_BallClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	ball_144_BallClass->SetName("ball");
	ball_144_BallClass->SetCollisionActorIndex(0);
	ball_144_BallClass->SetOpacity(1.0f);
	ball_144_BallClass->Play(true);
	ball_144_BallClass->SetPosition(Point2D(-82.0f ,6.0f));
	ball_144_BallClass->SetCurrentAnimationIndex(0);
	ball_144_BallClass->SetCurrentFrameIndex(0);
	ball_144_BallClass->SetLoop(true);
	ball_144_BallClass->SetAnimationSpeed(1.0f);
	ball_144_BallClass->SetFlipHorizontal(false);
	ball_144_BallClass->SetFlipVertical(false);
	ball_144_BallClass->SetLifeTime(0.0f);
	ball_144_BallClass->SetVisible(true);
	ball_144_BallClass->SetRotationAngle(0.0f);
	ball_144_BallClass->SetScale(1.0f, 1.0f);
	ball_144_BallClass->SetCenter(Point2D(0.0f,0.0f));
	ball_144_BallClass->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(ball_144_BallClass);


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
