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
void Level3_Layer1_Sprite0(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BGAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation3.png",1,1,frames);
	anim->SetName("Animation3");
	BGAnimations.push_back(anim);
	frames.clear();
	BG_41_Sprite = new Sprite(BGAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor10);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		BG_41_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	BG_41_Sprite->SetName("BG");
	BG_41_Sprite->SetCollisionActorIndex(10);
	BG_41_Sprite->SetOpacity(1.0f);
	BG_41_Sprite->Play(true);
	BG_41_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	BG_41_Sprite->SetCurrentAnimationIndex(0);
	BG_41_Sprite->SetCurrentFrameIndex(0);
	BG_41_Sprite->SetLoop(true);
	BG_41_Sprite->SetAnimationSpeed(1.0f);
	BG_41_Sprite->SetFlipHorizontal(false);
	BG_41_Sprite->SetFlipVertical(false);
	BG_41_Sprite->SetLifeTime(0.0f);
	BG_41_Sprite->SetVisible(true);
	BG_41_Sprite->SetRotationAngle(0.0f);
	BG_41_Sprite->SetScale(1.0f, 1.0f);
	BG_41_Sprite->SetCenter(Point2D(0.0f,0.0f));
	BG_41_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(BG_41_Sprite);


}
void Level3_Layer1_Sprite1(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> playAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation7.png",1,1,frames);
	anim->SetName("Animation7");
	playAnimations.push_back(anim);
	frames.clear();
	play_49_Sprite = new Sprite(playAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor11);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		play_49_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	play_49_Sprite->SetName("play");
	play_49_Sprite->SetCollisionActorIndex(11);
	play_49_Sprite->SetOpacity(1.0f);
	play_49_Sprite->Play(true);
	play_49_Sprite->SetPosition(Point2D(20.0f ,-95.0f));
	play_49_Sprite->SetCurrentAnimationIndex(0);
	play_49_Sprite->SetCurrentFrameIndex(0);
	play_49_Sprite->SetLoop(true);
	play_49_Sprite->SetAnimationSpeed(1.0f);
	play_49_Sprite->SetFlipHorizontal(false);
	play_49_Sprite->SetFlipVertical(false);
	play_49_Sprite->SetLifeTime(0.0f);
	play_49_Sprite->SetVisible(true);
	play_49_Sprite->SetRotationAngle(0.0f);
	play_49_Sprite->SetScale(1.0f, 1.0f);
	play_49_Sprite->SetCenter(Point2D(0.0f,0.0f));
	play_49_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(play_49_Sprite);


}
void Level3_Layer1_Sprite2(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> cursorAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation9.png",1,1,frames);
	anim->SetName("Animation9");
	cursorAnimations.push_back(anim);
	frames.clear();
	cursor_50_CursorClass = new CursorClass(cursorAnimations);

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
		cursor_50_CursorClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	cursor_50_CursorClass->SetName("cursor");
	cursor_50_CursorClass->SetCollisionActorIndex(7);
	cursor_50_CursorClass->SetOpacity(1.0f);
	cursor_50_CursorClass->Play(true);
	cursor_50_CursorClass->SetPosition(Point2D(-146.0f ,-216.0f));
	cursor_50_CursorClass->SetCurrentAnimationIndex(0);
	cursor_50_CursorClass->SetCurrentFrameIndex(0);
	cursor_50_CursorClass->SetLoop(true);
	cursor_50_CursorClass->SetAnimationSpeed(1.0f);
	cursor_50_CursorClass->SetFlipHorizontal(false);
	cursor_50_CursorClass->SetFlipVertical(false);
	cursor_50_CursorClass->SetLifeTime(0.0f);
	cursor_50_CursorClass->SetVisible(true);
	cursor_50_CursorClass->SetRotationAngle(0.0f);
	cursor_50_CursorClass->SetScale(1.0f, 1.0f);
	cursor_50_CursorClass->SetCenter(Point2D(0.0f,0.0f));
	cursor_50_CursorClass->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(cursor_50_CursorClass);


}
void Level3_Layer1_Sprite3(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> aboutAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation5.png",1,1,frames);
	anim->SetName("Animation5");
	aboutAnimations.push_back(anim);
	frames.clear();
	about_44_Sprite = new Sprite(aboutAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor12);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		about_44_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	about_44_Sprite->SetName("about");
	about_44_Sprite->SetCollisionActorIndex(12);
	about_44_Sprite->SetOpacity(1.0f);
	about_44_Sprite->Play(true);
	about_44_Sprite->SetPosition(Point2D(-88.0f ,-47.0f));
	about_44_Sprite->SetCurrentAnimationIndex(0);
	about_44_Sprite->SetCurrentFrameIndex(0);
	about_44_Sprite->SetLoop(true);
	about_44_Sprite->SetAnimationSpeed(1.0f);
	about_44_Sprite->SetFlipHorizontal(false);
	about_44_Sprite->SetFlipVertical(false);
	about_44_Sprite->SetLifeTime(0.0f);
	about_44_Sprite->SetVisible(true);
	about_44_Sprite->SetRotationAngle(0.0f);
	about_44_Sprite->SetScale(1.0f, 1.0f);
	about_44_Sprite->SetCenter(Point2D(0.0f,0.0f));
	about_44_Sprite->SetZOrder(0.1f);
	
	mlf->layer1_Layer->AddGameObject(about_44_Sprite);


}
void Level3_Layer1_Sprite4(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> exitAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation6.png",1,1,frames);
	anim->SetName("Animation6");
	exitAnimations.push_back(anim);
	frames.clear();
	exit_45_Sprite = new Sprite(exitAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor13);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		exit_45_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	exit_45_Sprite->SetName("exit");
	exit_45_Sprite->SetCollisionActorIndex(13);
	exit_45_Sprite->SetOpacity(1.0f);
	exit_45_Sprite->Play(true);
	exit_45_Sprite->SetPosition(Point2D(-74.0f ,-141.0f));
	exit_45_Sprite->SetCurrentAnimationIndex(0);
	exit_45_Sprite->SetCurrentFrameIndex(0);
	exit_45_Sprite->SetLoop(true);
	exit_45_Sprite->SetAnimationSpeed(1.0f);
	exit_45_Sprite->SetFlipHorizontal(false);
	exit_45_Sprite->SetFlipVertical(false);
	exit_45_Sprite->SetLifeTime(0.0f);
	exit_45_Sprite->SetVisible(true);
	exit_45_Sprite->SetRotationAngle(0.0f);
	exit_45_Sprite->SetScale(1.0f, 1.0f);
	exit_45_Sprite->SetCenter(Point2D(0.0f,0.0f));
	exit_45_Sprite->SetZOrder(0.1f);
	
	mlf->layer1_Layer->AddGameObject(exit_45_Sprite);


}


//ParticleSystems Setters

//Joints Setters

void MyLevelFactory::Level3_Layer1_StaticCollision()
{
	layer1_Layer->ReadInformation_StaticCollision(Game::GetInstance()->GetDirectory() + "\\Resources\\Layers Collisions\\level3_layer1.txt");
}

void MyLevelFactory::Set_Level3_Layer1_Objects()
{
	 Level3_Layer1_Sprite0(this);
	 Level3_Layer1_Sprite1(this);
	 Level3_Layer1_Sprite2(this);
	 Level3_Layer1_Sprite3(this);
	 Level3_Layer1_Sprite4(this);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level3_Layer1_StaticCollision();
}
