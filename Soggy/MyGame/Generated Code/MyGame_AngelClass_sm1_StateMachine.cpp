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

StateMachine<AngelClass>::StateMachinePtr Create_AngelClass_sm1_StateMachine(AngelClass * owner)
{
	vector<StateBase<AngelClass>::StateBasePtr> states(2);

	State<AngelClass>::StatePtr invisible = new State<AngelClass>(0.0f);
	invisible->SetName("invisible");
	invisible->SetEnter(&AngelClass::sm1_invisible_OnEnter);
	invisible->AddTransition(Transition<AngelClass>(&AngelClass::sm1_invisible_visible,1,0.0f));
	states[0] = invisible;

	State<AngelClass>::StatePtr visible = new State<AngelClass>(0.5f);
	visible->SetName("visible");
	visible->SetEnter(&AngelClass::sm1_visible_OnEnter);
	visible->SetUpdate(&AngelClass::sm1_visible_OnUpdate);
	visible->AddTransition(Transition<AngelClass>(&AngelClass::sm1_visible_invisible,0,0.0f));
	states[1] = visible;


	StateMachine<AngelClass>::StateMachinePtr sm1 = new StateMachine<AngelClass>(states,0,0.0f,owner);
	sm1->SetName("sm1");
	return sm1;
}
