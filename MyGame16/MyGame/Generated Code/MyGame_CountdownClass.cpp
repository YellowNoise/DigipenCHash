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

IMPLEMENT_OBJECT(CountdownClass);

CountdownClass::CountdownClass():Sprite()
{ 

}
CountdownClass::CountdownClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

CountdownClass::CountdownClass(const CountdownClass & other):Sprite(other)
{
	OnClone(other);


}

CountdownClass *CountdownClass::Clone()
{
	return new CountdownClass(*this);
}

void CountdownClass::Update(float dt) 
{
// Generated Code //

// user code//
if(IsEndOfAnimation())
{
	Destroy();
}
}

void CountdownClass::Destroy() 
{
	Sprite::Destroy();

}

void CountdownClass::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void CountdownClass::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void CountdownClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void CountdownClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void CountdownClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void CountdownClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void CountdownClass::OnStart() 
{

}

void CountdownClass::OnEnd() 
{

}

void CountdownClass::OnClone(const CountdownClass & other) 
{

}

 CountdownClass::~CountdownClass() 
{

}



