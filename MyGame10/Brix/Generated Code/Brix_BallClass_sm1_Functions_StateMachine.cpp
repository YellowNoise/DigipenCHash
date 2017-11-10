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

bool BallClass::sm1_Play_Idle(float dt)
{
	if(GetPositionY()<-320)
	{
		GetMyGame()->livesvalue--;
		return true;
	}
	return false;
	return false;
}

bool BallClass::sm1_Idle_Play(float dt)
{
	return GetKeyboard()->IsTriggered(Keyboard::Space);
	return false;
}

void BallClass::sm1_Play_OnEnter(float dt)
{
	
	SetVelocity(Vector2D(18,18));
}

void BallClass::sm1_Idle_OnEnter(float dt)
{
	SetVelocity(Vector2D(0,0));
}

void BallClass::sm1_Idle_OnUpdate(float dt)
{
	PaddleClass*paddle=GetGameObject<PaddleClass>("paddle");
	if(paddle)
	{
		SetPosition(paddle->GetPositionX(),paddle->GetPositionY() +28);
		SetOldPosition(Vector2D(paddle->GetPositionX(),
				   paddle->GetPositionY() +28));
	}		
}

