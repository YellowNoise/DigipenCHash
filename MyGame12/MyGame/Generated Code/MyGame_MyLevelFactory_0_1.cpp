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
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\BG.png",1,1,frames);
	anim->SetName("BG");
	sprite0Animations.push_back(anim);
	frames.clear();
	sprite0_135_Sprite = new Sprite(sprite0Animations);

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
		sprite0_135_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	sprite0_135_Sprite->SetName("sprite0");
	sprite0_135_Sprite->SetCollisionActorIndex(0);
	sprite0_135_Sprite->SetOpacity(1.0f);
	sprite0_135_Sprite->Play(true);
	sprite0_135_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	sprite0_135_Sprite->SetCurrentAnimationIndex(0);
	sprite0_135_Sprite->SetCurrentFrameIndex(0);
	sprite0_135_Sprite->SetLoop(true);
	sprite0_135_Sprite->SetAnimationSpeed(1.0f);
	sprite0_135_Sprite->SetFlipHorizontal(false);
	sprite0_135_Sprite->SetFlipVertical(false);
	sprite0_135_Sprite->SetLifeTime(0.0f);
	sprite0_135_Sprite->SetVisible(true);
	sprite0_135_Sprite->SetRotationAngle(0.0f);
	sprite0_135_Sprite->SetScale(1.0f, 1.0f);
	sprite0_135_Sprite->SetCenter(Point2D(0.0f,0.0f));
	sprite0_135_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(sprite0_135_Sprite);


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
	ball_136_Sprite = new Sprite(ballAnimations);

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
		ball_136_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	ball_136_Sprite->SetName("ball");
	ball_136_Sprite->SetCollisionActorIndex(1);
	ball_136_Sprite->SetOpacity(1.0f);
	ball_136_Sprite->Play(true);
	ball_136_Sprite->SetPosition(Point2D(0.0f ,100.0f));
	ball_136_Sprite->SetCurrentAnimationIndex(0);
	ball_136_Sprite->SetCurrentFrameIndex(0);
	ball_136_Sprite->SetLoop(true);
	ball_136_Sprite->SetAnimationSpeed(1.0f);
	ball_136_Sprite->SetFlipHorizontal(false);
	ball_136_Sprite->SetFlipVertical(false);
	ball_136_Sprite->SetLifeTime(0.0f);
	ball_136_Sprite->SetVisible(true);
	ball_136_Sprite->SetRotationAngle(0.0f);
	ball_136_Sprite->SetScale(1.0f, 1.0f);
	ball_136_Sprite->SetCenter(Point2D(0.0f,0.0f));
	ball_136_Sprite->SetZOrder(0.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		ball_136_Sprite->SetCenter(Point2D(0.0f,0.0f));
		ball_136_Sprite->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		ball_136_Sprite->AddForce(new ConstantForce(Vector2D(100.0f,100.0f),0.3f));
		ball_136_Sprite->SetVelocity(Vector2D(0.0f,0.0f));
		ball_136_Sprite->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(ball_136_Sprite);


}
void Level0_Layer1_Sprite2(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> PaddleAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation0.png",1,1,frames);
	anim->SetName("Animation0");
	PaddleAnimations.push_back(anim);
	frames.clear();
	Paddle_138_PaddleClass = new PaddleClass(PaddleAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor02);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(true);
		Paddle_138_PaddleClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Paddle_138_PaddleClass->SetName("Paddle");
	Paddle_138_PaddleClass->SetCollisionActorIndex(2);
	Paddle_138_PaddleClass->SetOpacity(1.0f);
	Paddle_138_PaddleClass->Play(true);
	Paddle_138_PaddleClass->SetPosition(Point2D(-4.0f ,-126.0f));
	Paddle_138_PaddleClass->SetCurrentAnimationIndex(0);
	Paddle_138_PaddleClass->SetCurrentFrameIndex(0);
	Paddle_138_PaddleClass->SetLoop(true);
	Paddle_138_PaddleClass->SetAnimationSpeed(1.0f);
	Paddle_138_PaddleClass->SetFlipHorizontal(false);
	Paddle_138_PaddleClass->SetFlipVertical(false);
	Paddle_138_PaddleClass->SetLifeTime(0.0f);
	Paddle_138_PaddleClass->SetVisible(true);
	Paddle_138_PaddleClass->SetRotationAngle(0.0f);
	Paddle_138_PaddleClass->SetScale(1.0f, 1.0f);
	Paddle_138_PaddleClass->SetCenter(Point2D(0.0f,0.0f));
	Paddle_138_PaddleClass->SetZOrder(0.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Paddle_138_PaddleClass->SetCenter(Point2D(0.0f,0.0f));
		Paddle_138_PaddleClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Paddle_138_PaddleClass->SetVelocity(Vector2D(0.0f,0.0f));
		Paddle_138_PaddleClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Paddle_138_PaddleClass);


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

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level0_Layer1_StaticCollision();
}
