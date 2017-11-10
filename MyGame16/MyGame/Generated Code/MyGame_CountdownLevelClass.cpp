#include "MYGAME_MainDeclarations.h"
#include "MYGAME_Declarations.h"
#include <Core_DetectMemoryLeaks.h>

using namespace Core;
using namespace Math;
using namespace Input;
using namespace ProjectFun;
using namespace Collision2D;
using namespace Physics2D;
using namespace GUI;
using namespace std;

IMPLEMENT_OBJECT(CountdownLevelClass);

CountdownLevelClass::CountdownLevelClass(void):Level()
{





}

void CountdownLevelClass::Update(float dt) 
{
// Generated Code //

// user code//
//Decreases the timer variable by 1
--timer;
//check if timer has reached 0
if(timer==0)
{
	GetMyGame()->GoToLevel("level1");
}
}

void CountdownLevelClass::Save(Core::File & file)  const
{
	Level::Save(file);



}

void CountdownLevelClass::Load(Core::File & file) 
{
	Level::Load(file);


}

void CountdownLevelClass::OnStart() 
{
// Generated Code //

// user code//
//6 s, 60fps
timer =360;
}

void CountdownLevelClass::OnEnd() 
{

}

 CountdownLevelClass::~CountdownLevelClass() 
{

}



