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

StateMachine<SoggyClass>::StateMachinePtr Create_SoggyClass_PlatformSM_StateMachine(SoggyClass * owner)
{
	vector<StateBase<SoggyClass>::StateBasePtr> states(2);

	State<SoggyClass>::StatePtr OnGround = new State<SoggyClass>(0.0f);
	OnGround->SetName("OnGround");
	OnGround->SetEnter(&SoggyClass::PlatformSM_OnGround_OnEnter);
	OnGround->SetUpdate(&SoggyClass::PlatformSM_OnGround_OnUpdate);
	OnGround->AddTransition(Transition<SoggyClass>(&SoggyClass::PlatformSM_OnGround_inair,1,0.0f));
	OnGround->AddTransition(Transition<SoggyClass>(&SoggyClass::PlatformSM_OnGround_inair_1,1,0.1f));
	states[0] = OnGround;

	State<SoggyClass>::StatePtr inair = new State<SoggyClass>(0.0f);
	inair->SetName("inair");
	inair->SetEnter(&SoggyClass::PlatformSM_inair_OnEnter);
	inair->SetUpdate(&SoggyClass::PlatformSM_inair_OnUpdate);
	inair->AddTransition(Transition<SoggyClass>(&SoggyClass::PlatformSM_inair_OnGround,0,0.0f));
	states[1] = inair;


	StateMachine<SoggyClass>::StateMachinePtr PlatformSM = new StateMachine<SoggyClass>(states,0,0.0f,owner);
	PlatformSM->SetName("PlatformSM");
	return PlatformSM;
}
