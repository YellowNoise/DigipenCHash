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
movement();
collisioncheck();
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
speed=25;
}

void PaddleClass::OnEnd() 
{

}

void PaddleClass::OnClone(const PaddleClass & other) 
{

}

void PaddleClass::movement() 
{
// Generated Code //

// user code//
if(GetKeyboard()->IsPressed(Keyboard::Right))
{
	SetVelocity(Vector2D(speed,0));
}
else if(GetKeyboard()->IsPressed(Keyboard::Left))
{
	SetVelocity(Vector2D(-speed,0));
}
else if(GetKeyboard()->IsPressed(Keyboard::Up))
{
	SetVelocity(Vector2D(0,speed));
}
else if(GetKeyboard()->IsPressed(Keyboard::Down))
{
	SetVelocity(Vector2D(0,-speed));
}
else
{
	SetVelocity(Vector2D(0,0));
}
}

void PaddleClass::collisioncheck() 
{
// Generated Code //

// user code//
if(GetCollisionInfo().IsCollidedWithSprite("ball", true))
{
	SetPositionX(0);
	SetPositionY(0);
	SetOldPosition(GetPosition());
}
}

 PaddleClass::~PaddleClass() 
{

}



