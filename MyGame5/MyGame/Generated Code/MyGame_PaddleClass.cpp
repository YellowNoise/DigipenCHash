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


//Check if left key is pressed
if(GetKeyboard()->IsPressed(Keyboard::Left))
{ // Moving paddle left by speed px
	SetPositionX( GetPositionX() - speed);
}
//Check if Right key is pressed
else if(GetKeyboard()->IsPressed(Keyboard::Right))
{ // Moving paddle Right by speed px
	SetPositionX( GetPositionX() + speed);
}
//Check if Right key is pressed
else if(GetKeyboard()->IsPressed(Keyboard::Up))
{ // Moving paddle Up by speed px
	SetPositionY( GetPositionY() + speed);
}

//Check if Right key is pressed
else if(GetKeyboard()->IsPressed(Keyboard::Down))
{ // Moving paddle Down by speed px
	SetPositionY( GetPositionY() - speed);
}




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
speed = 5;
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



