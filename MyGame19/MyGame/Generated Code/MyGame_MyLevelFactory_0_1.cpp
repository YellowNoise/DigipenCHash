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
	std::vector<ProjectFun::SpriteAnimationPtr> playerAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Player.png",1,1,frames);
	anim->SetName("Player");
	playerAnimations.push_back(anim);
	frames.clear();
	player_159_PlayerClass = new PlayerClass(playerAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor00);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(true);
		player_159_PlayerClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	player_159_PlayerClass->SetName("player");
	player_159_PlayerClass->SetCollisionActorIndex(0);
	player_159_PlayerClass->SetOpacity(1.0f);
	player_159_PlayerClass->Play(false);
	player_159_PlayerClass->SetPosition(Point2D(-171.0f ,-4.0f));
	player_159_PlayerClass->SetCurrentAnimationIndex(0);
	player_159_PlayerClass->SetCurrentFrameIndex(0);
	player_159_PlayerClass->SetLoop(false);
	player_159_PlayerClass->SetAnimationSpeed(1.0f);
	player_159_PlayerClass->SetFlipHorizontal(false);
	player_159_PlayerClass->SetFlipVertical(false);
	player_159_PlayerClass->SetLifeTime(0.0f);
	player_159_PlayerClass->SetVisible(true);
	player_159_PlayerClass->SetRotationAngle(0.0f);
	player_159_PlayerClass->SetScale(1.0f, 1.0f);
	player_159_PlayerClass->SetCenter(Point2D(0.0f,0.0f));
	player_159_PlayerClass->SetZOrder(0.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		player_159_PlayerClass->SetCenter(Point2D(0.0f,0.0f));
		player_159_PlayerClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		player_159_PlayerClass->SetVelocity(Vector2D(0.0f,0.0f));
		player_159_PlayerClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(player_159_PlayerClass);


}
void Level0_Layer1_Sprite1(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> sprite1Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation0.png",2,1,frames);
	anim->SetName("Animation0");
	sprite1Animations.push_back(anim);
	frames.clear();
	sprite1_160_EnemyClass = new EnemyClass(sprite1Animations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(true);
		sprite1_160_EnemyClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	sprite1_160_EnemyClass->SetName("sprite1");
	sprite1_160_EnemyClass->SetCollisionActorIndex(1);
	sprite1_160_EnemyClass->SetOpacity(1.0f);
	sprite1_160_EnemyClass->Play(false);
	sprite1_160_EnemyClass->SetPosition(Point2D(230.0f ,130.0f));
	sprite1_160_EnemyClass->SetCurrentAnimationIndex(0);
	sprite1_160_EnemyClass->SetCurrentFrameIndex(0);
	sprite1_160_EnemyClass->SetLoop(false);
	sprite1_160_EnemyClass->SetAnimationSpeed(1.0f);
	sprite1_160_EnemyClass->SetFlipHorizontal(false);
	sprite1_160_EnemyClass->SetFlipVertical(false);
	sprite1_160_EnemyClass->SetLifeTime(0.0f);
	sprite1_160_EnemyClass->SetVisible(true);
	sprite1_160_EnemyClass->SetRotationAngle(0.0f);
	sprite1_160_EnemyClass->SetScale(1.0f, 1.0f);
	sprite1_160_EnemyClass->SetCenter(Point2D(0.0f,0.0f));
	sprite1_160_EnemyClass->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(sprite1_160_EnemyClass);


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
