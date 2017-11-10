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

IMPLEMENT_OBJECT(PaddleClass);

PaddleClass::PaddleClass():Sprite()
{ 

	Movement = Create_PaddleClass_Movement_StateMachine(this);

}
PaddleClass::PaddleClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{



	Movement = Create_PaddleClass_Movement_StateMachine(this);



}

PaddleClass::PaddleClass(const PaddleClass & other):Sprite(other)
{
	OnClone(other);
	Movement = other.Movement->Clone();
	Movement->SetThis(this);



}

PaddleClass *PaddleClass::Clone()
{
	return new PaddleClass(*this);
}

void PaddleClass::Update(float dt) 
{
// Generated Code //

// user code//
//Call movement state machine

Movement->Update(dt);
}

void PaddleClass::Destroy() 
{
	Sprite::Destroy();

}

void PaddleClass::Save(Core::File & file)  const
{
	Sprite::Save(file);


	// save StateMachines //
	file << Movement;


}

void PaddleClass::Load(Core::File & file) 
{
	Sprite::Load(file);

	// load StateMachines //
	file >> Movement;


}

void PaddleClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void PaddleClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void PaddleClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void PaddleClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void PaddleClass::OnStart() 
{

}

void PaddleClass::OnEnd() 
{

}

void PaddleClass::OnClone(const PaddleClass & other) 
{

}

 PaddleClass::~PaddleClass() 
{

}



