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
void Level1_Layer0_Sprite0(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> sprite0Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation1.png",1,1,frames);
	anim->SetName("Animation1");
	sprite0Animations.push_back(anim);
	frames.clear();
	sprite0_37_Sprite = new Sprite(sprite0Animations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor06);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		sprite0_37_Sprite->AddCollision(dynamicCollisionData, mlf->layer0_Layer->GetCollisionId());
	}

	sprite0_37_Sprite->SetName("sprite0");
	sprite0_37_Sprite->SetCollisionActorIndex(6);
	sprite0_37_Sprite->SetOpacity(1.0f);
	sprite0_37_Sprite->Play(true);
	sprite0_37_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	sprite0_37_Sprite->SetCurrentAnimationIndex(0);
	sprite0_37_Sprite->SetCurrentFrameIndex(0);
	sprite0_37_Sprite->SetLoop(true);
	sprite0_37_Sprite->SetAnimationSpeed(1.0f);
	sprite0_37_Sprite->SetFlipHorizontal(false);
	sprite0_37_Sprite->SetFlipVertical(false);
	sprite0_37_Sprite->SetLifeTime(0.0f);
	sprite0_37_Sprite->SetVisible(true);
	sprite0_37_Sprite->SetRotationAngle(0.0f);
	sprite0_37_Sprite->SetScale(1.0f, 1.0f);
	sprite0_37_Sprite->SetCenter(Point2D(0.0f,0.0f));
	sprite0_37_Sprite->SetZOrder(0.0f);
	sprite0_37_Sprite->SetHUDObject(true);
	mlf->layer0_Layer->AddGameObject(sprite0_37_Sprite);


}
void Level1_Layer0_Sprite1(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> cursorAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation9.png",1,1,frames);
	anim->SetName("Animation9");
	cursorAnimations.push_back(anim);
	frames.clear();
	cursor_52_CursorClass = new CursorClass(cursorAnimations);

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
		cursor_52_CursorClass->AddCollision(dynamicCollisionData, mlf->layer0_Layer->GetCollisionId());
	}

	cursor_52_CursorClass->SetName("cursor");
	cursor_52_CursorClass->SetCollisionActorIndex(7);
	cursor_52_CursorClass->SetOpacity(1.0f);
	cursor_52_CursorClass->Play(true);
	cursor_52_CursorClass->SetPosition(Point2D(-102.0f ,-139.0f));
	cursor_52_CursorClass->SetCurrentAnimationIndex(0);
	cursor_52_CursorClass->SetCurrentFrameIndex(0);
	cursor_52_CursorClass->SetLoop(true);
	cursor_52_CursorClass->SetAnimationSpeed(1.0f);
	cursor_52_CursorClass->SetFlipHorizontal(false);
	cursor_52_CursorClass->SetFlipVertical(false);
	cursor_52_CursorClass->SetLifeTime(0.0f);
	cursor_52_CursorClass->SetVisible(true);
	cursor_52_CursorClass->SetRotationAngle(0.0f);
	cursor_52_CursorClass->SetScale(1.0f, 1.0f);
	cursor_52_CursorClass->SetCenter(Point2D(0.0f,0.0f));
	cursor_52_CursorClass->SetZOrder(0.0f);
	cursor_52_CursorClass->SetHUDObject(true);
	mlf->layer0_Layer->AddGameObject(cursor_52_CursorClass);


}
void Level1_Layer0_Sprite2(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> sprite1Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation8.png",1,1,frames);
	anim->SetName("Animation8");
	sprite1Animations.push_back(anim);
	frames.clear();
	sprite1_55_Sprite = new Sprite(sprite1Animations);

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
		sprite1_55_Sprite->AddCollision(dynamicCollisionData, mlf->layer0_Layer->GetCollisionId());
	}

	sprite1_55_Sprite->SetName("sprite1");
	sprite1_55_Sprite->SetCollisionActorIndex(8);
	sprite1_55_Sprite->SetOpacity(1.0f);
	sprite1_55_Sprite->Play(true);
	sprite1_55_Sprite->SetPosition(Point2D(-1.0f ,-252.0f));
	sprite1_55_Sprite->SetCurrentAnimationIndex(0);
	sprite1_55_Sprite->SetCurrentFrameIndex(0);
	sprite1_55_Sprite->SetLoop(true);
	sprite1_55_Sprite->SetAnimationSpeed(1.0f);
	sprite1_55_Sprite->SetFlipHorizontal(false);
	sprite1_55_Sprite->SetFlipVertical(false);
	sprite1_55_Sprite->SetLifeTime(0.0f);
	sprite1_55_Sprite->SetVisible(true);
	sprite1_55_Sprite->SetRotationAngle(0.0f);
	sprite1_55_Sprite->SetScale(1.0f, 1.0f);
	sprite1_55_Sprite->SetCenter(Point2D(0.0f,0.0f));
	sprite1_55_Sprite->SetZOrder(0.0f);
	sprite1_55_Sprite->SetHUDObject(true);
	mlf->layer0_Layer->AddGameObject(sprite1_55_Sprite);


}


//ParticleSystems Setters

//Joints Setters

void MyLevelFactory::Level1_Layer0_StaticCollision()
{
	layer0_Layer->ReadInformation_StaticCollision(Game::GetInstance()->GetDirectory() + "\\Resources\\Layers Collisions\\level1_layer0.txt");
}

void MyLevelFactory::Set_Level1_Layer0_Objects()
{
	 Level1_Layer0_Sprite0(this);
	 Level1_Layer0_Sprite1(this);
	 Level1_Layer0_Sprite2(this);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level1_Layer0_StaticCollision();
}
