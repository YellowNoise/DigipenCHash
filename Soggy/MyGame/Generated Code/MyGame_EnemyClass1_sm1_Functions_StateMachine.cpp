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

bool EnemyClass1::sm1_Right_Left(float dt)
{
	return true;
	return false;
}

bool EnemyClass1::sm1_Left_Right(float dt)
{
	return true;
	return false;
}

void EnemyClass1::sm1_Right_OnEnter(float dt)
{
	SetVelocity(Vector2D(5,0));
	SetFlipHorizontal(false);
}

void EnemyClass1::sm1_Left_OnEnter(float dt)
{
	SetVelocity(Vector2D(-5,0));
	SetFlipHorizontal(true);
}

