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

void CollisionActor00(MyLevelFactory *mlf)
{

	mlf->collisionActor00 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(8,-8,8,-8)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor00->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor00);
}

void CollisionActor01(MyLevelFactory *mlf)
{

	mlf->collisionActor01 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(32,-32,32,-32)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	//////// New Frame 1 ////////
	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(32,-32,32,-32)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor01->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor01);
}

void MyLevelFactory::AddCollisionActors0()
{
	 CollisionActor00(this);
	 CollisionActor01(this);
}
void MyLevelFactory::AddCollisionActors()
{
	AddCollisionActors0();
}
