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
void Level1_Layer1_Text0(MyLevelFactory *mlf)
{
	text0_149_Text= new Text("Level 2",Game::GetInstance()->GetDirectory()+"\\Resources\\Fonts\\DefaultFont\\DefaultFont");
	text0_149_Text->SetName("text0");
	text0_149_Text->SetPosition(Point2D(0.0f,0.0f));
	text0_149_Text->SetLifeTime(0.0f);
	text0_149_Text->SetVisible(true);
	text0_149_Text->SetRotationAngle(0.0f);
	text0_149_Text->SetScale(1.0f,1.0f);
	text0_149_Text->SetCenter(Point2D(0.0f,0.0f));
	text0_149_Text->SetOpacity(1.0f);
	text0_149_Text->SetZOrder(0.2f);
	mlf->layer1_Layer->AddGameObject(text0_149_Text);


}


//Sounds Setters

//Sprites Setters
void Level1_Layer1_Sprite0(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> sprite0Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\BG.png",1,1,frames);
	anim->SetName("BG");
	sprite0Animations.push_back(anim);
	frames.clear();
	sprite0_150_Sprite = new Sprite(sprite0Animations);

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
		sprite0_150_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	sprite0_150_Sprite->SetName("sprite0");
	sprite0_150_Sprite->SetCollisionActorIndex(0);
	sprite0_150_Sprite->SetOpacity(1.0f);
	sprite0_150_Sprite->Play(true);
	sprite0_150_Sprite->SetPosition(Point2D(4.0f ,-6.0f));
	sprite0_150_Sprite->SetCurrentAnimationIndex(0);
	sprite0_150_Sprite->SetCurrentFrameIndex(0);
	sprite0_150_Sprite->SetLoop(true);
	sprite0_150_Sprite->SetAnimationSpeed(1.0f);
	sprite0_150_Sprite->SetFlipHorizontal(false);
	sprite0_150_Sprite->SetFlipVertical(false);
	sprite0_150_Sprite->SetLifeTime(0.0f);
	sprite0_150_Sprite->SetVisible(true);
	sprite0_150_Sprite->SetRotationAngle(0.0f);
	sprite0_150_Sprite->SetScale(1.0f, 1.0f);
	sprite0_150_Sprite->SetCenter(Point2D(0.0f,0.0f));
	sprite0_150_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(sprite0_150_Sprite);


}


//ParticleSystems Setters

//Joints Setters

void MyLevelFactory::Level1_Layer1_StaticCollision()
{
	layer1_Layer->ReadInformation_StaticCollision(Game::GetInstance()->GetDirectory() + "\\Resources\\Layers Collisions\\level1_layer1.txt");
}

void MyLevelFactory::Set_Level1_Layer1_Objects()
{
	 Level1_Layer1_Text0(this);

	 Level1_Layer1_Sprite0(this);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level1_Layer1_StaticCollision();
}
