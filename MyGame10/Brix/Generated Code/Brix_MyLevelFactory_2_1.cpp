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
void Level2_Layer1_Sprite0(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> sprite0Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\LoseLevel.png",1,1,frames);
	anim->SetName("LoseLevel");
	sprite0Animations.push_back(anim);
	frames.clear();
	sprite0_121_Sprite = new Sprite(sprite0Animations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor05);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		sprite0_121_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	sprite0_121_Sprite->SetName("sprite0");
	sprite0_121_Sprite->SetCollisionActorIndex(5);
	sprite0_121_Sprite->SetOpacity(1.0f);
	sprite0_121_Sprite->Play(true);
	sprite0_121_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	sprite0_121_Sprite->SetCurrentAnimationIndex(0);
	sprite0_121_Sprite->SetCurrentFrameIndex(0);
	sprite0_121_Sprite->SetLoop(true);
	sprite0_121_Sprite->SetAnimationSpeed(1.0f);
	sprite0_121_Sprite->SetFlipHorizontal(false);
	sprite0_121_Sprite->SetFlipVertical(false);
	sprite0_121_Sprite->SetLifeTime(0.0f);
	sprite0_121_Sprite->SetVisible(true);
	sprite0_121_Sprite->SetRotationAngle(0.0f);
	sprite0_121_Sprite->SetScale(1.0f, 1.0f);
	sprite0_121_Sprite->SetCenter(Point2D(0.0f,0.0f));
	sprite0_121_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(sprite0_121_Sprite);


}


//ParticleSystems Setters

//Joints Setters

void MyLevelFactory::Level2_Layer1_StaticCollision()
{
	layer1_Layer->ReadInformation_StaticCollision(Game::GetInstance()->GetDirectory() + "\\Resources\\Layers Collisions\\level2_layer1.txt");
}

void MyLevelFactory::Set_Level2_Layer1_Objects()
{
	 Level2_Layer1_Sprite0(this);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level2_Layer1_StaticCollision();
}
