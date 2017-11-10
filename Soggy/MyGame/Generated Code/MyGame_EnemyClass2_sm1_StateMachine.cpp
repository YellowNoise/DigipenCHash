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

StateMachine<EnemyClass2>::StateMachinePtr Create_EnemyClass2_sm1_StateMachine(EnemyClass2 * owner)
{
	vector<StateBase<EnemyClass2>::StateBasePtr> states(2);

	State<EnemyClass2>::StatePtr Right = new State<EnemyClass2>(0.0f);
	Right->SetName("Right");
	Right->SetEnter(&EnemyClass2::sm1_Right_OnEnter);
	Right->AddTransition(Transition<EnemyClass2>(&EnemyClass2::sm1_Right_Left,1,2.5f));
	states[0] = Right;

	State<EnemyClass2>::StatePtr Left = new State<EnemyClass2>(0.0f);
	Left->SetName("Left");
	Left->SetEnter(&EnemyClass2::sm1_Left_OnEnter);
	Left->AddTransition(Transition<EnemyClass2>(&EnemyClass2::sm1_Left_Right,0,2.5f));
	states[1] = Left;


	StateMachine<EnemyClass2>::StateMachinePtr sm1 = new StateMachine<EnemyClass2>(states,1,0.0f,owner);
	sm1->SetName("sm1");
	return sm1;
}
