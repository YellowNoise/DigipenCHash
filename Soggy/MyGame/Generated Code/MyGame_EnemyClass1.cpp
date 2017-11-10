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

IMPLEMENT_OBJECT(EnemyClass1);

EnemyClass1::EnemyClass1():Sprite()
{ 

	sm1 = Create_EnemyClass1_sm1_StateMachine(this);

}
EnemyClass1::EnemyClass1(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{



	sm1 = Create_EnemyClass1_sm1_StateMachine(this);



}

EnemyClass1::EnemyClass1(const EnemyClass1 & other):Sprite(other)
{
	OnClone(other);
	sm1 = other.sm1->Clone();
	sm1->SetThis(this);



}

EnemyClass1 *EnemyClass1::Clone()
{
	return new EnemyClass1(*this);
}

void EnemyClass1::Update(float dt) 
{
// Generated Code //

// user code//
sm1->Update(dt);
if(GetCollisionInfo().IsMyLineSegmentCollided(1))
{
	GetMyGame()->enemiesdestroyed++;
	Destroy();
}
else if(GetCollisionInfo().IsCollidedWithSprite("soggy",true))
{
	SoggyClass * soggy = GetGameObject<SoggyClass>("soggy");
	if(soggy)
	{
		if(soggy->blink<=0)
		{
			soggy->blink = 75;
			Sprite * life = GetGameObject<Sprite>("Life");
			if(life!= NULL)
			{	
				life->Destroy();
			}
			GetMyGame()->lives--;
		}
	}
	AngelClass * soggyangel = GetGameObject<AngelClass>("angel");
	if(soggyangel)
	{
		soggyangel->SetVisible(true);
	}
}
}

void EnemyClass1::Destroy() 
{
	Sprite::Destroy();

}

void EnemyClass1::Save(Core::File & file)  const
{
	Sprite::Save(file);


	// save StateMachines //
	file << sm1;


}

void EnemyClass1::Load(Core::File & file) 
{
	Sprite::Load(file);

	// load StateMachines //
	file >> sm1;


}

void EnemyClass1::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void EnemyClass1::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void EnemyClass1::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void EnemyClass1::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void EnemyClass1::OnStart() 
{

}

void EnemyClass1::OnEnd() 
{

}

void EnemyClass1::OnClone(const EnemyClass1 & other) 
{

}

 EnemyClass1::~EnemyClass1() 
{

}



