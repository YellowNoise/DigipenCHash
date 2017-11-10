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

IMPLEMENT_OBJECT(RingClass);

RingClass::RingClass():Sprite()
{ 

}
RingClass::RingClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

RingClass::RingClass(const RingClass & other):Sprite(other)
{
	OnClone(other);


}

RingClass *RingClass::Clone()
{
	return new RingClass(*this);
}

void RingClass::Update(float dt) 
{
// Generated Code //

// user code//
if(GetCollisionInfo().IsCollidedWithSprite("soggy",true))
{
	GetMyGame()->ringscollected++;
	GetGameObject<SoggyClass>("soggy")->jumpcountermax++;
	Destroy();
}
}

void RingClass::Destroy() 
{
	Sprite::Destroy();

}

void RingClass::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void RingClass::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void RingClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void RingClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void RingClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void RingClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void RingClass::OnStart() 
{

}

void RingClass::OnEnd() 
{

}

void RingClass::OnClone(const RingClass & other) 
{

}

 RingClass::~RingClass() 
{

}



