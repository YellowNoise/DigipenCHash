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
if(counter==0)
{
	GetMyGame()->Exit();
}

if(GetKeyboard()->IsTriggered(Keyboard::Space))
{
	Sprite * Bullet = GetGameObject<Sprite>("Bullet");
	if(Bullet)
	{
		Sprite * Bullet_Copy= Bullet->Clone();
		if(Bullet_Copy)
		{
			Bullet_Copy->SetPositionX(-400);
			Bullet_Copy->SetPositionY(0);
			//Set direction and speed					
			Vector2D direction(1,0);
			float speed=50;
			//add velocity to sprite
			Bullet_Copy->SetVelocity(direction * speed);
			//make clone sprite visible
			Bullet_Copy->SetVisible(true);
			//add sprite to game
			GetLayer(1)->AddGameObject(Bullet_Copy);

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
// Generated Code //

// user code//
counter=1;


for(int loops =4;loops>0;loops-=1)
{
	Sprite*ball=GetGameObject<Sprite>("ball");
	
	if(ball)
	{
		Sprite * ball_copy=ball->Clone();
		if(ball_copy)
		{
			//get 2 random numbers
			int posx=Random::GetNumber(-300,300);
			int posy=Random::GetNumber(-600,300);
			
			//Set position
			ball_copy->SetPositionX(posx);
			ball_copy->SetPositionY(posy);
			//Adds sprite
			GetLayer(1)->AddGameObject(ball_copy);
			//Increases counter variable
			counter+=1;
		}
	
	}
}
}

void Level_Class0::OnEnd() 
{

}

 Level_Class0::~Level_Class0() 
{

}



