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

void CollisionActor00(MyLevelFactory *mlf)
{

	mlf->collisionActor00 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(300,-400,400,-300)); 
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

	collisionFrame->SetBoundingRectangle(FunRect(16,-32,32,-16)); 
	collisionFrame->AddCollisionData(Point2D(-30.0,15.0),Point2D(29.0,15.0),0,true);
	collisionFrame->AddCollisionData(Point2D(-30.0,-13.0),Point2D(-30.0,15.0),0,true);
	collisionFrame->AddCollisionData(Point2D(29.0,15.0),Point2D(29.0,-13.0),0,true);
	collisionFrame->AddCollisionData(Point2D(29.0,-13.0),Point2D(-30.0,-13.0),0,true);
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor01->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor01);
}

void CollisionActor02(MyLevelFactory *mlf)
{

	mlf->collisionActor02 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(22,-70,70,-22)); 
	collisionFrame->AddCollisionData(Point2D(-64.0,17.0),Point2D(62.0,17.0),0,true);
	collisionFrame->AddCollisionData(Point2D(-64.0,-16.0),Point2D(-64.0,17.0),0,true);
	collisionFrame->AddCollisionData(Point2D(62.0,17.0),Point2D(62.0,-16.0),0,true);
	collisionFrame->AddCollisionData(Point2D(62.0,-16.0),Point2D(-64.0,-16.0),0,true);
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor02->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor02);
}

void CollisionActor03(MyLevelFactory *mlf)
{

	mlf->collisionActor03 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(8,-8,8,-8)); 
	collisionFrame->AddCollisionData(Point2D(0,0),8,0,true);
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor03->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor03);
}

void CollisionActor04(MyLevelFactory *mlf)
{

	mlf->collisionActor04 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(240,-320,320,-240)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor04->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor04);
}

void CollisionActor05(MyLevelFactory *mlf)
{

	mlf->collisionActor05 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(240,-320,320,-240)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor05->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor05);
}

void CollisionActor06(MyLevelFactory *mlf)
{

	mlf->collisionActor06 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(240,-320,320,-240)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor06->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor06);
}

void CollisionActor07(MyLevelFactory *mlf)
{

	mlf->collisionActor07 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(32,-64,64,-32)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor07->AddCollisionAnimation(collisionAnimation);

	//// Adding New Animation 1 ////
	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(32,-64,64,-32)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor07->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor07);
}

void CollisionActor08(MyLevelFactory *mlf)
{

	mlf->collisionActor08 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(32,-64,64,-32)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor08->AddCollisionAnimation(collisionAnimation);

	//// Adding New Animation 1 ////
	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(32,-64,64,-32)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor08->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor08);
}

void CollisionActor09(MyLevelFactory *mlf)
{

	mlf->collisionActor09 = new CollisionActor;


	//// Adding New Animation 0 ////
	CollisionAnimation * 	collisionAnimation = new CollisionAnimation;


	//////// New Frame 0 ////////
	CollisionFrame * 	collisionFrame = new CollisionFrame;

	collisionFrame->SetBoundingRectangle(FunRect(16,-16,16,-16)); 
	collisionAnimation->AddCollisionFrame(collisionFrame);


	mlf->collisionActor09->AddCollisionAnimation(collisionAnimation);

	// Adding CollisionActor to Game //
	GetMyGame()->AddCollisionAssets(mlf->collisionActor09);
}

void MyLevelFactory::AddCollisionActors0()
{
	 CollisionActor00(this);
	 CollisionActor01(this);
	 CollisionActor02(this);
	 CollisionActor03(this);
	 CollisionActor04(this);
	 CollisionActor05(this);
	 CollisionActor06(this);
	 CollisionActor07(this);
	 CollisionActor08(this);
	 CollisionActor09(this);
}
