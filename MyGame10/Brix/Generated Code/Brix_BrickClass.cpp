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

IMPLEMENT_OBJECT(BrickClass);

BrickClass::BrickClass():Sprite()
{ 

}
BrickClass::BrickClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

BrickClass::BrickClass(const BrickClass & other):Sprite(other)
{
	OnClone(other);


}

BrickClass *BrickClass::Clone()
{
	return new BrickClass(*this);
}

void BrickClass::Update(float dt) 
{
// Generated Code //

// user code//
if(GetCollisionInfo().IsCollidedWithSprite("ball", true))
{
	GetMyGame()->scorevalue+=100;
	Destroy();
	
	Sound *boop = GetGameObject<Sound>("Brick");
	if(boop)
		boop->Play(true);
	ParticleSystem *masterps = GetGameObject<ParticleSystem>("masterps");
	ParticleSystem *cloned =masterps->Clone();
	if(cloned)
	{
		cloned->SetVisible(true);
		cloned->SetName("ps");
		cloned->SetPosition(GetPositionX(),GetPositionY());
		cloned->SetVisible(true);
		cloned->SetLifeTime(1.0f);
		cloned->Reset();
		GetLayer()->AddGameObject(cloned);
	}
}
}

void BrickClass::Destroy() 
{
	Sprite::Destroy();

}

void BrickClass::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void BrickClass::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void BrickClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void BrickClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void BrickClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void BrickClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void BrickClass::OnStart() 
{

}

void BrickClass::OnEnd() 
{

}

void BrickClass::OnClone(const BrickClass & other) 
{

}

 BrickClass::~BrickClass() 
{

}



