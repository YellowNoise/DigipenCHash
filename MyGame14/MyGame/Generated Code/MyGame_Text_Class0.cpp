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

IMPLEMENT_OBJECT(Text_Class0);

Text_Class0::Text_Class0():Text()
{ 

}
Text_Class0::Text_Class0(const Core::String & text, const Core::String & bitmapFont):Text(text, bitmapFont)
{





}

Text_Class0::Text_Class0(const Text_Class0 & other):Text(other)
{
	OnClone(other);


}

Text_Class0 *Text_Class0::Clone()
{
	return new Text_Class0(*this);
}

void Text_Class0::Update(float dt) 
{
// Generated Code //

// user code//
if(GetKeyboard()->IsTriggered(Keyboard::Space))
{
	int number = Random::GetNumber(0,100);
	SetText(String::From(number));
}
}

void Text_Class0::Destroy() 
{
	Text::Destroy();

}

void Text_Class0::Save(Core::File & file)  const
{
	Text::Save(file);



}

void Text_Class0::Load(Core::File & file) 
{
	Text::Load(file);


}

void Text_Class0::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Text::NetworkSave(file);


}

void Text_Class0::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Text::NetworkLoad(file);

}

void Text_Class0::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Text::NetworkSyncSend(file);

}

void Text_Class0::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Text::NetworkSyncReceive(file);

}

void Text_Class0::OnStart() 
{

}

void Text_Class0::OnEnd() 
{

}

void Text_Class0::OnClone(const Text_Class0 & other) 
{

}

 Text_Class0::~Text_Class0() 
{

}



