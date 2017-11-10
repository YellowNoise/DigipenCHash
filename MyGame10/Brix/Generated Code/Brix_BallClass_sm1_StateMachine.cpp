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

StateMachine<BallClass>::StateMachinePtr Create_BallClass_sm1_StateMachine(BallClass * owner)
{
	vector<StateBase<BallClass>::StateBasePtr> states(2);

	State<BallClass>::StatePtr Play = new State<BallClass>(0.0f);
	Play->SetName("Play");
	Play->SetEnter(&BallClass::sm1_Play_OnEnter);
	Play->AddTransition(Transition<BallClass>(&BallClass::sm1_Play_Idle,1,0.0f));
	states[0] = Play;

	State<BallClass>::StatePtr Idle = new State<BallClass>(0.0f);
	Idle->SetName("Idle");
	Idle->SetEnter(&BallClass::sm1_Idle_OnEnter);
	Idle->SetUpdate(&BallClass::sm1_Idle_OnUpdate);
	Idle->AddTransition(Transition<BallClass>(&BallClass::sm1_Idle_Play,0,0.0f));
	states[1] = Idle;


	StateMachine<BallClass>::StateMachinePtr sm1 = new StateMachine<BallClass>(states,1,0.0f,owner);
	sm1->SetName("sm1");
	return sm1;
}
