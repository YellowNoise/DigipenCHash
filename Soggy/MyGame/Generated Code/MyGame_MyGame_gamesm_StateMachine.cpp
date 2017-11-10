#include "MyGame_MainDeclarations.h"
#include "MyGame_Declarations.h"
#include <Core_DetectMemoryLeaks.h>

using namespace Core;
using namespace Math;
using namespace Input;
using namespace ProjectFun;
using namespace Collision2D;
using namespace Physics2D;
using namespace std;

StateMachine<MyGame>::StateMachinePtr Create_MyGame_gamesm_StateMachine(MyGame * owner)
{
	vector<StateBase<MyGame>::StateBasePtr> states(4);

	State<MyGame>::StatePtr Win = new State<MyGame>(0.0f);
	Win->SetName("Win");
	Win->SetEnter(&MyGame::gamesm_Win_OnEnter);
	Win->AddTransition(Transition<MyGame>(&MyGame::gamesm_Win_Start,3,0.0f));
	states[0] = Win;

	State<MyGame>::StatePtr Game = new State<MyGame>(0.0f);
	Game->SetName("Game");
	Game->SetEnter(&MyGame::gamesm_Game_OnEnter);
	Game->AddTransition(Transition<MyGame>(&MyGame::gamesm_Game_Lose,2,0.0f));
	Game->AddTransition(Transition<MyGame>(&MyGame::gamesm_Game_Win,0,2.0f));
	states[1] = Game;

	State<MyGame>::StatePtr Lose = new State<MyGame>(0.0f);
	Lose->SetName("Lose");
	Lose->SetEnter(&MyGame::gamesm_Lose_OnEnter);
	Lose->AddTransition(Transition<MyGame>(&MyGame::gamesm_Lose_Start,3,0.0f));
	states[2] = Lose;

	State<MyGame>::StatePtr Start = new State<MyGame>(0.0f);
	Start->SetName("Start");
	Start->SetEnter(&MyGame::gamesm_Start_OnEnter);
	Start->AddTransition(Transition<MyGame>(&MyGame::gamesm_Start_Game,1,0.0f));
	states[3] = Start;


	StateMachine<MyGame>::StateMachinePtr gamesm = new StateMachine<MyGame>(states,3,0.0f,owner);
	gamesm->SetName("gamesm");
	return gamesm;
}
