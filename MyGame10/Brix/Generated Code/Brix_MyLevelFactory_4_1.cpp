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
void Level4_Layer1_Sprite0(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> spashAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation0.png",1,1,frames);
	anim->SetName("Animation0");
	spashAnimations.push_back(anim);
	frames.clear();
	spash_131_Sprite = new Sprite(spashAnimations);

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
		spash_131_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	spash_131_Sprite->SetName("spash");
	spash_131_Sprite->SetCollisionActorIndex(10);
	spash_131_Sprite->SetOpacity(1.0f);
	spash_131_Sprite->Play(true);
	spash_131_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	spash_131_Sprite->SetCurrentAnimationIndex(0);
	spash_131_Sprite->SetCurrentFrameIndex(0);
	spash_131_Sprite->SetLoop(true);
	spash_131_Sprite->SetAnimationSpeed(1.0f);
	spash_131_Sprite->SetFlipHorizontal(false);
	spash_131_Sprite->SetFlipVertical(false);
	spash_131_Sprite->SetLifeTime(0.0f);
	spash_131_Sprite->SetVisible(true);
	spash_131_Sprite->SetRotationAngle(0.0f);
	spash_131_Sprite->SetScale(1.0f, 1.0f);
	spash_131_Sprite->SetCenter(Point2D(0.0f,0.0f));
	spash_131_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(spash_131_Sprite);


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

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level4_Layer1_StaticCollision();
}
