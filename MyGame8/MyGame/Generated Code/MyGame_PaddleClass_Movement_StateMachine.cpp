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

StateMachine<PaddleClass>::StateMachinePtr Create_PaddleClass_Movement_StateMachine(PaddleClass * owner)
{
	vector<StateBase<PaddleClass>::StateBasePtr> states(2);

	State<PaddleClass>::StatePtr MovingRight = new State<PaddleClass>(0.0f);
	MovingRight->SetName("MovingRight");
	MovingRight->SetUpdate(&PaddleClass::Movement_MovingRight_OnUpdate);
	MovingRight->AddTransition(Transition<PaddleClass>(&PaddleClass::Movement_MovingRight_MovingLeft,1,0.0f));
	states[0] = MovingRight;

	State<PaddleClass>::StatePtr MovingLeft = new State<PaddleClass>(0.0f);
	MovingLeft->SetName("MovingLeft");
	MovingLeft->SetEnter(&PaddleClass::Movement_MovingLeft_OnEnter);
	MovingLeft->SetUpdate(&PaddleClass::Movement_MovingLeft_OnUpdate);
	MovingLeft->AddTransition(Transition<PaddleClass>(&PaddleClass::Movement_MovingLeft_MovingRight,0,0.0f));
	states[1] = MovingLeft;


	StateMachine<PaddleClass>::StateMachinePtr Movement = new StateMachine<PaddleClass>(states,1,0.0f,owner);
	Movement->SetName("Movement");
	return Movement;
}
