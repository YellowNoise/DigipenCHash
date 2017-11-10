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

StateMachine<EnemyClass1>::StateMachinePtr Create_EnemyClass1_sm1_StateMachine(EnemyClass1 * owner)
{
	vector<StateBase<EnemyClass1>::StateBasePtr> states(2);

	State<EnemyClass1>::StatePtr Right = new State<EnemyClass1>(0.0f);
	Right->SetName("Right");
	Right->SetEnter(&EnemyClass1::sm1_Right_OnEnter);
	Right->AddTransition(Transition<EnemyClass1>(&EnemyClass1::sm1_Right_Left,1,1.5f));
	states[0] = Right;

	State<EnemyClass1>::StatePtr Left = new State<EnemyClass1>(0.0f);
	Left->SetName("Left");
	Left->SetEnter(&EnemyClass1::sm1_Left_OnEnter);
	Left->AddTransition(Transition<EnemyClass1>(&EnemyClass1::sm1_Left_Right,0,1.5f));
	states[1] = Left;


	StateMachine<EnemyClass1>::StateMachinePtr sm1 = new StateMachine<EnemyClass1>(states,1,0.0f,owner);
	sm1->SetName("sm1");
	return sm1;
}
