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

IMPLEMENT_OBJECT(AngelClass);

AngelClass::AngelClass():Sprite()
{ 

	sm1 = Create_AngelClass_sm1_StateMachine(this);

}
AngelClass::AngelClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{



	sm1 = Create_AngelClass_sm1_StateMachine(this);



}

AngelClass::AngelClass(const AngelClass & other):Sprite(other)
{
	OnClone(other);
	sm1 = other.sm1->Clone();
	sm1->SetThis(this);



}

AngelClass *AngelClass::Clone()
{
	return new AngelClass(*this);
}

void AngelClass::Update(float dt) 
{
// Generated Code //

// user code//
sm1->Update(dt);
}

void AngelClass::Destroy() 
{
	Sprite::Destroy();

}

void AngelClass::Save(Core::File & file)  const
{
	Sprite::Save(file);


	// save StateMachines //
	file << sm1;


}

void AngelClass::Load(Core::File & file) 
{
	Sprite::Load(file);

	// load StateMachines //
	file >> sm1;


}

void AngelClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void AngelClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void AngelClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void AngelClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void AngelClass::OnStart() 
{

}

void AngelClass::OnEnd() 
{

}

void AngelClass::OnClone(const AngelClass & other) 
{

}

 AngelClass::~AngelClass() 
{

}



