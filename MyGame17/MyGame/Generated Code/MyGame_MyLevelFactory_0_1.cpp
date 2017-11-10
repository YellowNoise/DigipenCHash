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
	std::vector<ProjectFun::SpriteAnimationPtr> paddleAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Paddle.png",1,1,frames);
	anim->SetName("Paddle");
	paddleAnimations.push_back(anim);
	frames.clear();
	paddle_152_Sprite = new Sprite(paddleAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor00);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(1);
		dynamicCollisionData->SetCanCollid(3,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		paddle_152_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	paddle_152_Sprite->SetName("paddle");
	paddle_152_Sprite->SetCollisionActorIndex(0);
	paddle_152_Sprite->SetOpacity(1.0f);
	paddle_152_Sprite->Play(true);
	paddle_152_Sprite->SetPosition(Point2D(0.0f ,-200.0f));
	paddle_152_Sprite->SetCurrentAnimationIndex(0);
	paddle_152_Sprite->SetCurrentFrameIndex(0);
	paddle_152_Sprite->SetLoop(true);
	paddle_152_Sprite->SetAnimationSpeed(1.0f);
	paddle_152_Sprite->SetFlipHorizontal(false);
	paddle_152_Sprite->SetFlipVertical(false);
	paddle_152_Sprite->SetLifeTime(0.0f);
	paddle_152_Sprite->SetVisible(true);
	paddle_152_Sprite->SetRotationAngle(0.0f);
	paddle_152_Sprite->SetScale(1.0f, 1.0f);
	paddle_152_Sprite->SetCenter(Point2D(0.0f,0.0f));
	paddle_152_Sprite->SetZOrder(0.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		paddle_152_Sprite->SetCenter(Point2D(0.0f,0.0f));
		paddle_152_Sprite->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		paddle_152_Sprite->SetVelocity(Vector2D(0.0f,0.0f));
		paddle_152_Sprite->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(paddle_152_Sprite);


}
void Level0_Layer1_Sprite1(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> bluballAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\bluball.png",1,1,frames);
	anim->SetName("bluball");
	bluballAnimations.push_back(anim);
	frames.clear();
	bluball_153_Sprite = new Sprite(bluballAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(2);
		dynamicCollisionData->SetCanCollid(3,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		bluball_153_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	bluball_153_Sprite->SetName("bluball");
	bluball_153_Sprite->SetCollisionActorIndex(1);
	bluball_153_Sprite->SetOpacity(1.0f);
	bluball_153_Sprite->Play(true);
	bluball_153_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	bluball_153_Sprite->SetCurrentAnimationIndex(0);
	bluball_153_Sprite->SetCurrentFrameIndex(0);
	bluball_153_Sprite->SetLoop(true);
	bluball_153_Sprite->SetAnimationSpeed(1.0f);
	bluball_153_Sprite->SetFlipHorizontal(false);
	bluball_153_Sprite->SetFlipVertical(false);
	bluball_153_Sprite->SetLifeTime(0.0f);
	bluball_153_Sprite->SetVisible(true);
	bluball_153_Sprite->SetRotationAngle(0.0f);
	bluball_153_Sprite->SetScale(1.0f, 1.0f);
	bluball_153_Sprite->SetCenter(Point2D(0.0f,0.0f));
	bluball_153_Sprite->SetZOrder(0.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		bluball_153_Sprite->SetCenter(Point2D(0.0f,0.0f));
		bluball_153_Sprite->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		bluball_153_Sprite->SetVelocity(Vector2D(0.0f,0.0f));
		bluball_153_Sprite->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(bluball_153_Sprite);


}
void Level0_Layer1_Sprite2(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> redballAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation0.png",1,1,frames);
	anim->SetName("Animation0");
	redballAnimations.push_back(anim);
	frames.clear();
	redball_154_Sprite = new Sprite(redballAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor02);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(3);
		dynamicCollisionData->SetUpdateOnIdle(false);
		redball_154_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	redball_154_Sprite->SetName("redball");
	redball_154_Sprite->SetCollisionActorIndex(2);
	redball_154_Sprite->SetOpacity(1.0f);
	redball_154_Sprite->Play(true);
	redball_154_Sprite->SetPosition(Point2D(0.0f ,200.0f));
	redball_154_Sprite->SetCurrentAnimationIndex(0);
	redball_154_Sprite->SetCurrentFrameIndex(0);
	redball_154_Sprite->SetLoop(true);
	redball_154_Sprite->SetAnimationSpeed(1.0f);
	redball_154_Sprite->SetFlipHorizontal(false);
	redball_154_Sprite->SetFlipVertical(false);
	redball_154_Sprite->SetLifeTime(0.0f);
	redball_154_Sprite->SetVisible(true);
	redball_154_Sprite->SetRotationAngle(0.0f);
	redball_154_Sprite->SetScale(1.0f, 1.0f);
	redball_154_Sprite->SetCenter(Point2D(0.0f,0.0f));
	redball_154_Sprite->SetZOrder(0.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		redball_154_Sprite->SetCenter(Point2D(0.0f,0.0f));
		redball_154_Sprite->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		redball_154_Sprite->AddForce(new GravityForce(Vector2D(0.0f,-1.0f),9.8f));
		redball_154_Sprite->SetVelocity(Vector2D(0.0f,0.0f));
		redball_154_Sprite->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(redball_154_Sprite);


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
