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

IMPLEMENT_OBJECT(ShipClass);

ShipClass::ShipClass():Sprite()
{ 

}
ShipClass::ShipClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

ShipClass::ShipClass(const ShipClass & other):Sprite(other)
{
	OnClone(other);


}

ShipClass *ShipClass::Clone()
{
	return new ShipClass(*this);
}

void ShipClass::Update(float dt) 
{
// Generated Code //

// user code//
movement();
Rotation();
WrapShip();
}

void ShipClass::Destroy() 
{
	Sprite::Destroy();

}

void ShipClass::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void ShipClass::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void ShipClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void ShipClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void ShipClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void ShipClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void ShipClass::OnStart() 
{
// Generated Code //

// user code//
AddForce(new DragForce(0.1f,0.0f));

}

void ShipClass::OnEnd() 
{

}

void ShipClass::OnClone(const ShipClass & other) 
{

}

void ShipClass::movement() 
{
// Generated Code //

// user code//
if(GetKeyboard()->IsPressed(Keyboard::Up))
{
	Vector2D dir(1,0);
	float angle = GetRotationAngle();
	dir.Rotate(angle);
	float speed = 10.0f;
	float time = 0.1f;
	AddForce(new ConstantForce(dir,speed,time));
}
if(GetKeyboard()->IsPressed(Keyboard::Down))
{
	Vector2D dir(-1,0);
	float angle = GetRotationAngle();
	dir.Rotate(angle);
	float speed = 10.0f;
	float time = 0.1f;
	AddForce(new ConstantForce(dir,speed,time));
}


}

void ShipClass::WrapShip() 
{
// Generated Code //

// user code//
if(GetPositionX()>450)
	SetPositionX(-450);
if(GetPositionX()<-450)
	SetPositionX(450);
if(GetPositionY()>350)
	SetPositionY(-350);
if(GetPositionY()<-350)
	SetPositionY(350);
}

void ShipClass::Rotation() 
{
// Generated Code //

// user code//
if(GetKeyboard()->IsPressed(Keyboard::Left))
SetRotationAngle(GetRotationAngle()+3);
if(GetKeyboard()->IsPressed(Keyboard::Right))
SetRotationAngle(GetRotationAngle()-3);
}

 ShipClass::~ShipClass() 
{

}



