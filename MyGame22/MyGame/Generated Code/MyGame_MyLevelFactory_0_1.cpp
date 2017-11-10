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
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\BG.png",1,1,frames);
	anim->SetName("BG");
	bgAnimations.push_back(anim);
	frames.clear();
	bg_8_ScrollBGClass = new ScrollBGClass(bgAnimations);

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
		bg_8_ScrollBGClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	bg_8_ScrollBGClass->SetName("bg");
	bg_8_ScrollBGClass->SetCollisionActorIndex(0);
	bg_8_ScrollBGClass->SetOpacity(1.0f);
	bg_8_ScrollBGClass->Play(true);
	bg_8_ScrollBGClass->SetPosition(Point2D(0.0f ,0.0f));
	bg_8_ScrollBGClass->SetCurrentAnimationIndex(0);
	bg_8_ScrollBGClass->SetCurrentFrameIndex(0);
	bg_8_ScrollBGClass->SetLoop(true);
	bg_8_ScrollBGClass->SetAnimationSpeed(1.0f);
	bg_8_ScrollBGClass->SetFlipHorizontal(false);
	bg_8_ScrollBGClass->SetFlipVertical(false);
	bg_8_ScrollBGClass->SetLifeTime(0.0f);
	bg_8_ScrollBGClass->SetVisible(true);
	bg_8_ScrollBGClass->SetRotationAngle(0.0f);
	bg_8_ScrollBGClass->SetScale(1.0f, 1.0f);
	bg_8_ScrollBGClass->SetCenter(Point2D(0.0f,0.0f));
	bg_8_ScrollBGClass->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(bg_8_ScrollBGClass);


}
void Level0_Layer1_Sprite1(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> bgAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\BG.png",1,1,frames);
	anim->SetName("BG");
	bgAnimations.push_back(anim);
	frames.clear();
	bg_9_ScrollBGClass = new ScrollBGClass(bgAnimations);

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
		bg_9_ScrollBGClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	bg_9_ScrollBGClass->SetName("bg");
	bg_9_ScrollBGClass->SetCollisionActorIndex(0);
	bg_9_ScrollBGClass->SetOpacity(1.0f);
	bg_9_ScrollBGClass->Play(true);
	bg_9_ScrollBGClass->SetPosition(Point2D(800.0f ,0.0f));
	bg_9_ScrollBGClass->SetCurrentAnimationIndex(0);
	bg_9_ScrollBGClass->SetCurrentFrameIndex(0);
	bg_9_ScrollBGClass->SetLoop(true);
	bg_9_ScrollBGClass->SetAnimationSpeed(1.0f);
	bg_9_ScrollBGClass->SetFlipHorizontal(false);
	bg_9_ScrollBGClass->SetFlipVertical(false);
	bg_9_ScrollBGClass->SetLifeTime(0.0f);
	bg_9_ScrollBGClass->SetVisible(true);
	bg_9_ScrollBGClass->SetRotationAngle(0.0f);
	bg_9_ScrollBGClass->SetScale(1.0f, 1.0f);
	bg_9_ScrollBGClass->SetCenter(Point2D(0.0f,0.0f));
	bg_9_ScrollBGClass->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(bg_9_ScrollBGClass);


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
