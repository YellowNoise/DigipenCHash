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

	collisionFrame->SetBoundingRectangle(FunRect(32,-128,128,-32)); 
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
