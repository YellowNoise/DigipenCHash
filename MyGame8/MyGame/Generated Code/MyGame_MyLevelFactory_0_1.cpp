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
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation0.png",1,1,frames);
	anim->SetName("Animation0");
	sprite0Animations.push_back(anim);
	frames.clear();
	sprite0_26_PaddleClass = new PaddleClass(sprite0Animations);

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
		sprite0_26_PaddleClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	sprite0_26_PaddleClass->SetName("sprite0");
	sprite0_26_PaddleClass->SetCollisionActorIndex(0);
	sprite0_26_PaddleClass->SetOpacity(1.0f);
	sprite0_26_PaddleClass->Play(true);
	sprite0_26_PaddleClass->SetPosition(Point2D(-1.0f ,2.0f));
	sprite0_26_PaddleClass->SetCurrentAnimationIndex(0);
	sprite0_26_PaddleClass->SetCurrentFrameIndex(0);
	sprite0_26_PaddleClass->SetLoop(true);
	sprite0_26_PaddleClass->SetAnimationSpeed(1.0f);
	sprite0_26_PaddleClass->SetFlipHorizontal(false);
	sprite0_26_PaddleClass->SetFlipVertical(false);
	sprite0_26_PaddleClass->SetLifeTime(0.0f);
	sprite0_26_PaddleClass->SetVisible(true);
	sprite0_26_PaddleClass->SetRotationAngle(0.0f);
	sprite0_26_PaddleClass->SetScale(1.0f, 1.0f);
	sprite0_26_PaddleClass->SetCenter(Point2D(0.0f,0.0f));
	sprite0_26_PaddleClass->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(sprite0_26_PaddleClass);


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
