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

IMPLEMENT_OBJECT(BulletClass);

BulletClass::BulletClass():Sprite()
{ 

}
BulletClass::BulletClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

BulletClass::BulletClass(const BulletClass & other):Sprite(other)
{
	OnClone(other);


}

BulletClass *BulletClass::Clone()
{
	return new BulletClass(*this);
}

void BulletClass::Update(float dt) 
{
// Generated Code //

// user code//
if(GetVisible()==true&&IsInViewport(0u)==false)
{
	Destroy();
}
//Check if sprite is lower than viewport


if(GetCollisionInfo().IsCollidedWithSprite("ball",true))
{
	Destroy();
}
}

void BulletClass::Destroy() 
{
	Sprite::Destroy();

}

void BulletClass::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void BulletClass::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void BulletClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void BulletClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void BulletClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void BulletClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void BulletClass::OnStart() 
{

}

void BulletClass::OnEnd() 
{

}

void BulletClass::OnClone(const BulletClass & other) 
{

}

 BulletClass::~BulletClass() 
{

}



