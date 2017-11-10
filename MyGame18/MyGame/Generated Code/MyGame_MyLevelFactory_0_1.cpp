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
	std::vector<ProjectFun::SpriteAnimationPtr> BulletAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\bullet.png",1,1,frames);
	anim->SetName("bullet");
	BulletAnimations.push_back(anim);
	frames.clear();
	Bullet_156_BulletClass = new BulletClass(BulletAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor00);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Bullet_156_BulletClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Bullet_156_BulletClass->SetName("Bullet");
	Bullet_156_BulletClass->SetCollisionActorIndex(0);
	Bullet_156_BulletClass->SetOpacity(1.0f);
	Bullet_156_BulletClass->Play(true);
	Bullet_156_BulletClass->SetPosition(Point2D(-1000.0f ,0.0f));
	Bullet_156_BulletClass->SetCurrentAnimationIndex(0);
	Bullet_156_BulletClass->SetCurrentFrameIndex(0);
	Bullet_156_BulletClass->SetLoop(true);
	Bullet_156_BulletClass->SetAnimationSpeed(1.0f);
	Bullet_156_BulletClass->SetFlipHorizontal(false);
	Bullet_156_BulletClass->SetFlipVertical(false);
	Bullet_156_BulletClass->SetLifeTime(0.0f);
	Bullet_156_BulletClass->SetVisible(false);
	Bullet_156_BulletClass->SetRotationAngle(0.0f);
	Bullet_156_BulletClass->SetScale(1.0f, 1.0f);
	Bullet_156_BulletClass->SetCenter(Point2D(0.0f,0.0f));
	Bullet_156_BulletClass->SetZOrder(0.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Bullet_156_BulletClass->SetCenter(Point2D(0.0f,0.0f));
		Bullet_156_BulletClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Bullet_156_BulletClass->SetVelocity(Vector2D(0.0f,0.0f));
		Bullet_156_BulletClass->SetAngularVelocity(-0.1f);
	}

	mlf->layer1_Layer->AddGameObject(Bullet_156_BulletClass);


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
	ball_157_BallClass = new BallClass(ballAnimations);

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
		ball_157_BallClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	ball_157_BallClass->SetName("ball");
	ball_157_BallClass->SetCollisionActorIndex(1);
	ball_157_BallClass->SetOpacity(1.0f);
	ball_157_BallClass->Play(true);
	ball_157_BallClass->SetPosition(Point2D(0.0f ,300.0f));
	ball_157_BallClass->SetCurrentAnimationIndex(0);
	ball_157_BallClass->SetCurrentFrameIndex(0);
	ball_157_BallClass->SetLoop(true);
	ball_157_BallClass->SetAnimationSpeed(1.0f);
	ball_157_BallClass->SetFlipHorizontal(false);
	ball_157_BallClass->SetFlipVertical(false);
	ball_157_BallClass->SetLifeTime(0.0f);
	ball_157_BallClass->SetVisible(true);
	ball_157_BallClass->SetRotationAngle(0.0f);
	ball_157_BallClass->SetScale(1.0f, 1.0f);
	ball_157_BallClass->SetCenter(Point2D(0.0f,0.0f));
	ball_157_BallClass->SetZOrder(0.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		ball_157_BallClass->SetCenter(Point2D(0.0f,0.0f));
		ball_157_BallClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		ball_157_BallClass->AddForce(new GravityForce(Vector2D(0.0f,-1.0f),9.8f));
		ball_157_BallClass->SetVelocity(Vector2D(0.0f,0.0f));
		ball_157_BallClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(ball_157_BallClass);


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
