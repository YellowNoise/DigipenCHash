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

IMPLEMENT_OBJECT(PlayerClass);

PlayerClass::PlayerClass():Sprite()
{ 

}
PlayerClass::PlayerClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

PlayerClass::PlayerClass(const PlayerClass & other):Sprite(other)
{
	OnClone(other);


}

PlayerClass *PlayerClass::Clone()
{
	return new PlayerClass(*this);
}

void PlayerClass::Update(float dt) 
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

void PlayerClass::Destroy() 
{
	Sprite::Destroy();

}

void PlayerClass::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void PlayerClass::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void PlayerClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void PlayerClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void PlayerClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void PlayerClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void PlayerClass::OnStart() 
{

}

void PlayerClass::OnEnd() 
{

}

void PlayerClass::OnClone(const PlayerClass & other) 
{

}

 PlayerClass::~PlayerClass() 
{

}



