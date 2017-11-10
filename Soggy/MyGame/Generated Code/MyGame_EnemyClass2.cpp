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

IMPLEMENT_OBJECT(EnemyClass2);

EnemyClass2::EnemyClass2():Sprite()
{ 

	sm1 = Create_EnemyClass2_sm1_StateMachine(this);

}
EnemyClass2::EnemyClass2(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{



	sm1 = Create_EnemyClass2_sm1_StateMachine(this);



}

EnemyClass2::EnemyClass2(const EnemyClass2 & other):Sprite(other)
{
	OnClone(other);
	sm1 = other.sm1->Clone();
	sm1->SetThis(this);



}

EnemyClass2 *EnemyClass2::Clone()
{
	return new EnemyClass2(*this);
}

void EnemyClass2::Update(float dt) 
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

void EnemyClass2::Destroy() 
{
	Sprite::Destroy();

}

void EnemyClass2::Save(Core::File & file)  const
{
	Sprite::Save(file);


	// save StateMachines //
	file << sm1;


}

void EnemyClass2::Load(Core::File & file) 
{
	Sprite::Load(file);

	// load StateMachines //
	file >> sm1;


}

void EnemyClass2::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void EnemyClass2::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void EnemyClass2::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void EnemyClass2::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void EnemyClass2::OnStart() 
{

}

void EnemyClass2::OnEnd() 
{

}

void EnemyClass2::OnClone(const EnemyClass2 & other) 
{

}

 EnemyClass2::~EnemyClass2() 
{

}



