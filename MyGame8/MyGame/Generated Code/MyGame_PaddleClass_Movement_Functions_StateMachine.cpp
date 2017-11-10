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

bool PaddleClass::Movement_MovingRight_MovingLeft(float dt)
{
	//check if paddle reaches left side
	
	if(GetPositionX()> 300)
	{
		return true;
	}
	
	return false;
	return false;
}

bool PaddleClass::Movement_MovingLeft_MovingRight(float dt)
{
	//Checking if paddle reaches left side
	return (GetPositionX()<- 300);
	return false;
}

void PaddleClass::Movement_MovingRight_OnUpdate(float dt)
{
	//Move sprite 5 px right
	
	SetPositionX(GetPositionX() +5);
}

void PaddleClass::Movement_MovingLeft_OnEnter(float dt)
{
}

void PaddleClass::Movement_MovingLeft_OnUpdate(float dt)
{
	//Move sprite 5 px left
	
	SetPositionX(GetPositionX() -5);
}

