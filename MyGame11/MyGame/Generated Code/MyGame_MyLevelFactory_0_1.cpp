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
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Background.png",1,1,frames);
	anim->SetName("Background");
	sprite0Animations.push_back(anim);
	frames.clear();
	sprite0_131_Sprite = new Sprite(sprite0Animations);

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
		sprite0_131_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	sprite0_131_Sprite->SetName("sprite0");
	sprite0_131_Sprite->SetCollisionActorIndex(0);
	sprite0_131_Sprite->SetOpacity(1.0f);
	sprite0_131_Sprite->Play(true);
	sprite0_131_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	sprite0_131_Sprite->SetCurrentAnimationIndex(0);
	sprite0_131_Sprite->SetCurrentFrameIndex(0);
	sprite0_131_Sprite->SetLoop(true);
	sprite0_131_Sprite->SetAnimationSpeed(1.0f);
	sprite0_131_Sprite->SetFlipHorizontal(false);
	sprite0_131_Sprite->SetFlipVertical(false);
	sprite0_131_Sprite->SetLifeTime(0.0f);
	sprite0_131_Sprite->SetVisible(true);
	sprite0_131_Sprite->SetRotationAngle(0.0f);
	sprite0_131_Sprite->SetScale(1.0f, 1.0f);
	sprite0_131_Sprite->SetCenter(Point2D(0.0f,0.0f));
	sprite0_131_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(sprite0_131_Sprite);


}
void Level0_Layer1_Sprite1(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> LRarrowAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Arrowleft.png",4,4,frames);
	anim->SetName("Arrowleft");
	LRarrowAnimations.push_back(anim);
	frames.clear();
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	frames.push_back(0.1f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Arrowright.png",4,4,frames);
	anim->SetName("Arrowright");
	LRarrowAnimations.push_back(anim);
	frames.clear();
	LRarrow_133_ArrowLRClass = new ArrowLRClass(LRarrowAnimations);

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
		LRarrow_133_ArrowLRClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	LRarrow_133_ArrowLRClass->SetName("LRarrow");
	LRarrow_133_ArrowLRClass->SetCollisionActorIndex(1);
	LRarrow_133_ArrowLRClass->SetOpacity(1.0f);
	LRarrow_133_ArrowLRClass->Play(false);
	LRarrow_133_ArrowLRClass->SetPosition(Point2D(-6.0f ,167.0f));
	LRarrow_133_ArrowLRClass->SetCurrentAnimationIndex(0);
	LRarrow_133_ArrowLRClass->SetCurrentFrameIndex(0);
	LRarrow_133_ArrowLRClass->SetLoop(false);
	LRarrow_133_ArrowLRClass->SetAnimationSpeed(1.0f);
	LRarrow_133_ArrowLRClass->SetFlipHorizontal(false);
	LRarrow_133_ArrowLRClass->SetFlipVertical(false);
	LRarrow_133_ArrowLRClass->SetLifeTime(0.0f);
	LRarrow_133_ArrowLRClass->SetVisible(true);
	LRarrow_133_ArrowLRClass->SetRotationAngle(0.0f);
	LRarrow_133_ArrowLRClass->SetScale(1.0f, 1.0f);
	LRarrow_133_ArrowLRClass->SetCenter(Point2D(0.0f,0.0f));
	LRarrow_133_ArrowLRClass->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(LRarrow_133_ArrowLRClass);


}
void Level0_Layer1_Sprite2(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> sprite1Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	frames.push_back(1.0f);
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\arrow.png",2,2,frames);
	anim->SetName("arrow");
	sprite1Animations.push_back(anim);
	frames.clear();
	sprite1_132_ArrowClass = new ArrowClass(sprite1Animations);

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
		sprite1_132_ArrowClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	sprite1_132_ArrowClass->SetName("sprite1");
	sprite1_132_ArrowClass->SetCollisionActorIndex(2);
	sprite1_132_ArrowClass->SetOpacity(1.0f);
	sprite1_132_ArrowClass->Play(false);
	sprite1_132_ArrowClass->SetPosition(Point2D(0.0f ,0.0f));
	sprite1_132_ArrowClass->SetCurrentAnimationIndex(0);
	sprite1_132_ArrowClass->SetCurrentFrameIndex(0);
	sprite1_132_ArrowClass->SetLoop(false);
	sprite1_132_ArrowClass->SetAnimationSpeed(1.0f);
	sprite1_132_ArrowClass->SetFlipHorizontal(false);
	sprite1_132_ArrowClass->SetFlipVertical(false);
	sprite1_132_ArrowClass->SetLifeTime(0.0f);
	sprite1_132_ArrowClass->SetVisible(true);
	sprite1_132_ArrowClass->SetRotationAngle(0.0f);
	sprite1_132_ArrowClass->SetScale(1.0f, 1.0f);
	sprite1_132_ArrowClass->SetCenter(Point2D(0.0f,0.0f));
	sprite1_132_ArrowClass->SetZOrder(0.1f);
	
	mlf->layer1_Layer->AddGameObject(sprite1_132_ArrowClass);


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
