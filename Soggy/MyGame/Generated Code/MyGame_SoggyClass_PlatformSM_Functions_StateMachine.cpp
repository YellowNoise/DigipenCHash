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

bool SoggyClass::PlatformSM_OnGround_inair(float dt)
{
	return isjumping;
	return false;
}

bool SoggyClass::PlatformSM_OnGround_inair_1(float dt)
{
	return !GetCollisionInfo().IsCollidedWithLineSegment(0);
	return false;
}

bool SoggyClass::PlatformSM_inair_OnGround(float dt)
{
	return GetCollisionInfo().IsCollidedWithLineSegment(0);
	return false;
}

void SoggyClass::PlatformSM_OnGround_OnEnter(float dt)
{
	intheair = false;
	RemoveAllForces();
	SetVelocity(Vector2D());
	jumpcounter = 0;
}

void SoggyClass::PlatformSM_OnGround_OnUpdate(float dt)
{
	RemoveAllForces();
	AddForce(new GravityForce(Vector2D(0,-1),1.0f));
	ApplyMovement();
}

void SoggyClass::PlatformSM_inair_OnEnter(float dt)
{
	intheair = true;
}

void SoggyClass::PlatformSM_inair_OnUpdate(float dt)
{
	applygrav();
	ApplyMovement();
}

