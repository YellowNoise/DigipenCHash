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

MyGame::MyGame(ProjectFun::LevelFactory * levelFactory, const Engine::RenderingSettings & rs, size_t startingLevel):Game(levelFactory, rs, startingLevel)
{
   SetDesiredFrameRate(60);
   LockFrameRate(true);
   SetMasterVolume(1.0f);
   /*Set Physics World Scale*/
   GetPhysicsEngine()->SetScale(15.0f);
   GetPhysicsEngine()->SetAccuracy(150.0f);
   SetTitle("Brix");
   SetIcon(Game::GetInstance()->GetDirectory() + "\\Resources\\GameIcon\\GameIcon.ico");



	sm1 = Create_MyGame_sm1_StateMachine(this);

	stateMachine_0 = Create_MyGame_stateMachine_0_StateMachine(this);



}

void MyGame::Update(float dt) 
{
// Generated Code //

// user code//
sm1->Update(dt);
// Check if F is triggered
if(GetKeyboard()->IsPressed(Keyboard::F))
{
//	Toggle between fullscreen and window
	AutoToggleFullScreen();
}

}

void MyGame::PostCollisionUpdate(float dt) 
{

}

bool MyGame::GetImpactProperties(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction) 
{
	if(GetCurrentLevelIndex() == 0)
		return GetImpactProperties_Level0(object1,object2,bounciness,friction);
	if(GetCurrentLevelIndex() == 1)
		return GetImpactProperties_Level1(object1,object2,bounciness,friction);
	if(GetCurrentLevelIndex() == 2)
		return GetImpactProperties_Level2(object1,object2,bounciness,friction);
	if(GetCurrentLevelIndex() == 3)
		return GetImpactProperties_Level3(object1,object2,bounciness,friction);
	if(GetCurrentLevelIndex() == 4)
		return GetImpactProperties_Level4(object1,object2,bounciness,friction);

	return true;

}

void MyGame::Save(Core::File & file)  const
{
	Game::Save(file);


	// save StateMachines //
	file << sm1;
	file << stateMachine_0;


}

void MyGame::Load(Core::File & file) 
{
	Game::Load(file);

	// load StateMachines //
	file >> sm1;
	file >> stateMachine_0;


}

void MyGame::JoinedNetworkGame() 
{

}

void MyGame::HostedNetworkGame() 
{

}

void MyGame::SessionEnded() 
{

}

void MyGame::PlayerJoined(ProjectFun::FunPlayer* Player) 
{

}

void MyGame::PlayerRemoved(ProjectFun::FunPlayer* Player) 
{

}

void MyGame::ReceivedTextMessage(ProjectFun::FunPlayer * Sender, const Core::String & TextReceived) 
{

}

void MyGame::ReceivedDataMessage(ProjectFun::FunPlayer * Sender, unsigned int ID, unsigned int DataSize, void * Data) 
{

}

bool MyGame::ConnectionRequest(ProjectFun::FunPlayer * client) 
{
return true;
}

void MyGame::ConnectionResponse(ProjectFun::Fun_Connection_Response serverResponse) 
{

}

void MyGame::OnStart() 
{
// Generated Code //

// user code//
livesvalue=3;
scorevalue=0;
}

void MyGame::OnEnd() 
{

}

void MyGame::Save(const Core::String & fileName)
{
	Game::Save(fileName);
}
void MyGame::Load(const Core::String & fileName)
{
	Game::Load(fileName);
}
 MyGame::~MyGame() 
{

}

bool MyGame:: GetImpactProperties_USER_CODE(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction)
{

return true;
}

bool MyGame:: GetImpactProperties_Level0(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction)
{
	if(object2 != NULL)//object1 vs object2
	{
		//Frictions
		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;

		if((object1->GetName() == "ball") && (object2->GetName() == "paddle"))
			friction = 0.0f;
		else if((object1->GetName() == "paddle") && (object2->GetName() == "ball"))
			friction = 0.0f;

		if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			friction = 0.0f;
		else if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			friction = 0.0f;

	
		//Bounciness
		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;

		if((object1->GetName() == "paddle") && (object2->GetName() == "ball"))
			bounciness = 1.0f;
		else if((object1->GetName() == "ball") && (object2->GetName() == "paddle"))
			bounciness = 1.0f;

		if((object1->GetName() == "ball") && (object2->GetName() == "Brick"))
			bounciness = 1.0f;
		else if((object1->GetName() == "Brick") && (object2->GetName() == "ball"))
			bounciness = 1.0f;

	
		//CollisionAffections
		if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "paddle") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "paddle")){
			m_OneWayCollision = true;
			return true;
		}	if((object1->GetName() == "Brick") && (object2->GetName() == "ball")){
			return false;
		}
 else if((object1->GetName() == "ball") && (object2->GetName() == "Brick")){
			m_OneWayCollision = true;
			return true;
		}
	}
	else//object1 vs Background
	{
		//Frictions
		if(object1->GetName() == "ball")
			friction = 0.0f;
	
		//Bounciness
		if(object1->GetName() == "paddle")
			bounciness = 0.0f;
		if(object1->GetName() == "ball")
			bounciness = 1.0f;
	
		//CollisionAffections
	
	}
	return GetImpactProperties_USER_CODE(object1,object2,bounciness,friction);

	return true;
}

bool MyGame:: GetImpactProperties_Level1(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction)
{
	if(object2 != NULL)//object1 vs object2
	{
		//Frictions
	
		//Bounciness
	
		//CollisionAffections
	
	}
	else//object1 vs Background
	{
		//Frictions
	
		//Bounciness
	
		//CollisionAffections
	
	}
	return GetImpactProperties_USER_CODE(object1,object2,bounciness,friction);

	return true;
}

bool MyGame:: GetImpactProperties_Level2(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction)
{
	if(object2 != NULL)//object1 vs object2
	{
		//Frictions
	
		//Bounciness
	
		//CollisionAffections
	
	}
	else//object1 vs Background
	{
		//Frictions
	
		//Bounciness
	
		//CollisionAffections
	
	}
	return GetImpactProperties_USER_CODE(object1,object2,bounciness,friction);

	return true;
}

bool MyGame:: GetImpactProperties_Level3(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction)
{
	if(object2 != NULL)//object1 vs object2
	{
		//Frictions
	
		//Bounciness
	
		//CollisionAffections
	
	}
	else//object1 vs Background
	{
		//Frictions
	
		//Bounciness
	
		//CollisionAffections
	
	}
	return GetImpactProperties_USER_CODE(object1,object2,bounciness,friction);

	return true;
}

bool MyGame:: GetImpactProperties_Level4(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction)
{
	if(object2 != NULL)//object1 vs object2
	{
		//Frictions
	
		//Bounciness
	
		//CollisionAffections
	
	}
	else//object1 vs Background
	{
		//Frictions
	
		//Bounciness
	
		//CollisionAffections
	
	}
	return GetImpactProperties_USER_CODE(object1,object2,bounciness,friction);

	return true;
}

MyGame * GetMyGame()
{
    Game * game = Game::GetInstance();
	return (MyGame *)GetInternalPointer(game);
}
Engine::ApplicationPtr CreateApplication(const char * commandLine)
{
	Engine::RenderingSettings rs(800, 600);
	rs.Antialiasing = 0;
	rs.FullScreen = false;
	rs.VSync = true;
	return new MyGame(new MyLevelFactory(), rs,4);
}

