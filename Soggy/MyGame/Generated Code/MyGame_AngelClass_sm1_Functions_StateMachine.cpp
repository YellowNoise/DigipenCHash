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

bool AngelClass::sm1_invisible_visible(float dt)
{
	return GetVisible();
	return false;
}

bool AngelClass::sm1_visible_invisible(float dt)
{
	return true;
	return false;
}

void AngelClass::sm1_invisible_OnEnter(float dt)
{
	SetVisible(false);
	SetOpacity(1.0f);
}

void AngelClass::sm1_visible_OnEnter(float dt)
{
	SetVisible(false);
	SoggyClass * soggy = GetGameObject<SoggyClass>("soggy");
	
	if(soggy)
	{
		SetPosition(soggy->GetPosition());
		SetFlipHorizontal(soggy->GetFlipHorizontal());
	}
}

void AngelClass::sm1_visible_OnUpdate(float dt)
{
	SetVelocity(Vector2D(0,13));
	
	if(GetOpacity()>0.0f)
	{
		SetOpacity(GetOpacity()-0.015f);
	}
}

