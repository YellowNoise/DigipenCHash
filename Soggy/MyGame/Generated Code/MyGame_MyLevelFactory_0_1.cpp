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
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\bg.png",1,1,frames);
	anim->SetName("bg");
	bgAnimations.push_back(anim);
	frames.clear();
	bg_8_Sprite = new Sprite(bgAnimations);

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
		bg_8_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	bg_8_Sprite->SetName("bg");
	bg_8_Sprite->SetCollisionActorIndex(1);
	bg_8_Sprite->SetOpacity(1.0f);
	bg_8_Sprite->Play(true);
	bg_8_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	bg_8_Sprite->SetCurrentAnimationIndex(0);
	bg_8_Sprite->SetCurrentFrameIndex(0);
	bg_8_Sprite->SetLoop(true);
	bg_8_Sprite->SetAnimationSpeed(1.0f);
	bg_8_Sprite->SetFlipHorizontal(false);
	bg_8_Sprite->SetFlipVertical(false);
	bg_8_Sprite->SetLifeTime(0.0f);
	bg_8_Sprite->SetVisible(true);
	bg_8_Sprite->SetRotationAngle(0.0f);
	bg_8_Sprite->SetScale(1.0f, 1.0f);
	bg_8_Sprite->SetCenter(Point2D(0.0f,0.0f));
	bg_8_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(bg_8_Sprite);


}
void Level0_Layer1_Sprite1(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> soggyAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Soggy.png",1,1,frames);
	anim->SetName("Soggy");
	soggyAnimations.push_back(anim);
	frames.clear();
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Walk.png",2,2,frames);
	anim->SetName("Walk");
	soggyAnimations.push_back(anim);
	frames.clear();
	frames.push_back(0.16f);
	frames.push_back(0.16f);
	frames.push_back(0.16f);
	frames.push_back(0.16f);
	frames.push_back(0.16f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Jump.png",3,2,frames);
	anim->SetName("Jump");
	soggyAnimations.push_back(anim);
	frames.clear();
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\win.png",1,1,frames);
	anim->SetName("win");
	soggyAnimations.push_back(anim);
	frames.clear();
	soggy_11_SoggyClass = new SoggyClass(soggyAnimations);

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
		soggy_11_SoggyClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	soggy_11_SoggyClass->SetName("soggy");
	soggy_11_SoggyClass->SetCollisionActorIndex(2);
	soggy_11_SoggyClass->SetOpacity(1.0f);
	soggy_11_SoggyClass->Play(true);
	soggy_11_SoggyClass->SetPosition(Point2D(-883.0f ,224.0f));
	soggy_11_SoggyClass->SetCurrentAnimationIndex(0);
	soggy_11_SoggyClass->SetCurrentFrameIndex(0);
	soggy_11_SoggyClass->SetLoop(true);
	soggy_11_SoggyClass->SetAnimationSpeed(1.0f);
	soggy_11_SoggyClass->SetFlipHorizontal(false);
	soggy_11_SoggyClass->SetFlipVertical(false);
	soggy_11_SoggyClass->SetLifeTime(0.0f);
	soggy_11_SoggyClass->SetVisible(true);
	soggy_11_SoggyClass->SetRotationAngle(0.0f);
	soggy_11_SoggyClass->SetScale(1.0f, 1.0f);
	soggy_11_SoggyClass->SetCenter(Point2D(0.0f,0.0f));
	soggy_11_SoggyClass->SetZOrder(0.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		soggy_11_SoggyClass->SetCenter(Point2D(0.0f,0.0f));
		soggy_11_SoggyClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		soggy_11_SoggyClass->SetVelocity(Vector2D(0.0f,0.0f));
		soggy_11_SoggyClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(soggy_11_SoggyClass);


}
void Level0_Layer1_Sprite2(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> Enemy1Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation0.png",2,2,frames);
	anim->SetName("Animation0");
	Enemy1Animations.push_back(anim);
	frames.clear();
	Enemy1_25_EnemyClass1 = new EnemyClass1(Enemy1Animations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor03);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Enemy1_25_EnemyClass1->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Enemy1_25_EnemyClass1->SetName("Enemy1");
	Enemy1_25_EnemyClass1->SetCollisionActorIndex(3);
	Enemy1_25_EnemyClass1->SetOpacity(1.0f);
	Enemy1_25_EnemyClass1->Play(true);
	Enemy1_25_EnemyClass1->SetPosition(Point2D(-218.0f ,145.0f));
	Enemy1_25_EnemyClass1->SetCurrentAnimationIndex(0);
	Enemy1_25_EnemyClass1->SetCurrentFrameIndex(0);
	Enemy1_25_EnemyClass1->SetLoop(true);
	Enemy1_25_EnemyClass1->SetAnimationSpeed(1.0f);
	Enemy1_25_EnemyClass1->SetFlipHorizontal(false);
	Enemy1_25_EnemyClass1->SetFlipVertical(false);
	Enemy1_25_EnemyClass1->SetLifeTime(0.0f);
	Enemy1_25_EnemyClass1->SetVisible(true);
	Enemy1_25_EnemyClass1->SetRotationAngle(0.0f);
	Enemy1_25_EnemyClass1->SetScale(1.0f, 1.0f);
	Enemy1_25_EnemyClass1->SetCenter(Point2D(0.0f,0.0f));
	Enemy1_25_EnemyClass1->SetZOrder(0.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Enemy1_25_EnemyClass1->SetCenter(Point2D(0.0f,0.0f));
		Enemy1_25_EnemyClass1->AddPhysicalProperties(Physics2D::MassProperties(0.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Enemy1_25_EnemyClass1->SetVelocity(Vector2D(0.0f,0.0f));
		Enemy1_25_EnemyClass1->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Enemy1_25_EnemyClass1);


}
void Level0_Layer1_Sprite3(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> Enemy2Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation0.png",2,2,frames);
	anim->SetName("Animation0");
	Enemy2Animations.push_back(anim);
	frames.clear();
	Enemy2_27_EnemyClass2 = new EnemyClass2(Enemy2Animations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor03);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Enemy2_27_EnemyClass2->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Enemy2_27_EnemyClass2->SetName("Enemy2");
	Enemy2_27_EnemyClass2->SetCollisionActorIndex(3);
	Enemy2_27_EnemyClass2->SetOpacity(1.0f);
	Enemy2_27_EnemyClass2->Play(true);
	Enemy2_27_EnemyClass2->SetPosition(Point2D(-498.0f ,62.0f));
	Enemy2_27_EnemyClass2->SetCurrentAnimationIndex(0);
	Enemy2_27_EnemyClass2->SetCurrentFrameIndex(0);
	Enemy2_27_EnemyClass2->SetLoop(true);
	Enemy2_27_EnemyClass2->SetAnimationSpeed(1.0f);
	Enemy2_27_EnemyClass2->SetFlipHorizontal(false);
	Enemy2_27_EnemyClass2->SetFlipVertical(false);
	Enemy2_27_EnemyClass2->SetLifeTime(0.0f);
	Enemy2_27_EnemyClass2->SetVisible(true);
	Enemy2_27_EnemyClass2->SetRotationAngle(0.0f);
	Enemy2_27_EnemyClass2->SetScale(1.0f, 1.0f);
	Enemy2_27_EnemyClass2->SetCenter(Point2D(0.0f,0.0f));
	Enemy2_27_EnemyClass2->SetZOrder(0.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Enemy2_27_EnemyClass2->SetCenter(Point2D(0.0f,0.0f));
		Enemy2_27_EnemyClass2->AddPhysicalProperties(Physics2D::MassProperties(0.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Enemy2_27_EnemyClass2->SetVelocity(Vector2D(0.0f,0.0f));
		Enemy2_27_EnemyClass2->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Enemy2_27_EnemyClass2);


}
void Level0_Layer1_Sprite4(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> Enemy1Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation0.png",2,2,frames);
	anim->SetName("Animation0");
	Enemy1Animations.push_back(anim);
	frames.clear();
	Enemy1_28_EnemyClass1 = new EnemyClass1(Enemy1Animations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor03);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Enemy1_28_EnemyClass1->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Enemy1_28_EnemyClass1->SetName("Enemy1");
	Enemy1_28_EnemyClass1->SetCollisionActorIndex(3);
	Enemy1_28_EnemyClass1->SetOpacity(1.0f);
	Enemy1_28_EnemyClass1->Play(true);
	Enemy1_28_EnemyClass1->SetPosition(Point2D(-218.0f ,145.0f));
	Enemy1_28_EnemyClass1->SetCurrentAnimationIndex(0);
	Enemy1_28_EnemyClass1->SetCurrentFrameIndex(0);
	Enemy1_28_EnemyClass1->SetLoop(true);
	Enemy1_28_EnemyClass1->SetAnimationSpeed(1.0f);
	Enemy1_28_EnemyClass1->SetFlipHorizontal(false);
	Enemy1_28_EnemyClass1->SetFlipVertical(false);
	Enemy1_28_EnemyClass1->SetLifeTime(0.0f);
	Enemy1_28_EnemyClass1->SetVisible(true);
	Enemy1_28_EnemyClass1->SetRotationAngle(0.0f);
	Enemy1_28_EnemyClass1->SetScale(1.0f, 1.0f);
	Enemy1_28_EnemyClass1->SetCenter(Point2D(0.0f,0.0f));
	Enemy1_28_EnemyClass1->SetZOrder(0.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Enemy1_28_EnemyClass1->SetCenter(Point2D(0.0f,0.0f));
		Enemy1_28_EnemyClass1->AddPhysicalProperties(Physics2D::MassProperties(0.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Enemy1_28_EnemyClass1->SetVelocity(Vector2D(0.0f,0.0f));
		Enemy1_28_EnemyClass1->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Enemy1_28_EnemyClass1);


}
void Level0_Layer1_Sprite5(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> Enemy1Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation0.png",2,2,frames);
	anim->SetName("Animation0");
	Enemy1Animations.push_back(anim);
	frames.clear();
	Enemy1_29_EnemyClass1 = new EnemyClass1(Enemy1Animations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor03);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Enemy1_29_EnemyClass1->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Enemy1_29_EnemyClass1->SetName("Enemy1");
	Enemy1_29_EnemyClass1->SetCollisionActorIndex(3);
	Enemy1_29_EnemyClass1->SetOpacity(1.0f);
	Enemy1_29_EnemyClass1->Play(true);
	Enemy1_29_EnemyClass1->SetPosition(Point2D(-628.0f ,-139.0f));
	Enemy1_29_EnemyClass1->SetCurrentAnimationIndex(0);
	Enemy1_29_EnemyClass1->SetCurrentFrameIndex(0);
	Enemy1_29_EnemyClass1->SetLoop(true);
	Enemy1_29_EnemyClass1->SetAnimationSpeed(1.0f);
	Enemy1_29_EnemyClass1->SetFlipHorizontal(false);
	Enemy1_29_EnemyClass1->SetFlipVertical(false);
	Enemy1_29_EnemyClass1->SetLifeTime(0.0f);
	Enemy1_29_EnemyClass1->SetVisible(true);
	Enemy1_29_EnemyClass1->SetRotationAngle(0.0f);
	Enemy1_29_EnemyClass1->SetScale(1.0f, 1.0f);
	Enemy1_29_EnemyClass1->SetCenter(Point2D(0.0f,0.0f));
	Enemy1_29_EnemyClass1->SetZOrder(0.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Enemy1_29_EnemyClass1->SetCenter(Point2D(0.0f,0.0f));
		Enemy1_29_EnemyClass1->AddPhysicalProperties(Physics2D::MassProperties(0.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Enemy1_29_EnemyClass1->SetVelocity(Vector2D(0.0f,0.0f));
		Enemy1_29_EnemyClass1->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Enemy1_29_EnemyClass1);


}
void Level0_Layer1_Sprite6(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> Enemy2Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	frames.push_back(0.25f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation0.png",2,2,frames);
	anim->SetName("Animation0");
	Enemy2Animations.push_back(anim);
	frames.clear();
	Enemy2_30_EnemyClass2 = new EnemyClass2(Enemy2Animations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor03);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Enemy2_30_EnemyClass2->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Enemy2_30_EnemyClass2->SetName("Enemy2");
	Enemy2_30_EnemyClass2->SetCollisionActorIndex(3);
	Enemy2_30_EnemyClass2->SetOpacity(1.0f);
	Enemy2_30_EnemyClass2->Play(true);
	Enemy2_30_EnemyClass2->SetPosition(Point2D(417.0f ,-130.0f));
	Enemy2_30_EnemyClass2->SetCurrentAnimationIndex(0);
	Enemy2_30_EnemyClass2->SetCurrentFrameIndex(0);
	Enemy2_30_EnemyClass2->SetLoop(true);
	Enemy2_30_EnemyClass2->SetAnimationSpeed(1.0f);
	Enemy2_30_EnemyClass2->SetFlipHorizontal(false);
	Enemy2_30_EnemyClass2->SetFlipVertical(false);
	Enemy2_30_EnemyClass2->SetLifeTime(0.0f);
	Enemy2_30_EnemyClass2->SetVisible(true);
	Enemy2_30_EnemyClass2->SetRotationAngle(0.0f);
	Enemy2_30_EnemyClass2->SetScale(1.0f, 1.0f);
	Enemy2_30_EnemyClass2->SetCenter(Point2D(0.0f,0.0f));
	Enemy2_30_EnemyClass2->SetZOrder(0.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Enemy2_30_EnemyClass2->SetCenter(Point2D(0.0f,0.0f));
		Enemy2_30_EnemyClass2->AddPhysicalProperties(Physics2D::MassProperties(0.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Enemy2_30_EnemyClass2->SetVelocity(Vector2D(0.0f,0.0f));
		Enemy2_30_EnemyClass2->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Enemy2_30_EnemyClass2);


}
void Level0_Layer1_Sprite7(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> RingAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(0.05f);
	frames.push_back(0.05f);
	frames.push_back(0.05f);
	frames.push_back(0.05f);
	frames.push_back(0.05f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Ring.png",3,2,frames);
	anim->SetName("Ring");
	RingAnimations.push_back(anim);
	frames.clear();
	Ring_23_RingClass = new RingClass(RingAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor04);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Ring_23_RingClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Ring_23_RingClass->SetName("Ring");
	Ring_23_RingClass->SetCollisionActorIndex(4);
	Ring_23_RingClass->SetOpacity(1.0f);
	Ring_23_RingClass->Play(true);
	Ring_23_RingClass->SetPosition(Point2D(338.0f ,-133.0f));
	Ring_23_RingClass->SetCurrentAnimationIndex(0);
	Ring_23_RingClass->SetCurrentFrameIndex(0);
	Ring_23_RingClass->SetLoop(true);
	Ring_23_RingClass->SetAnimationSpeed(1.0f);
	Ring_23_RingClass->SetFlipHorizontal(false);
	Ring_23_RingClass->SetFlipVertical(false);
	Ring_23_RingClass->SetLifeTime(0.0f);
	Ring_23_RingClass->SetVisible(true);
	Ring_23_RingClass->SetRotationAngle(0.0f);
	Ring_23_RingClass->SetScale(1.0f, 1.0f);
	Ring_23_RingClass->SetCenter(Point2D(0.0f,0.0f));
	Ring_23_RingClass->SetZOrder(0.1f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Ring_23_RingClass->SetCenter(Point2D(0.0f,0.0f));
		Ring_23_RingClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Ring_23_RingClass->SetVelocity(Vector2D(0.0f,0.0f));
		Ring_23_RingClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Ring_23_RingClass);


}
void Level0_Layer1_Sprite8(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> RingAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(0.05f);
	frames.push_back(0.05f);
	frames.push_back(0.05f);
	frames.push_back(0.05f);
	frames.push_back(0.05f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Ring.png",3,2,frames);
	anim->SetName("Ring");
	RingAnimations.push_back(anim);
	frames.clear();
	Ring_18_RingClass = new RingClass(RingAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor04);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Ring_18_RingClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Ring_18_RingClass->SetName("Ring");
	Ring_18_RingClass->SetCollisionActorIndex(4);
	Ring_18_RingClass->SetOpacity(1.0f);
	Ring_18_RingClass->Play(true);
	Ring_18_RingClass->SetPosition(Point2D(-13.0f ,-6.0f));
	Ring_18_RingClass->SetCurrentAnimationIndex(0);
	Ring_18_RingClass->SetCurrentFrameIndex(0);
	Ring_18_RingClass->SetLoop(true);
	Ring_18_RingClass->SetAnimationSpeed(1.0f);
	Ring_18_RingClass->SetFlipHorizontal(false);
	Ring_18_RingClass->SetFlipVertical(false);
	Ring_18_RingClass->SetLifeTime(0.0f);
	Ring_18_RingClass->SetVisible(true);
	Ring_18_RingClass->SetRotationAngle(0.0f);
	Ring_18_RingClass->SetScale(1.0f, 1.0f);
	Ring_18_RingClass->SetCenter(Point2D(0.0f,0.0f));
	Ring_18_RingClass->SetZOrder(0.1f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Ring_18_RingClass->SetCenter(Point2D(0.0f,0.0f));
		Ring_18_RingClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Ring_18_RingClass->SetVelocity(Vector2D(0.0f,0.0f));
		Ring_18_RingClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Ring_18_RingClass);


}
void Level0_Layer1_Sprite9(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> angelAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Angel.png",1,1,frames);
	anim->SetName("Angel");
	angelAnimations.push_back(anim);
	frames.clear();
	angel_34_AngelClass = new AngelClass(angelAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor05);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		angel_34_AngelClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	angel_34_AngelClass->SetName("angel");
	angel_34_AngelClass->SetCollisionActorIndex(5);
	angel_34_AngelClass->SetOpacity(1.0f);
	angel_34_AngelClass->Play(true);
	angel_34_AngelClass->SetPosition(Point2D(-859.0f ,250.0f));
	angel_34_AngelClass->SetCurrentAnimationIndex(0);
	angel_34_AngelClass->SetCurrentFrameIndex(0);
	angel_34_AngelClass->SetLoop(true);
	angel_34_AngelClass->SetAnimationSpeed(1.0f);
	angel_34_AngelClass->SetFlipHorizontal(false);
	angel_34_AngelClass->SetFlipVertical(false);
	angel_34_AngelClass->SetLifeTime(0.0f);
	angel_34_AngelClass->SetVisible(false);
	angel_34_AngelClass->SetRotationAngle(0.0f);
	angel_34_AngelClass->SetScale(1.0f, 1.0f);
	angel_34_AngelClass->SetCenter(Point2D(0.0f,0.0f));
	angel_34_AngelClass->SetZOrder(0.3f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		angel_34_AngelClass->SetCenter(Point2D(0.0f,0.0f));
		angel_34_AngelClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		angel_34_AngelClass->SetVelocity(Vector2D(0.0f,0.0f));
		angel_34_AngelClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(angel_34_AngelClass);


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
	 Level0_Layer1_Sprite4(this);
	 Level0_Layer1_Sprite5(this);
	 Level0_Layer1_Sprite6(this);
	 Level0_Layer1_Sprite7(this);
	 Level0_Layer1_Sprite8(this);
	 Level0_Layer1_Sprite9(this);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level0_Layer1_StaticCollision();
}
