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

IMPLEMENT_OBJECT(BallClass);

BallClass::BallClass():Sprite()
{ 

	sm1 = Create_BallClass_sm1_StateMachine(this);

}
BallClass::BallClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{



	sm1 = Create_BallClass_sm1_StateMachine(this);



}

BallClass::BallClass(const BallClass & other):Sprite(other)
{
	OnClone(other);
	sm1 = other.sm1->Clone();
	sm1->SetThis(this);



}

BallClass *BallClass::Clone()
{
	return new BallClass(*this);
}

void BallClass::Update(float dt) 
{
// Generated Code //

// user code//
sm1->Update(dt);

if(GetCollisionInfo().IsCollidedWithLineSegment(0)||
   GetCollisionInfo().IsCollidedWithSprite("paddle",true))
{
	Sound * bounce = GetGameObject<Sound>("Bounce");
	if(bounce)
		bounce->Play(true);
}
}

void BallClass::Destroy() 
{
	Sprite::Destroy();

}

void BallClass::Save(Core::File & file)  const
{
	Sprite::Save(file);


	// save StateMachines //
	file << sm1;


}

void BallClass::Load(Core::File & file) 
{
	Sprite::Load(file);

	// load StateMachines //
	file >> sm1;


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



