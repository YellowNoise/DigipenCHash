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

void CollisionActor10(MyLevelFactory *mlf)
{

	mlf->collisionActor10 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(512,-512,512,-512)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor10->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor10);
}

void CollisionActor11(MyLevelFactory *mlf)
{

	mlf->collisionActor11 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(25,-50,50,-25)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor11->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor11);
}

void CollisionActor12(MyLevelFactory *mlf)
{

	mlf->collisionActor12 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(25,-50,50,-25)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor12->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor12);
}

void CollisionActor13(MyLevelFactory *mlf)
{

	mlf->collisionActor13 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(25,-50,50,-25)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor13->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor13);
}

void CollisionActor14(MyLevelFactory *mlf)
{

	mlf->collisionActor14 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(512,-512,512,-512)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor14->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor14);
}

void MyLevelFactory::AddCollisionActors1()
{
	 CollisionActor10(this);
	 CollisionActor11(this);
	 CollisionActor12(this);
	 CollisionActor13(this);
	 CollisionActor14(this);
}
void MyLevelFactory::AddCollisionActors()
{
	AddCollisionActors0();
	AddCollisionActors1();
}
