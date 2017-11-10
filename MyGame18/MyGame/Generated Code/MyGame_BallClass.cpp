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

IMPLEMENT_OBJECT(BallClass);

BallClass::BallClass():Sprite()
{ 

}
BallClass::BallClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

BallClass::BallClass(const BallClass & other):Sprite(other)
{
	OnClone(other);


}

BallClass *BallClass::Clone()
{
	return new BallClass(*this);
}

void BallClass::Update(float dt) 
{
// Generated Code //

// user code//
//Check if sprite is lower than viewport

if(GetPositionY()<-340)
{
	SetPositionY(340);
	SetOldPosition(GetPosition());
}
if(GetCollisionInfo().IsCollidedWithSprite("Bullet",true))
{
	Level_Class0 * level =(Level_Class0*)GetMyGame()->GetCurrentLevel();
	level->counter-=1;
	Destroy();
}
}

void BallClass::Destroy() 
{
	Sprite::Destroy();

}

void BallClass::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void BallClass::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void BallClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void BallClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void BallClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void BallClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void BallClass::OnStart() 
{

}

void BallClass::OnEnd() 
{

}

void BallClass::OnClone(const BallClass & other) 
{

}

 BallClass::~BallClass() 
{

}



