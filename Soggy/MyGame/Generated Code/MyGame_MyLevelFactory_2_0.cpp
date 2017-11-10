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
void Level2_Layer0_Sprite0(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> sprite0Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation2.png",1,1,frames);
	anim->SetName("Animation2");
	sprite0Animations.push_back(anim);
	frames.clear();
	sprite0_39_Sprite = new Sprite(sprite0Animations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor09);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		sprite0_39_Sprite->AddCollision(dynamicCollisionData, mlf->layer0_Layer->GetCollisionId());
	}

	sprite0_39_Sprite->SetName("sprite0");
	sprite0_39_Sprite->SetCollisionActorIndex(9);
	sprite0_39_Sprite->SetOpacity(1.0f);
	sprite0_39_Sprite->Play(true);
	sprite0_39_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	sprite0_39_Sprite->SetCurrentAnimationIndex(0);
	sprite0_39_Sprite->SetCurrentFrameIndex(0);
	sprite0_39_Sprite->SetLoop(true);
	sprite0_39_Sprite->SetAnimationSpeed(1.0f);
	sprite0_39_Sprite->SetFlipHorizontal(false);
	sprite0_39_Sprite->SetFlipVertical(false);
	sprite0_39_Sprite->SetLifeTime(0.0f);
	sprite0_39_Sprite->SetVisible(true);
	sprite0_39_Sprite->SetRotationAngle(0.0f);
	sprite0_39_Sprite->SetScale(1.0f, 1.0f);
	sprite0_39_Sprite->SetCenter(Point2D(0.0f,0.0f));
	sprite0_39_Sprite->SetZOrder(0.0f);
	sprite0_39_Sprite->SetHUDObject(true);
	mlf->layer0_Layer->AddGameObject(sprite0_39_Sprite);


}
void Level2_Layer0_Sprite1(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> sprite0Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation9.png",1,1,frames);
	anim->SetName("Animation9");
	sprite0Animations.push_back(anim);
	frames.clear();
	sprite0_53_CursorClass = new CursorClass(sprite0Animations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor07);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(true);
		sprite0_53_CursorClass->AddCollision(dynamicCollisionData, mlf->layer0_Layer->GetCollisionId());
	}

	sprite0_53_CursorClass->SetName("sprite0");
	sprite0_53_CursorClass->SetCollisionActorIndex(7);
	sprite0_53_CursorClass->SetOpacity(1.0f);
	sprite0_53_CursorClass->Play(true);
	sprite0_53_CursorClass->SetPosition(Point2D(66.0f ,-166.0f));
	sprite0_53_CursorClass->SetCurrentAnimationIndex(0);
	sprite0_53_CursorClass->SetCurrentFrameIndex(0);
	sprite0_53_CursorClass->SetLoop(true);
	sprite0_53_CursorClass->SetAnimationSpeed(1.0f);
	sprite0_53_CursorClass->SetFlipHorizontal(false);
	sprite0_53_CursorClass->SetFlipVertical(false);
	sprite0_53_CursorClass->SetLifeTime(0.0f);
	sprite0_53_CursorClass->SetVisible(true);
	sprite0_53_CursorClass->SetRotationAngle(0.0f);
	sprite0_53_CursorClass->SetScale(1.0f, 1.0f);
	sprite0_53_CursorClass->SetCenter(Point2D(0.0f,0.0f));
	sprite0_53_CursorClass->SetZOrder(0.0f);
	sprite0_53_CursorClass->SetHUDObject(true);
	mlf->layer0_Layer->AddGameObject(sprite0_53_CursorClass);


}
void Level2_Layer0_Sprite2(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> sprite1Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation8.png",1,1,frames);
	anim->SetName("Animation8");
	sprite1Animations.push_back(anim);
	frames.clear();
	sprite1_54_Sprite = new Sprite(sprite1Animations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor08);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		sprite1_54_Sprite->AddCollision(dynamicCollisionData, mlf->layer0_Layer->GetCollisionId());
	}

	sprite1_54_Sprite->SetName("sprite1");
	sprite1_54_Sprite->SetCollisionActorIndex(8);
	sprite1_54_Sprite->SetOpacity(1.0f);
	sprite1_54_Sprite->Play(true);
	sprite1_54_Sprite->SetPosition(Point2D(-2.0f ,-252.0f));
	sprite1_54_Sprite->SetCurrentAnimationIndex(0);
	sprite1_54_Sprite->SetCurrentFrameIndex(0);
	sprite1_54_Sprite->SetLoop(true);
	sprite1_54_Sprite->SetAnimationSpeed(1.0f);
	sprite1_54_Sprite->SetFlipHorizontal(false);
	sprite1_54_Sprite->SetFlipVertical(false);
	sprite1_54_Sprite->SetLifeTime(0.0f);
	sprite1_54_Sprite->SetVisible(true);
	sprite1_54_Sprite->SetRotationAngle(0.0f);
	sprite1_54_Sprite->SetScale(1.0f, 1.0f);
	sprite1_54_Sprite->SetCenter(Point2D(0.0f,0.0f));
	sprite1_54_Sprite->SetZOrder(0.0f);
	sprite1_54_Sprite->SetHUDObject(true);
	mlf->layer0_Layer->AddGameObject(sprite1_54_Sprite);


}


//ParticleSystems Setters

//Joints Setters

void MyLevelFactory::Level2_Layer0_StaticCollision()
{
	layer0_Layer->ReadInformation_StaticCollision(Game::GetInstance()->GetDirectory() + "\\Resources\\Layers Collisions\\level2_layer0.txt");
}

void MyLevelFactory::Set_Level2_Layer0_Objects()
{
	 Level2_Layer0_Sprite0(this);
	 Level2_Layer0_Sprite1(this);
	 Level2_Layer0_Sprite2(this);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level2_Layer0_StaticCollision();
}
