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

IMPLEMENT_OBJECT(ArrowLRClass);

ArrowLRClass::ArrowLRClass():Sprite()
{ 

}
ArrowLRClass::ArrowLRClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

ArrowLRClass::ArrowLRClass(const ArrowLRClass & other):Sprite(other)
{
	OnClone(other);


}

ArrowLRClass *ArrowLRClass::Clone()
{
	return new ArrowLRClass(*this);
}

void ArrowLRClass::Update(float dt) 
{
// Generated Code //

// user code//
if(GetKeyboard()->IsPressed(Keyboard::Left))
{
	SetCurrentAnimationIndex(0);
	Play();
}
else if(GetKeyboard()->IsPressed(Keyboard::Right))
{
	SetCurrentAnimationIndex(1);
	Play();
}
else
{
	Stop();
}
}

void ArrowLRClass::Destroy() 
{
	Sprite::Destroy();

}

void ArrowLRClass::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void ArrowLRClass::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void ArrowLRClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void ArrowLRClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void ArrowLRClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void ArrowLRClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void ArrowLRClass::OnStart() 
{

}

void ArrowLRClass::OnEnd() 
{

}

void ArrowLRClass::OnClone(const ArrowLRClass & other) 
{

}

 ArrowLRClass::~ArrowLRClass() 
{

}



