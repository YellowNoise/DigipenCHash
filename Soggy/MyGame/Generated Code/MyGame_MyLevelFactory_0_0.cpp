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
void Level0_Layer0_Sprite0(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> LifeAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Life.png",1,1,frames);
	anim->SetName("Life");
	LifeAnimations.push_back(anim);
	frames.clear();
	Life_31_Sprite = new Sprite(LifeAnimations);

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
		Life_31_Sprite->AddCollision(dynamicCollisionData, mlf->layer0_Layer->GetCollisionId());
	}

	Life_31_Sprite->SetName("Life");
	Life_31_Sprite->SetCollisionActorIndex(0);
	Life_31_Sprite->SetOpacity(1.0f);
	Life_31_Sprite->Play(true);
	Life_31_Sprite->SetPosition(Point2D(-350.0f ,250.0f));
	Life_31_Sprite->SetCurrentAnimationIndex(0);
	Life_31_Sprite->SetCurrentFrameIndex(0);
	Life_31_Sprite->SetLoop(true);
	Life_31_Sprite->SetAnimationSpeed(1.0f);
	Life_31_Sprite->SetFlipHorizontal(false);
	Life_31_Sprite->SetFlipVertical(false);
	Life_31_Sprite->SetLifeTime(0.0f);
	Life_31_Sprite->SetVisible(true);
	Life_31_Sprite->SetRotationAngle(0.0f);
	Life_31_Sprite->SetScale(1.0f, 1.0f);
	Life_31_Sprite->SetCenter(Point2D(0.0f,0.0f));
	Life_31_Sprite->SetZOrder(0.1f);
	Life_31_Sprite->SetHUDObject(true);
	mlf->layer0_Layer->AddGameObject(Life_31_Sprite);


}
void Level0_Layer0_Sprite1(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> LifeAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Life.png",1,1,frames);
	anim->SetName("Life");
	LifeAnimations.push_back(anim);
	frames.clear();
	Life_32_Sprite = new Sprite(LifeAnimations);

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
		Life_32_Sprite->AddCollision(dynamicCollisionData, mlf->layer0_Layer->GetCollisionId());
	}

	Life_32_Sprite->SetName("Life");
	Life_32_Sprite->SetCollisionActorIndex(0);
	Life_32_Sprite->SetOpacity(1.0f);
	Life_32_Sprite->Play(true);
	Life_32_Sprite->SetPosition(Point2D(-300.0f ,250.0f));
	Life_32_Sprite->SetCurrentAnimationIndex(0);
	Life_32_Sprite->SetCurrentFrameIndex(0);
	Life_32_Sprite->SetLoop(true);
	Life_32_Sprite->SetAnimationSpeed(1.0f);
	Life_32_Sprite->SetFlipHorizontal(false);
	Life_32_Sprite->SetFlipVertical(false);
	Life_32_Sprite->SetLifeTime(0.0f);
	Life_32_Sprite->SetVisible(true);
	Life_32_Sprite->SetRotationAngle(0.0f);
	Life_32_Sprite->SetScale(1.0f, 1.0f);
	Life_32_Sprite->SetCenter(Point2D(0.0f,0.0f));
	Life_32_Sprite->SetZOrder(0.1f);
	Life_32_Sprite->SetHUDObject(true);
	mlf->layer0_Layer->AddGameObject(Life_32_Sprite);


}
void Level0_Layer0_Sprite2(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> LifeAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Life.png",1,1,frames);
	anim->SetName("Life");
	LifeAnimations.push_back(anim);
	frames.clear();
	Life_33_Sprite = new Sprite(LifeAnimations);

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
		Life_33_Sprite->AddCollision(dynamicCollisionData, mlf->layer0_Layer->GetCollisionId());
	}

	Life_33_Sprite->SetName("Life");
	Life_33_Sprite->SetCollisionActorIndex(0);
	Life_33_Sprite->SetOpacity(1.0f);
	Life_33_Sprite->Play(true);
	Life_33_Sprite->SetPosition(Point2D(-250.0f ,250.0f));
	Life_33_Sprite->SetCurrentAnimationIndex(0);
	Life_33_Sprite->SetCurrentFrameIndex(0);
	Life_33_Sprite->SetLoop(true);
	Life_33_Sprite->SetAnimationSpeed(1.0f);
	Life_33_Sprite->SetFlipHorizontal(false);
	Life_33_Sprite->SetFlipVertical(false);
	Life_33_Sprite->SetLifeTime(0.0f);
	Life_33_Sprite->SetVisible(true);
	Life_33_Sprite->SetRotationAngle(0.0f);
	Life_33_Sprite->SetScale(1.0f, 1.0f);
	Life_33_Sprite->SetCenter(Point2D(0.0f,0.0f));
	Life_33_Sprite->SetZOrder(0.1f);
	Life_33_Sprite->SetHUDObject(true);
	mlf->layer0_Layer->AddGameObject(Life_33_Sprite);


}


//ParticleSystems Setters

//Joints Setters

void MyLevelFactory::Level0_Layer0_StaticCollision()
{
	layer0_Layer->ReadInformation_StaticCollision(Game::GetInstance()->GetDirectory() + "\\Resources\\Layers Collisions\\level0_layer0.txt");
}

void MyLevelFactory::Set_Level0_Layer0_Objects()
{
	 Level0_Layer0_Sprite0(this);
	 Level0_Layer0_Sprite1(this);
	 Level0_Layer0_Sprite2(this);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level0_Layer0_StaticCollision();
}
