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

IMPLEMENT_OBJECT(ScrollBGClass);

ScrollBGClass::ScrollBGClass():Sprite()
{ 

}
ScrollBGClass::ScrollBGClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

ScrollBGClass::ScrollBGClass(const ScrollBGClass & other):Sprite(other)
{
	OnClone(other);


}

ScrollBGClass *ScrollBGClass::Clone()
{
	return new ScrollBGClass(*this);
}

void ScrollBGClass::Update(float dt) 
{
// Generated Code //

// user code//
//Move the sprite 5 px left
SetPositionX(GetPositionX()-5);

if(GetPositionX()<=-800)
{
	SetPositionX(GetPositionX()+1600);
}
}

void ScrollBGClass::Destroy() 
{
	Sprite::Destroy();

}

void ScrollBGClass::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void ScrollBGClass::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void ScrollBGClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void ScrollBGClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void ScrollBGClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void ScrollBGClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void ScrollBGClass::OnStart() 
{

}

void ScrollBGClass::OnEnd() 
{

}

void ScrollBGClass::OnClone(const ScrollBGClass & other) 
{

}

 ScrollBGClass::~ScrollBGClass() 
{

}



