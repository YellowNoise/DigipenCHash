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
//Check if Left Pressed
if(GetKeyboard()-> IsPressed(Keyboard::Left) || 
GetKeyboard()-> IsPressed(Keyboard::A)  )
{//Move Left 5 PX
	SetPositionX(GetPositionX()-5);
	//Check if Over left boundary
	if (GetPositionX()<-405)
	{
		//Move to right side	
		SetPositionX(400);
	}
}
//Check if Right Pressed
if(GetKeyboard()-> IsPressed(Keyboard::Right) || 
GetKeyboard()-> IsPressed(Keyboard::D) )
{//Move Right 5 px
	SetPositionX(GetPositionX()+5);
	//Check if Over right boundary
	if (GetPositionX()>405)
	{
		//Move to left side	
		SetPositionX(-400);
	}
}
//Check if Up Pressed
if(GetKeyboard()-> IsPressed(Keyboard::Up) || 
GetKeyboard()-> IsPressed(Keyboard::W) )
{//Move Up 5 px
	SetPositionY(GetPositionY()+5);
	//Check if Over Top boundary
	if (GetPositionY()>305)
	{
		//Move to bottom side	
		SetPositionY(-300);
	}
}
//Check if Down Pressed
if(GetKeyboard()-> IsPressed(Keyboard::Down) || 
GetKeyboard()-> IsPressed(Keyboard::S) )
{//Move Down 5 px
	SetPositionY(GetPositionY()-5);
	//Check if Over Bottom boundary
	if (GetPositionY()<-305)
	{
		//Move to Top side	
		SetPositionY(300);
	}
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



