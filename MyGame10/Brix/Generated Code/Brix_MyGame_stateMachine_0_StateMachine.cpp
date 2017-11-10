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

StateMachine<MyGame>::StateMachinePtr Create_MyGame_stateMachine_0_StateMachine(MyGame * owner)
{
	vector<StateBase<MyGame>::StateBasePtr> states(1);

	State<MyGame>::StatePtr S0 = new State<MyGame>(0.0f);
	S0->SetName("S0");
	states[0] = S0;


	StateMachine<MyGame>::StateMachinePtr stateMachine_0 = new StateMachine<MyGame>(states,0,0.0f,owner);
	stateMachine_0->SetName("stateMachine_0");
	return stateMachine_0;
}
