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
void Level1_Layer1_Sprite0(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> sprite0Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\WinLevel.png",1,1,frames);
	anim->SetName("WinLevel");
	sprite0Animations.push_back(anim);
	frames.clear();
	sprite0_119_Sprite = new Sprite(sprite0Animations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor04);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		sprite0_119_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	sprite0_119_Sprite->SetName("sprite0");
	sprite0_119_Sprite->SetCollisionActorIndex(4);
	sprite0_119_Sprite->SetOpacity(1.0f);
	sprite0_119_Sprite->Play(true);
	sprite0_119_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	sprite0_119_Sprite->SetCurrentAnimationIndex(0);
	sprite0_119_Sprite->SetCurrentFrameIndex(0);
	sprite0_119_Sprite->SetLoop(true);
	sprite0_119_Sprite->SetAnimationSpeed(1.0f);
	sprite0_119_Sprite->SetFlipHorizontal(false);
	sprite0_119_Sprite->SetFlipVertical(false);
	sprite0_119_Sprite->SetLifeTime(0.0f);
	sprite0_119_Sprite->SetVisible(true);
	sprite0_119_Sprite->SetRotationAngle(0.0f);
	sprite0_119_Sprite->SetScale(1.0f, 1.0f);
	sprite0_119_Sprite->SetCenter(Point2D(0.0f,0.0f));
	sprite0_119_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(sprite0_119_Sprite);


}


//ParticleSystems Setters

//Joints Setters

void MyLevelFactory::Level1_Layer1_StaticCollision()
{
	layer1_Layer->ReadInformation_StaticCollision(Game::GetInstance()->GetDirectory() + "\\Resources\\Layers Collisions\\level1_layer1.txt");
}

void MyLevelFactory::Set_Level1_Layer1_Objects()
{
	 Level1_Layer1_Sprite0(this);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level1_Layer1_StaticCollision();
}
