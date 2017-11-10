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
	ball_14_Sprite = new Sprite(ballAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor00);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(true);
		ball_14_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	ball_14_Sprite->SetName("ball");
	ball_14_Sprite->SetCollisionActorIndex(0);
	ball_14_Sprite->SetOpacity(1.0f);
	ball_14_Sprite->Play(true);
	ball_14_Sprite->SetPosition(Point2D(3.0f ,23.0f));
	ball_14_Sprite->SetCurrentAnimationIndex(0);
	ball_14_Sprite->SetCurrentFrameIndex(0);
	ball_14_Sprite->SetLoop(true);
	ball_14_Sprite->SetAnimationSpeed(1.0f);
	ball_14_Sprite->SetFlipHorizontal(false);
	ball_14_Sprite->SetFlipVertical(false);
	ball_14_Sprite->SetLifeTime(0.0f);
	ball_14_Sprite->SetVisible(true);
	ball_14_Sprite->SetRotationAngle(0.0f);
	ball_14_Sprite->SetScale(1.0f, 1.0f);
	ball_14_Sprite->SetCenter(Point2D(0.0f,0.0f));
	ball_14_Sprite->SetZOrder(0.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		ball_14_Sprite->SetCenter(Point2D(0.0f,0.0f));
		ball_14_Sprite->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		ball_14_Sprite->AddForce(new GravityForce(Vector2D(0.0f,-1.0f),9.8f));
		ball_14_Sprite->SetVelocity(Vector2D(0.0f,0.0f));
		ball_14_Sprite->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(ball_14_Sprite);


}
void Level0_Layer1_Sprite1(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> PaddleAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\paddle.png",1,1,frames);
	anim->SetName("paddle");
	PaddleAnimations.push_back(anim);
	frames.clear();
	Paddle_15_Sprite = new Sprite(PaddleAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(true);
		Paddle_15_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Paddle_15_Sprite->SetName("Paddle");
	Paddle_15_Sprite->SetCollisionActorIndex(1);
	Paddle_15_Sprite->SetOpacity(1.0f);
	Paddle_15_Sprite->Play(true);
	Paddle_15_Sprite->SetPosition(Point2D(0.0f ,-256.0f));
	Paddle_15_Sprite->SetCurrentAnimationIndex(0);
	Paddle_15_Sprite->SetCurrentFrameIndex(0);
	Paddle_15_Sprite->SetLoop(true);
	Paddle_15_Sprite->SetAnimationSpeed(1.0f);
	Paddle_15_Sprite->SetFlipHorizontal(false);
	Paddle_15_Sprite->SetFlipVertical(false);
	Paddle_15_Sprite->SetLifeTime(0.0f);
	Paddle_15_Sprite->SetVisible(true);
	Paddle_15_Sprite->SetRotationAngle(0.0f);
	Paddle_15_Sprite->SetScale(1.0f, 1.0f);
	Paddle_15_Sprite->SetCenter(Point2D(0.0f,0.0f));
	Paddle_15_Sprite->SetZOrder(0.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Paddle_15_Sprite->SetCenter(Point2D(0.0f,0.0f));
		Paddle_15_Sprite->AddPhysicalProperties(Physics2D::MassProperties(0.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Paddle_15_Sprite->SetVelocity(Vector2D(0.0f,0.0f));
		Paddle_15_Sprite->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Paddle_15_Sprite);


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
