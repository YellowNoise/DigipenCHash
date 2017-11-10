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

IMPLEMENT_OBJECT(ButtonClass);

ButtonClass::ButtonClass():Sprite()
{ 

}
ButtonClass::ButtonClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

ButtonClass::ButtonClass(const ButtonClass & other):Sprite(other)
{
	OnClone(other);


}

ButtonClass *ButtonClass::Clone()
{
	return new ButtonClass(*this);
}

void ButtonClass::Update(float dt) 
{
// Generated Code //

// user code//
if(GetCollisionInfo().IsCollidedWithSprite("Mouse",false))
	SetCurrentAnimationIndex(1);
else
	SetCurrentAnimationIndex(0);
}

void ButtonClass::Destroy() 
{
	Sprite::Destroy();

}

void ButtonClass::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void ButtonClass::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void ButtonClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void ButtonClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void ButtonClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void ButtonClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void ButtonClass::OnStart() 
{

}

void ButtonClass::OnEnd() 
{

}

void ButtonClass::OnClone(const ButtonClass & other) 
{

}

 ButtonClass::~ButtonClass() 
{

}



