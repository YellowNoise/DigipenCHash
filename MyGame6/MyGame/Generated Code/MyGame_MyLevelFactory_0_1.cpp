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
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation0.png",4,4,frames);
	anim->SetName("Animation0");
	sprite0Animations.push_back(anim);
	frames.clear();
	sprite0_20_LoadClass = new LoadClass(sprite0Animations);

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
		sprite0_20_LoadClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	sprite0_20_LoadClass->SetName("sprite0");
	sprite0_20_LoadClass->SetCollisionActorIndex(0);
	sprite0_20_LoadClass->SetOpacity(1.0f);
	sprite0_20_LoadClass->Play(false);
	sprite0_20_LoadClass->SetPosition(Point2D(0.0f ,0.0f));
	sprite0_20_LoadClass->SetCurrentAnimationIndex(0);
	sprite0_20_LoadClass->SetCurrentFrameIndex(0);
	sprite0_20_LoadClass->SetLoop(false);
	sprite0_20_LoadClass->SetAnimationSpeed(1.0f);
	sprite0_20_LoadClass->SetFlipHorizontal(false);
	sprite0_20_LoadClass->SetFlipVertical(false);
	sprite0_20_LoadClass->SetLifeTime(0.0f);
	sprite0_20_LoadClass->SetVisible(true);
	sprite0_20_LoadClass->SetRotationAngle(0.0f);
	sprite0_20_LoadClass->SetScale(1.0f, 1.0f);
	sprite0_20_LoadClass->SetCenter(Point2D(0.0f,0.0f));
	sprite0_20_LoadClass->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(sprite0_20_LoadClass);


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

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level0_Layer1_StaticCollision();
}
