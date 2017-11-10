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

IMPLEMENT_OBJECT(EnemyClass);

EnemyClass::EnemyClass():Sprite()
{ 

}
EnemyClass::EnemyClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

EnemyClass::EnemyClass(const EnemyClass & other):Sprite(other)
{
	OnClone(other);


}

EnemyClass *EnemyClass::Clone()
{
	return new EnemyClass(*this);
}

void EnemyClass::Update(float dt) 
{
// Generated Code //

// user code//
PlayerClass * player = GetGameObject<PlayerClass>("player");

if(player)
{
	Point2D playerposition = player ->GetPosition();
	Point2D enemyposition = GetPosition();
	float distance = playerposition.Distance(enemyposition);
	if(distance<150)
	
	{
		SetCurrentFrameIndex(1);
		//create vector
		Vector2D direction;
		direction.X=playerposition.X - enemyposition.X;
		direction.Y=playerposition.Y-enemyposition.Y;
		//normailze vector
		direction.SetNormalize();

		SetPositionX( GetPositionX()+direction.X*2);
		SetPositionY( GetPositionY()+direction.Y*2);
	}
	else
	{	
		SetCurrentFrameIndex(0);
	}
}
}

void EnemyClass::Destroy() 
{
	Sprite::Destroy();

}

void EnemyClass::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void EnemyClass::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void EnemyClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void EnemyClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void EnemyClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void EnemyClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void EnemyClass::OnStart() 
{

}

void EnemyClass::OnEnd() 
{

}

void EnemyClass::OnClone(const EnemyClass & other) 
{

}

 EnemyClass::~EnemyClass() 
{

}



