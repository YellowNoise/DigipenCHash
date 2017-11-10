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

MyGame::MyGame(ProjectFun::LevelFactory * levelFactory, const Engine::RenderingSettings & rs, size_t startingLevel):Game(levelFactory, rs, startingLevel)
{
   SetDesiredFrameRate(60);
   LockFrameRate(true);
   SetMasterVolume(1.0f);
   /*Set Physics World Scale*/
   GetPhysicsEngine()->SetScale(15.0f);
   GetPhysicsEngine()->SetAccuracy(150.0f);
   SetTitle("MyGame");
   SetIcon(Game::GetInstance()->GetDirectory() + "\\Resources\\GameIcon\\GameIcon.ico");





}

void MyGame::Update(float dt) 
{

}

void MyGame::PostCollisionUpdate(float dt) 
{

}

bool MyGame::GetImpactProperties(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction) 
{
	if(GetCurrentLevelIndex() == 0)
		return GetImpactProperties_Level0(object1,object2,bounciness,friction);

	return true;

}

void MyGame::Save(Core::File & file)  const
{
	Game::Save(file);



}

void MyGame::Load(Core::File & file) 
{
	Game::Load(file);


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
Random::SetSeed(timeGetTime());
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
	return new MyGame(new MyLevelFactory(), rs,0);
}

