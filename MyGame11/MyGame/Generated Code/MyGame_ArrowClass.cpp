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

IMPLEMENT_OBJECT(ArrowClass);

ArrowClass::ArrowClass():Sprite()
{ 

}
ArrowClass::ArrowClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

ArrowClass::ArrowClass(const ArrowClass & other):Sprite(other)
{
	OnClone(other);


}

ArrowClass *ArrowClass::Clone()
{
	return new ArrowClass(*this);
}

void ArrowClass::Update(float dt) 
{
// Generated Code //

// user code//
//If up is pressed
if(GetKeyboard()->IsPressed(Keyboard::Up))
{
	//Render 2nd frame
	SetCurrentFrameIndex(1);
}
else if(GetKeyboard()->IsPressed(Keyboard::Down))
{
	//Render 3rd frame
	SetCurrentFrameIndex(2);
}
else
{
	SetCurrentFrameIndex(0);
}
}

void ArrowClass::Destroy() 
{
	Sprite::Destroy();

}

void ArrowClass::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void ArrowClass::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void ArrowClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void ArrowClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void ArrowClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void ArrowClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void ArrowClass::OnStart() 
{

}

void ArrowClass::OnEnd() 
{

}

void ArrowClass::OnClone(const ArrowClass & other) 
{

}

 ArrowClass::~ArrowClass() 
{

}



