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

bool MyGame::sm1_Splash_MainMenu(float dt)
{
	return true;
	return false;
}

bool MyGame::sm1_WinLevel_MainMenu(float dt)
{
	return true;
	return false;
}

bool MyGame::sm1_LoseLevel_MainMenu(float dt)
{
	return true;
	return false;
}

bool MyGame::sm1_Level0_LoseLevel(float dt)
{
	return livesvalue<0;
	return false;
}

bool MyGame::sm1_Level0_WinLevel(float dt)
{
	return scorevalue==4000;
	return false;
}

bool MyGame::sm1_Level0_MainMenu(float dt)
{
	// Check if F is triggered
	if(GetKeyboard()->IsTriggered(Keyboard::Escape))
	{
	 return true;
	}
	else
	return false;
	return false;
}

bool MyGame::sm1_MainMenu_Level0(float dt)
{
	ButtonClass * start = GetGameObject<ButtonClass>("Start");
	if(start)
	{
		if(start->GetCollisionInfo().IsCollidedWithSprite("Mouse",false)
			&& GetMouse()->IsTriggered(Mouse::Left))
		{
			return true;
		}
	}
	return false;
	return false;
}

bool MyGame::sm1_MainMenu_Exit(float dt)
{
	if(GetKeyboard()->IsPressed(Keyboard::Escape))
	{
	//	Toggle between fullscreen and window
		Exit();
	}
	return false;
}

void MyGame::sm1_WinLevel_OnEnter(float dt)
{
	GoToLevel(1);
}

void MyGame::sm1_LoseLevel_OnEnter(float dt)
{
	GoToLevel(2);
}

void MyGame::sm1_Level0_OnEnter(float dt)
{
	GoToLevel(0);
}

void MyGame::sm1_Exit_OnEnter(float dt)
{
	Exit();
}

void MyGame::sm1_MainMenu_OnEnter(float dt)
{
	GoToLevel(3);
	
	livesvalue=3;
	scorevalue=0;
}

void MyGame::sm1_MainMenu_OnUpdate(float dt)
{
	ButtonClass * exit = GetGameObject<ButtonClass>("Exit");
	if(exit)
	{
		if(exit->GetCollisionInfo().IsCollidedWithSprite("Mouse",false)
			&& GetMouse()->IsTriggered(Mouse::Left))
		{
			Exit();
		}
	}
}

