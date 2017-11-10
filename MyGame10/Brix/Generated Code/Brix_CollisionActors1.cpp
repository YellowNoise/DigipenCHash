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

void CollisionActor10(MyLevelFactory *mlf)
{

	mlf->collisionActor10 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(240,-320,320,-240)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor10->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor10);
}

void MyLevelFactory::AddCollisionActors1()
{
	 CollisionActor10(this);
}
void MyLevelFactory::AddCollisionActors()
{
	AddCollisionActors0();
	AddCollisionActors1();
}
