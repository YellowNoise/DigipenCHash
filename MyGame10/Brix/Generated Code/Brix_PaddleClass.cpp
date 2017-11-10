#include "BRIX_MainDeclarations.h"
#include "BRIX_Declarations.h"
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

}
PaddleClass::PaddleClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

PaddleClass::PaddleClass(const PaddleClass & other):Sprite(other)
{
	OnClone(other);


}

PaddleClass *PaddleClass::Clone()
{
	return new PaddleClass(*this);
}

void PaddleClass::Update(float dt) 
{
// Generated Code //

// user code//
Movement();
}

void PaddleClass::Destroy() 
{
	Sprite::Destroy();

}

void PaddleClass::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void PaddleClass::Load(Core::File & file) 
{
	Sprite::Load(file);


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
// Generated Code //

// user code//
myspeed=35;
}

void PaddleClass::OnEnd() 
{

}

void PaddleClass::OnClone(const PaddleClass & other) 
{

}

void PaddleClass::Movement() 
{
// Generated Code //

// user code//
if(GetKeyboard()->IsPressed(Keyboard::Right))
	SetVelocity(Vector2D(myspeed,0));
else if(GetKeyboard()->IsPressed(Keyboard::Left))
	SetVelocity(Vector2D(-myspeed,0));
else 
	SetVelocity(Vector2D(0,0));
}

 PaddleClass::~PaddleClass() 
{

}



