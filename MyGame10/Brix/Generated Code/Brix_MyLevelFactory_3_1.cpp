#include "Brix_MainDeclarations.h"
#include "Brix_Declarations.h"
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
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\menu.png",1,1,frames);
	anim->SetName("menu");
	BGAnimations.push_back(anim);
	frames.clear();
	BG_126_Sprite = new Sprite(BGAnimations);

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
		BG_126_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	BG_126_Sprite->SetName("BG");
	BG_126_Sprite->SetCollisionActorIndex(6);
	BG_126_Sprite->SetOpacity(1.0f);
	BG_126_Sprite->Play(true);
	BG_126_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	BG_126_Sprite->SetCurrentAnimationIndex(0);
	BG_126_Sprite->SetCurrentFrameIndex(0);
	BG_126_Sprite->SetLoop(true);
	BG_126_Sprite->SetAnimationSpeed(1.0f);
	BG_126_Sprite->SetFlipHorizontal(false);
	BG_126_Sprite->SetFlipVertical(false);
	BG_126_Sprite->SetLifeTime(0.0f);
	BG_126_Sprite->SetVisible(true);
	BG_126_Sprite->SetRotationAngle(0.0f);
	BG_126_Sprite->SetScale(1.0f, 1.0f);
	BG_126_Sprite->SetCenter(Point2D(0.0f,0.0f));
	BG_126_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(BG_126_Sprite);


}
void Level3_Layer1_Sprite1(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> StartAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\start 1.png",1,1,frames);
	anim->SetName("start 1");
	StartAnimations.push_back(anim);
	frames.clear();
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\start 2.png",1,1,frames);
	anim->SetName("start 2");
	StartAnimations.push_back(anim);
	frames.clear();
	Start_127_ButtonClass = new ButtonClass(StartAnimations);

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
		Start_127_ButtonClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Start_127_ButtonClass->SetName("Start");
	Start_127_ButtonClass->SetCollisionActorIndex(7);
	Start_127_ButtonClass->SetOpacity(1.0f);
	Start_127_ButtonClass->Play(true);
	Start_127_ButtonClass->SetPosition(Point2D(0.0f ,0.0f));
	Start_127_ButtonClass->SetCurrentAnimationIndex(0);
	Start_127_ButtonClass->SetCurrentFrameIndex(0);
	Start_127_ButtonClass->SetLoop(true);
	Start_127_ButtonClass->SetAnimationSpeed(1.0f);
	Start_127_ButtonClass->SetFlipHorizontal(false);
	Start_127_ButtonClass->SetFlipVertical(false);
	Start_127_ButtonClass->SetLifeTime(0.0f);
	Start_127_ButtonClass->SetVisible(true);
	Start_127_ButtonClass->SetRotationAngle(0.0f);
	Start_127_ButtonClass->SetScale(1.0f, 1.0f);
	Start_127_ButtonClass->SetCenter(Point2D(0.0f,0.0f));
	Start_127_ButtonClass->SetZOrder(0.1f);
	
	mlf->layer1_Layer->AddGameObject(Start_127_ButtonClass);


}
void Level3_Layer1_Sprite2(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> ExitAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Exit 1.png",1,1,frames);
	anim->SetName("Exit 1");
	ExitAnimations.push_back(anim);
	frames.clear();
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Exit 2.png",1,1,frames);
	anim->SetName("Exit 2");
	ExitAnimations.push_back(anim);
	frames.clear();
	Exit_128_ButtonClass = new ButtonClass(ExitAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor08);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(true);
		Exit_128_ButtonClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Exit_128_ButtonClass->SetName("Exit");
	Exit_128_ButtonClass->SetCollisionActorIndex(8);
	Exit_128_ButtonClass->SetOpacity(1.0f);
	Exit_128_ButtonClass->Play(true);
	Exit_128_ButtonClass->SetPosition(Point2D(0.0f ,-100.0f));
	Exit_128_ButtonClass->SetCurrentAnimationIndex(0);
	Exit_128_ButtonClass->SetCurrentFrameIndex(0);
	Exit_128_ButtonClass->SetLoop(true);
	Exit_128_ButtonClass->SetAnimationSpeed(1.0f);
	Exit_128_ButtonClass->SetFlipHorizontal(false);
	Exit_128_ButtonClass->SetFlipVertical(false);
	Exit_128_ButtonClass->SetLifeTime(0.0f);
	Exit_128_ButtonClass->SetVisible(true);
	Exit_128_ButtonClass->SetRotationAngle(0.0f);
	Exit_128_ButtonClass->SetScale(1.0f, 1.0f);
	Exit_128_ButtonClass->SetCenter(Point2D(0.0f,0.0f));
	Exit_128_ButtonClass->SetZOrder(0.1f);
	
	mlf->layer1_Layer->AddGameObject(Exit_128_ButtonClass);


}
void Level3_Layer1_Sprite3(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> MouseAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Cursor.png",1,1,frames);
	anim->SetName("Cursor");
	MouseAnimations.push_back(anim);
	frames.clear();
	Mouse_129_CursorClass = new CursorClass(MouseAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor09);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(true);
		Mouse_129_CursorClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Mouse_129_CursorClass->SetName("Mouse");
	Mouse_129_CursorClass->SetCollisionActorIndex(9);
	Mouse_129_CursorClass->SetOpacity(1.0f);
	Mouse_129_CursorClass->Play(true);
	Mouse_129_CursorClass->SetPosition(Point2D(136.0f ,-44.0f));
	Mouse_129_CursorClass->SetCurrentAnimationIndex(0);
	Mouse_129_CursorClass->SetCurrentFrameIndex(0);
	Mouse_129_CursorClass->SetLoop(true);
	Mouse_129_CursorClass->SetAnimationSpeed(1.0f);
	Mouse_129_CursorClass->SetFlipHorizontal(false);
	Mouse_129_CursorClass->SetFlipVertical(false);
	Mouse_129_CursorClass->SetLifeTime(0.0f);
	Mouse_129_CursorClass->SetVisible(true);
	Mouse_129_CursorClass->SetRotationAngle(0.0f);
	Mouse_129_CursorClass->SetScale(1.0f, 1.0f);
	Mouse_129_CursorClass->SetCenter(Point2D(0.0f,0.0f));
	Mouse_129_CursorClass->SetZOrder(0.3f);
	
	mlf->layer1_Layer->AddGameObject(Mouse_129_CursorClass);


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

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level3_Layer1_StaticCollision();
}
