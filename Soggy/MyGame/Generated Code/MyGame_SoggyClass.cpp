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

IMPLEMENT_OBJECT(SoggyClass);

SoggyClass::SoggyClass():Sprite()
{ 

	PlatformSM = Create_SoggyClass_PlatformSM_StateMachine(this);

	animationsm = Create_SoggyClass_animationsm_StateMachine(this);

}
SoggyClass::SoggyClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{



	PlatformSM = Create_SoggyClass_PlatformSM_StateMachine(this);

	animationsm = Create_SoggyClass_animationsm_StateMachine(this);



}

SoggyClass::SoggyClass(const SoggyClass & other):Sprite(other)
{
	OnClone(other);
	PlatformSM = other.PlatformSM->Clone();
	PlatformSM->SetThis(this);

	animationsm = other.animationsm->Clone();
	animationsm->SetThis(this);



}

SoggyClass *SoggyClass::Clone()
{
	return new SoggyClass(*this);
}

void SoggyClass::Update(float dt) 
{
// Generated Code //

// user code//
xmove = 0;
ymove = 0;
ismoving=false;
isjumping=false;
inputfn();
PlatformSM->Update(dt);
ClampSpeed();
animationsm->Update(dt);
SetFlipHorizontal(ismovingleft);

if(blink>0)
{
	if(blink%3==0)
		SetVisible(!GetVisible());
	blink--;
}
else
{

	SetVisible(true);
}
}

void SoggyClass::Destroy() 
{
	Sprite::Destroy();

}

void SoggyClass::Save(Core::File & file)  const
{
	Sprite::Save(file);


	// save StateMachines //
	file << PlatformSM;
	file << animationsm;


}

void SoggyClass::Load(Core::File & file) 
{
	Sprite::Load(file);

	// load StateMachines //
	file >> PlatformSM;
	file >> animationsm;


}

void SoggyClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void SoggyClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void SoggyClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void SoggyClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void SoggyClass::OnStart() 
{
// Generated Code //

// user code//
moveforce = 300;
xmove = 0;
ymove = 0;
jumpforce = 2750;
gravforce = 100;
jumpcounter = 0;
jumpcountermax = 1;
isjumping = false;
intheair = false;
ismoving = false;
ismovingleft = false;
blink = 0;

}

void SoggyClass::OnEnd() 
{

}

void SoggyClass::OnClone(const SoggyClass & other) 
{

}

void SoggyClass::inputfn() 
{
// Generated Code //

// user code//
if(GetKeyboard()->IsPressed(Keyboard::Left))
{
	xmove -= moveforce;
	ismoving = true;
	ismovingleft = true;
}
if(GetKeyboard()->IsPressed(Keyboard::Right))
{
	xmove += moveforce;
	ismoving = true;
	ismovingleft = false;
}
if(GetKeyboard()->IsTriggered(Keyboard::Up))
{
	jump();
}
}

void SoggyClass::ApplyMovement() 
{
// Generated Code //

// user code//
AddForce ( new ConstantForce( Vector2D( xmove, ymove),1.0f/85));
}

void SoggyClass::ClampSpeed() 
{
// Generated Code //

// user code//
Vector2D vel;
GetVelocity(vel);
vel.X /= 1.41f;
SetVelocity(vel);
}

void SoggyClass::jump() 
{
// Generated Code //

// user code//
if(!intheair || jumpcounter < jumpcountermax)
{
	ymove = jumpforce + gravforce;
	isjumping = true;
	jumpcounter++;
}
}

void SoggyClass::applygrav() 
{
// Generated Code //

// user code//
RemoveAllForces();
GravityForce * gForce = new GravityForce( Vector2D(0,-1),gravforce);
AddForce(gForce);
}

 SoggyClass::~SoggyClass() 
{

}



