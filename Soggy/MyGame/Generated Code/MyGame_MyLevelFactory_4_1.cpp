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
void Level4_Layer1_Sprite0(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> sprite0Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation4.png",1,1,frames);
	anim->SetName("Animation4");
	sprite0Animations.push_back(anim);
	frames.clear();
	sprite0_43_Sprite = new Sprite(sprite0Animations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor14);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		sprite0_43_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	sprite0_43_Sprite->SetName("sprite0");
	sprite0_43_Sprite->SetCollisionActorIndex(14);
	sprite0_43_Sprite->SetOpacity(1.0f);
	sprite0_43_Sprite->Play(true);
	sprite0_43_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	sprite0_43_Sprite->SetCurrentAnimationIndex(0);
	sprite0_43_Sprite->SetCurrentFrameIndex(0);
	sprite0_43_Sprite->SetLoop(true);
	sprite0_43_Sprite->SetAnimationSpeed(1.0f);
	sprite0_43_Sprite->SetFlipHorizontal(false);
	sprite0_43_Sprite->SetFlipVertical(false);
	sprite0_43_Sprite->SetLifeTime(0.0f);
	sprite0_43_Sprite->SetVisible(true);
	sprite0_43_Sprite->SetRotationAngle(0.0f);
	sprite0_43_Sprite->SetScale(1.0f, 1.0f);
	sprite0_43_Sprite->SetCenter(Point2D(0.0f,0.0f));
	sprite0_43_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(sprite0_43_Sprite);


}
void Level4_Layer1_Sprite1(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> sprite1Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation8.png",1,1,frames);
	anim->SetName("Animation8");
	sprite1Animations.push_back(anim);
	frames.clear();
	sprite1_48_Sprite = new Sprite(sprite1Animations);

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
		sprite1_48_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	sprite1_48_Sprite->SetName("sprite1");
	sprite1_48_Sprite->SetCollisionActorIndex(8);
	sprite1_48_Sprite->SetOpacity(1.0f);
	sprite1_48_Sprite->Play(true);
	sprite1_48_Sprite->SetPosition(Point2D(-2.0f ,-252.0f));
	sprite1_48_Sprite->SetCurrentAnimationIndex(0);
	sprite1_48_Sprite->SetCurrentFrameIndex(0);
	sprite1_48_Sprite->SetLoop(true);
	sprite1_48_Sprite->SetAnimationSpeed(1.0f);
	sprite1_48_Sprite->SetFlipHorizontal(false);
	sprite1_48_Sprite->SetFlipVertical(false);
	sprite1_48_Sprite->SetLifeTime(0.0f);
	sprite1_48_Sprite->SetVisible(true);
	sprite1_48_Sprite->SetRotationAngle(0.0f);
	sprite1_48_Sprite->SetScale(1.0f, 1.0f);
	sprite1_48_Sprite->SetCenter(Point2D(0.0f,0.0f));
	sprite1_48_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(sprite1_48_Sprite);


}
void Level4_Layer1_Sprite2(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> sprite0Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation9.png",1,1,frames);
	anim->SetName("Animation9");
	sprite0Animations.push_back(anim);
	frames.clear();
	sprite0_51_CursorClass = new CursorClass(sprite0Animations);

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
		sprite0_51_CursorClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	sprite0_51_CursorClass->SetName("sprite0");
	sprite0_51_CursorClass->SetCollisionActorIndex(7);
	sprite0_51_CursorClass->SetOpacity(1.0f);
	sprite0_51_CursorClass->Play(true);
	sprite0_51_CursorClass->SetPosition(Point2D(-173.0f ,-186.0f));
	sprite0_51_CursorClass->SetCurrentAnimationIndex(0);
	sprite0_51_CursorClass->SetCurrentFrameIndex(0);
	sprite0_51_CursorClass->SetLoop(true);
	sprite0_51_CursorClass->SetAnimationSpeed(1.0f);
	sprite0_51_CursorClass->SetFlipHorizontal(false);
	sprite0_51_CursorClass->SetFlipVertical(false);
	sprite0_51_CursorClass->SetLifeTime(0.0f);
	sprite0_51_CursorClass->SetVisible(true);
	sprite0_51_CursorClass->SetRotationAngle(0.0f);
	sprite0_51_CursorClass->SetScale(1.0f, 1.0f);
	sprite0_51_CursorClass->SetCenter(Point2D(0.0f,0.0f));
	sprite0_51_CursorClass->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(sprite0_51_CursorClass);


}


//ParticleSystems Setters

//Joints Setters

void MyLevelFactory::Level4_Layer1_StaticCollision()
{
	layer1_Layer->ReadInformation_StaticCollision(Game::GetInstance()->GetDirectory() + "\\Resources\\Layers Collisions\\level4_layer1.txt");
}

void MyLevelFactory::Set_Level4_Layer1_Objects()
{
	 Level4_Layer1_Sprite0(this);
	 Level4_Layer1_Sprite1(this);
	 Level4_Layer1_Sprite2(this);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level4_Layer1_StaticCollision();
}
