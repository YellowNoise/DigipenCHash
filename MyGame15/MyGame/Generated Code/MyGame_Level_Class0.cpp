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

IMPLEMENT_OBJECT(Level_Class0);

Level_Class0::Level_Class0(void):Level()
{





}

void Level_Class0::Update(float dt) 
{
// Generated Code //

// user code//
if(GetKeyboard()->IsTriggered(Keyboard::Space))
{
	Sprite * ball= GetGameObject<Sprite>("ball");
	if(ball)
	{	
		Sprite * ball_copy = ball->Clone();
	

	
		if(ball_copy)
		{
			int Random_PositionX= Random::GetNumber(-400,400);
			int Random_PositionY= Random::GetNumber(-300,300);
			ball_copy->SetPositionX(Random_PositionX);
			ball_copy->SetPositionY(Random_PositionY);

			GetLayer(1)->AddGameObject(ball_copy);
		}	
	}
}	
}

void Level_Class0::Save(Core::File & file)  const
{
	Level::Save(file);



}

void Level_Class0::Load(Core::File & file) 
{
	Level::Load(file);


}

void Level_Class0::OnStart() 
{

}

void Level_Class0::OnEnd() 
{

}

 Level_Class0::~Level_Class0() 
{

}



