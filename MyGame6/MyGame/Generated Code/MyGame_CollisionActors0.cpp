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

	collisionFrame->SetBoundingRectangle(FunRect(64,-64,64,-64)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	//////// New Frame 1 ////////
	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(64,-64,64,-64)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	//////// New Frame 2 ////////
	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(64,-64,64,-64)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	//////// New Frame 3 ////////
	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(64,-64,64,-64)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	//////// New Frame 4 ////////
	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(64,-64,64,-64)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	//////// New Frame 5 ////////
	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(64,-64,64,-64)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	//////// New Frame 6 ////////
	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(64,-64,64,-64)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	//////// New Frame 7 ////////
	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(64,-64,64,-64)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	//////// New Frame 8 ////////
	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(64,-64,64,-64)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	//////// New Frame 9 ////////
	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(64,-64,64,-64)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	//////// New Frame 10 ////////
	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(64,-64,64,-64)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	//////// New Frame 11 ////////
	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(64,-64,64,-64)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	//////// New Frame 12 ////////
	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(64,-64,64,-64)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	//////// New Frame 13 ////////
	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(64,-64,64,-64)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor00->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor00);
}

void MyLevelFactory::AddCollisionActors0()
{
	 CollisionActor00(this);
}
void MyLevelFactory::AddCollisionActors()
{
	AddCollisionActors0();
}
