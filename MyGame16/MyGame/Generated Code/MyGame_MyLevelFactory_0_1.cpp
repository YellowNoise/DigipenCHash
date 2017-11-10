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
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\BG.png",1,1,frames);
	anim->SetName("BG");
	sprite0Animations.push_back(anim);
	frames.clear();
	sprite0_146_Sprite = new Sprite(sprite0Animations);

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
		sprite0_146_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	sprite0_146_Sprite->SetName("sprite0");
	sprite0_146_Sprite->SetCollisionActorIndex(0);
	sprite0_146_Sprite->SetOpacity(1.0f);
	sprite0_146_Sprite->Play(true);
	sprite0_146_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	sprite0_146_Sprite->SetCurrentAnimationIndex(0);
	sprite0_146_Sprite->SetCurrentFrameIndex(0);
	sprite0_146_Sprite->SetLoop(true);
	sprite0_146_Sprite->SetAnimationSpeed(1.0f);
	sprite0_146_Sprite->SetFlipHorizontal(false);
	sprite0_146_Sprite->SetFlipVertical(false);
	sprite0_146_Sprite->SetLifeTime(0.0f);
	sprite0_146_Sprite->SetVisible(true);
	sprite0_146_Sprite->SetRotationAngle(0.0f);
	sprite0_146_Sprite->SetScale(1.0f, 1.0f);
	sprite0_146_Sprite->SetCenter(Point2D(0.0f,0.0f));
	sprite0_146_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(sprite0_146_Sprite);


}
void Level0_Layer1_Sprite1(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> sprite1Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	frames.push_back(1.0f);
	frames.push_back(1.0f);
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\CountDown.png",2,2,frames);
	anim->SetName("CountDown");
	sprite1Animations.push_back(anim);
	frames.clear();
	sprite1_147_CountdownClass = new CountdownClass(sprite1Animations);

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
		sprite1_147_CountdownClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	sprite1_147_CountdownClass->SetName("sprite1");
	sprite1_147_CountdownClass->SetCollisionActorIndex(1);
	sprite1_147_CountdownClass->SetOpacity(1.0f);
	sprite1_147_CountdownClass->Play(true);
	sprite1_147_CountdownClass->SetPosition(Point2D(0.0f ,0.0f));
	sprite1_147_CountdownClass->SetCurrentAnimationIndex(0);
	sprite1_147_CountdownClass->SetCurrentFrameIndex(0);
	sprite1_147_CountdownClass->SetLoop(false);
	sprite1_147_CountdownClass->SetAnimationSpeed(1.0f);
	sprite1_147_CountdownClass->SetFlipHorizontal(false);
	sprite1_147_CountdownClass->SetFlipVertical(false);
	sprite1_147_CountdownClass->SetLifeTime(0.0f);
	sprite1_147_CountdownClass->SetVisible(true);
	sprite1_147_CountdownClass->SetRotationAngle(0.0f);
	sprite1_147_CountdownClass->SetScale(1.0f, 1.0f);
	sprite1_147_CountdownClass->SetCenter(Point2D(0.0f,0.0f));
	sprite1_147_CountdownClass->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(sprite1_147_CountdownClass);


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
