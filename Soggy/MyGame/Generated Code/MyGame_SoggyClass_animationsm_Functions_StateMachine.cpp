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

bool SoggyClass::animationsm_Idle_Walk(float dt)
{
	return ismoving;
	return false;
}

bool SoggyClass::animationsm_Idle_Win(float dt)
{
	return GetMyGame()->isgamewon;
	return false;
}

bool SoggyClass::animationsm_Idle_Jump(float dt)
{
	if(isjumping||intheair)
	{
	return true;
	}
	else
	{
	return false;
	}
	return false;
}

bool SoggyClass::animationsm_Walk_Idle(float dt)
{
	return !ismoving;
	return false;
}

bool SoggyClass::animationsm_Walk_Jump(float dt)
{
	return isjumping || intheair;
	return false;
}

bool SoggyClass::animationsm_Jump_Idle(float dt)
{
	if(!isjumping&&!intheair)
	{
	return true;
	}
	else
	{
	return false;
	}
	return false;
}

void SoggyClass::animationsm_Idle_OnEnter(float dt)
{
	SetCurrentAnimationIndex(0);
}

void SoggyClass::animationsm_Win_OnEnter(float dt)
{
	SetCurrentAnimationIndex(3);
}

void SoggyClass::animationsm_Win_OnUpdate(float dt)
{
	RemoveAllForces();
	SetVelocity(Vector2D());
}

void SoggyClass::animationsm_Walk_OnEnter(float dt)
{
	SetCurrentAnimationIndex(1);
}

void SoggyClass::animationsm_Jump_OnEnter(float dt)
{
	SetCurrentAnimationIndex(2);
}

