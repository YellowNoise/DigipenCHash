#include "Brix_MainDeclarations.h"
#include "Brix_Declarations.h"
#include <Core_DetectMemoryLeaks.h>

using namespace Core;
using namespace Math;
using namespace Input;
using namespace ProjectFun;
using namespace Collision2D;
using namespace Physics2D;
using namespace std;

StateMachine<MyGame>::StateMachinePtr Create_MyGame_sm1_StateMachine(MyGame * owner)
{
	vector<StateBase<MyGame>::StateBasePtr> states(6);

	State<MyGame>::StatePtr Splash = new State<MyGame>(0.0f);
	Splash->SetName("Splash");
	Splash->AddTransition(Transition<MyGame>(&MyGame::sm1_Splash_MainMenu,5,2.0f));
	states[0] = Splash;

	State<MyGame>::StatePtr WinLevel = new State<MyGame>(0.0f);
	WinLevel->SetName("WinLevel");
	WinLevel->SetEnter(&MyGame::sm1_WinLevel_OnEnter);
	WinLevel->AddTransition(Transition<MyGame>(&MyGame::sm1_WinLevel_MainMenu,5,0.0f));
	states[1] = WinLevel;

	State<MyGame>::StatePtr LoseLevel = new State<MyGame>(0.0f);
	LoseLevel->SetName("LoseLevel");
	LoseLevel->SetEnter(&MyGame::sm1_LoseLevel_OnEnter);
	LoseLevel->AddTransition(Transition<MyGame>(&MyGame::sm1_LoseLevel_MainMenu,5,3.0f));
	states[2] = LoseLevel;

	State<MyGame>::StatePtr Level0 = new State<MyGame>(0.0f);
	Level0->SetName("Level0");
	Level0->SetEnter(&MyGame::sm1_Level0_OnEnter);
	Level0->AddTransition(Transition<MyGame>(&MyGame::sm1_Level0_LoseLevel,2,0.0f));
	Level0->AddTransition(Transition<MyGame>(&MyGame::sm1_Level0_WinLevel,1,0.0f));
	Level0->AddTransition(Transition<MyGame>(&MyGame::sm1_Level0_MainMenu,5,0.0f));
	states[3] = Level0;

	State<MyGame>::StatePtr Exit = new State<MyGame>(0.0f);
	Exit->SetName("Exit");
	Exit->SetEnter(&MyGame::sm1_Exit_OnEnter);
	states[4] = Exit;

	State<MyGame>::StatePtr MainMenu = new State<MyGame>(0.0f);
	MainMenu->SetName("MainMenu");
	MainMenu->SetEnter(&MyGame::sm1_MainMenu_OnEnter);
	MainMenu->SetUpdate(&MyGame::sm1_MainMenu_OnUpdate);
	MainMenu->AddTransition(Transition<MyGame>(&MyGame::sm1_MainMenu_Level0,3,0.0f));
	MainMenu->AddTransition(Transition<MyGame>(&MyGame::sm1_MainMenu_Exit,4,0.5f));
	states[5] = MainMenu;


	StateMachine<MyGame>::StateMachinePtr sm1 = new StateMachine<MyGame>(states,0,0.0f,owner);
	sm1->SetName("sm1");
	return sm1;
}
