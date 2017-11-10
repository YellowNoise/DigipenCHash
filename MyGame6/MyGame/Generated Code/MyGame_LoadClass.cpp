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

IMPLEMENT_OBJECT(LoadClass);

LoadClass::LoadClass():Sprite()
{ 

}
LoadClass::LoadClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

LoadClass::LoadClass(const LoadClass & other):Sprite(other)
{
	OnClone(other);


}

LoadClass *LoadClass::Clone()
{
	return new LoadClass(*this);
}

void LoadClass::Update(float dt) 
{
// Generated Code //

// user code//
//Check if P pressed
if(GetKeyboard()->IsPressed(Keyboard::P))
{//play animation
	Play();
	//Make it run
	SetLoop(true);
}
//Check if S pressed
if(GetKeyboard()->IsPressed(Keyboard::S))
{//stop animation
	Stop();
}
}

void LoadClass::Destroy() 
{
	Sprite::Destroy();

}

void LoadClass::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void LoadClass::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void LoadClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void LoadClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void LoadClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void LoadClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void LoadClass::OnStart() 
{

}

void LoadClass::OnEnd() 
{

}

void LoadClass::OnClone(const LoadClass & other) 
{

}

 LoadClass::~LoadClass() 
{

}



