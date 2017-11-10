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

StateMachine<SoggyClass>::StateMachinePtr Create_SoggyClass_animationsm_StateMachine(SoggyClass * owner)
{
	vector<StateBase<SoggyClass>::StateBasePtr> states(4);

	State<SoggyClass>::StatePtr Idle = new State<SoggyClass>(0.0f);
	Idle->SetName("Idle");
	Idle->SetEnter(&SoggyClass::animationsm_Idle_OnEnter);
	Idle->AddTransition(Transition<SoggyClass>(&SoggyClass::animationsm_Idle_Walk,2,0.0f));
	Idle->AddTransition(Transition<SoggyClass>(&SoggyClass::animationsm_Idle_Win,1,0.0f));
	Idle->AddTransition(Transition<SoggyClass>(&SoggyClass::animationsm_Idle_Jump,3,0.0f));
	states[0] = Idle;

	State<SoggyClass>::StatePtr Win = new State<SoggyClass>(0.0f);
	Win->SetName("Win");
	Win->SetEnter(&SoggyClass::animationsm_Win_OnEnter);
	Win->SetUpdate(&SoggyClass::animationsm_Win_OnUpdate);
	states[1] = Win;

	State<SoggyClass>::StatePtr Walk = new State<SoggyClass>(0.0f);
	Walk->SetName("Walk");
	Walk->SetEnter(&SoggyClass::animationsm_Walk_OnEnter);
	Walk->AddTransition(Transition<SoggyClass>(&SoggyClass::animationsm_Walk_Idle,0,0.0f));
	Walk->AddTransition(Transition<SoggyClass>(&SoggyClass::animationsm_Walk_Jump,3,0.0f));
	states[2] = Walk;

	State<SoggyClass>::StatePtr Jump = new State<SoggyClass>(0.0f);
	Jump->SetName("Jump");
	Jump->SetEnter(&SoggyClass::animationsm_Jump_OnEnter);
	Jump->AddTransition(Transition<SoggyClass>(&SoggyClass::animationsm_Jump_Idle,0,0.0f));
	states[3] = Jump;


	StateMachine<SoggyClass>::StateMachinePtr animationsm = new StateMachine<SoggyClass>(states,0,0.0f,owner);
	animationsm->SetName("animationsm");
	return animationsm;
}
