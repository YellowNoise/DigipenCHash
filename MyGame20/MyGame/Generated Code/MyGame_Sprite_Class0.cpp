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

IMPLEMENT_OBJECT(Sprite_Class0);

Sprite_Class0::Sprite_Class0():Sprite()
{ 

}
Sprite_Class0::Sprite_Class0(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

Sprite_Class0::Sprite_Class0(const Sprite_Class0 & other):Sprite(other)
{
	OnClone(other);


}

Sprite_Class0 *Sprite_Class0::Clone()
{
	return new Sprite_Class0(*this);
}

void Sprite_Class0::Update(float dt) 
{
// Generated Code //

// user code//
int x=0;
int y=0;
if(GetKeyboard()->IsPressed(Keyboard::Left))
	x=-1;
if(GetKeyboard()->IsPressed(Keyboard::Right))
	x=1;
if(GetKeyboard()->IsPressed(Keyboard::Up))
	y=1;
if(GetKeyboard()->IsPressed(Keyboard::Down))
	y=-1;

Vector2D direction(x,y);
direction.SetNormalize();
float speed= 5.2;
SetPositionX(GetPositionX()+direction.X*speed);
SetPositionY(GetPositionY()+direction.Y*speed);

}

void Sprite_Class0::Destroy() 
{
	Sprite::Destroy();

}

void Sprite_Class0::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void Sprite_Class0::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void Sprite_Class0::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void Sprite_Class0::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void Sprite_Class0::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void Sprite_Class0::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void Sprite_Class0::OnStart() 
{

}

void Sprite_Class0::OnEnd() 
{

}

void Sprite_Class0::OnClone(const Sprite_Class0 & other) 
{

}

 Sprite_Class0::~Sprite_Class0() 
{

}



