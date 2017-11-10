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
	std::vector<ProjectFun::SpriteAnimationPtr> bgAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\BG.png",1,1,frames);
	anim->SetName("BG");
	bgAnimations.push_back(anim);
	frames.clear();
	bg_4_Sprite = new Sprite(bgAnimations);

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
		bg_4_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	bg_4_Sprite->SetName("bg");
	bg_4_Sprite->SetCollisionActorIndex(0);
	bg_4_Sprite->SetOpacity(1.0f);
	bg_4_Sprite->Play(true);
	bg_4_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	bg_4_Sprite->SetCurrentAnimationIndex(0);
	bg_4_Sprite->SetCurrentFrameIndex(0);
	bg_4_Sprite->SetLoop(true);
	bg_4_Sprite->SetAnimationSpeed(1.0f);
	bg_4_Sprite->SetFlipHorizontal(false);
	bg_4_Sprite->SetFlipVertical(false);
	bg_4_Sprite->SetLifeTime(0.0f);
	bg_4_Sprite->SetVisible(true);
	bg_4_Sprite->SetRotationAngle(0.0f);
	bg_4_Sprite->SetScale(1.0f, 1.0f);
	bg_4_Sprite->SetCenter(Point2D(0.0f,0.0f));
	bg_4_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(bg_4_Sprite);


}
void Level0_Layer1_Sprite1(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> shipAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation0.png",1,1,frames);
	anim->SetName("Animation0");
	shipAnimations.push_back(anim);
	frames.clear();
	ship_3_ShipClass = new ShipClass(shipAnimations);

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
		ship_3_ShipClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	ship_3_ShipClass->SetName("ship");
	ship_3_ShipClass->SetCollisionActorIndex(1);
	ship_3_ShipClass->SetOpacity(1.0f);
	ship_3_ShipClass->Play(true);
	ship_3_ShipClass->SetPosition(Point2D(2.0f ,-4.0f));
	ship_3_ShipClass->SetCurrentAnimationIndex(0);
	ship_3_ShipClass->SetCurrentFrameIndex(0);
	ship_3_ShipClass->SetLoop(true);
	ship_3_ShipClass->SetAnimationSpeed(1.0f);
	ship_3_ShipClass->SetFlipHorizontal(false);
	ship_3_ShipClass->SetFlipVertical(false);
	ship_3_ShipClass->SetLifeTime(0.0f);
	ship_3_ShipClass->SetVisible(true);
	ship_3_ShipClass->SetRotationAngle(0.0f);
	ship_3_ShipClass->SetScale(1.0f, 1.0f);
	ship_3_ShipClass->SetCenter(Point2D(0.0f,0.0f));
	ship_3_ShipClass->SetZOrder(0.1f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		ship_3_ShipClass->SetCenter(Point2D(0.0f,0.0f));
		ship_3_ShipClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		ship_3_ShipClass->SetVelocity(Vector2D(0.0f,0.0f));
		ship_3_ShipClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(ship_3_ShipClass);


}
void Level0_Layer1_Sprite2(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> ballAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation1.png",1,1,frames);
	anim->SetName("Animation1");
	ballAnimations.push_back(anim);
	frames.clear();
	ball_5_BallClass = new BallClass(ballAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor02);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		ball_5_BallClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	ball_5_BallClass->SetName("ball");
	ball_5_BallClass->SetCollisionActorIndex(2);
	ball_5_BallClass->SetOpacity(1.0f);
	ball_5_BallClass->Play(true);
	ball_5_BallClass->SetPosition(Point2D(-309.0f ,-2.0f));
	ball_5_BallClass->SetCurrentAnimationIndex(0);
	ball_5_BallClass->SetCurrentFrameIndex(0);
	ball_5_BallClass->SetLoop(true);
	ball_5_BallClass->SetAnimationSpeed(1.0f);
	ball_5_BallClass->SetFlipHorizontal(false);
	ball_5_BallClass->SetFlipVertical(false);
	ball_5_BallClass->SetLifeTime(0.0f);
	ball_5_BallClass->SetVisible(true);
	ball_5_BallClass->SetRotationAngle(0.0f);
	ball_5_BallClass->SetScale(1.0f, 1.0f);
	ball_5_BallClass->SetCenter(Point2D(0.0f,0.0f));
	ball_5_BallClass->SetZOrder(0.2f);
	
	mlf->layer1_Layer->AddGameObject(ball_5_BallClass);


}
void Level0_Layer1_Sprite3(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> ballAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation1.png",1,1,frames);
	anim->SetName("Animation1");
	ballAnimations.push_back(anim);
	frames.clear();
	ball_6_BallClass = new BallClass(ballAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor02);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		ball_6_BallClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	ball_6_BallClass->SetName("ball");
	ball_6_BallClass->SetCollisionActorIndex(2);
	ball_6_BallClass->SetOpacity(1.0f);
	ball_6_BallClass->Play(true);
	ball_6_BallClass->SetPosition(Point2D(-244.0f ,1.0f));
	ball_6_BallClass->SetCurrentAnimationIndex(0);
	ball_6_BallClass->SetCurrentFrameIndex(0);
	ball_6_BallClass->SetLoop(true);
	ball_6_BallClass->SetAnimationSpeed(1.0f);
	ball_6_BallClass->SetFlipHorizontal(false);
	ball_6_BallClass->SetFlipVertical(false);
	ball_6_BallClass->SetLifeTime(0.0f);
	ball_6_BallClass->SetVisible(true);
	ball_6_BallClass->SetRotationAngle(0.0f);
	ball_6_BallClass->SetScale(1.0f, 1.0f);
	ball_6_BallClass->SetCenter(Point2D(0.0f,0.0f));
	ball_6_BallClass->SetZOrder(0.2f);
	
	mlf->layer1_Layer->AddGameObject(ball_6_BallClass);


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
	 Level0_Layer1_Sprite2(this);
	 Level0_Layer1_Sprite3(this);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level0_Layer1_StaticCollision();
}
