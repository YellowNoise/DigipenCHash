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

bool MyGame::gamesm_Win_Start(float dt)
{
	return true;
	return false;
}

bool MyGame::gamesm_Game_Lose(float dt)
{
	SoggyClass * soggy = GetGameObject<SoggyClass>("soggy");
	
	if(soggy)
	{
		return (lives < 0 && soggy-> blink<=0);
	}
	return false;
	return false;
}

bool MyGame::gamesm_Game_Win(float dt)
{
	return isgamewon;
	return false;
}

bool MyGame::gamesm_Lose_Start(float dt)
{
	return true;
	return false;
}

bool MyGame::gamesm_Start_Game(float dt)
{
	return CursorCollidedWithButton("play");
	return false;
}

void MyGame::gamesm_Win_OnEnter(float dt)
{
	GoToLevel(1);
}

void MyGame::gamesm_Game_OnEnter(float dt)
{
	GoToLevel(0);
}

void MyGame::gamesm_Lose_OnEnter(float dt)
{
	GoToLevel(2);
}

void MyGame::gamesm_Start_OnEnter(float dt)
{
	GoToLevel(3);
	enemiesdestroyed=0;
	ringscollected=0;
	lives=3;
	isgamewon=false;
}

