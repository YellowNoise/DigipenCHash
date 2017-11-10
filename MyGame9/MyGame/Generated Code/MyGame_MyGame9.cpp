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

MyGame9::MyGame9(ProjectFun::LevelFactory * levelFactory, const Engine::RenderingSettings & rs, size_t startingLevel):Game(levelFactory, rs, startingLevel)
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

void MyGame9::Update(float dt) 
{
// Generated Code //

// user code//
// Check if F is triggered
if(GetKeyboard()->IsPressed(Keyboard::F))
{
//	Toggle between fullscreen and window
	AutoToggleFullScreen();
}
// Check if F is triggered
if(GetKeyboard()->IsPressed(Keyboard::Escape))
{
//	Toggle between fullscreen and window
	Exit();
}
}

void MyGame9::PostCollisionUpdate(float dt) 
{

}

bool MyGame9::GetImpactProperties(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction) 
{
	if(GetCurrentLevelIndex() == 0)
		return GetImpactProperties_Level0(object1,object2,bounciness,friction);

	return true;

}

void MyGame9::Save(Core::File & file)  const
{
	Game::Save(file);



}

void MyGame9::Load(Core::File & file) 
{
	Game::Load(file);


}

void MyGame9::JoinedNetworkGame() 
{

}

void MyGame9::HostedNetworkGame() 
{

}

void MyGame9::SessionEnded() 
{

}

void MyGame9::PlayerJoined(ProjectFun::FunPlayer* Player) 
{

}

void MyGame9::PlayerRemoved(ProjectFun::FunPlayer* Player) 
{

}

void MyGame9::ReceivedTextMessage(ProjectFun::FunPlayer * Sender, const Core::String & TextReceived) 
{

}

void MyGame9::ReceivedDataMessage(ProjectFun::FunPlayer * Sender, unsigned int ID, unsigned int DataSize, void * Data) 
{

}

bool MyGame9::ConnectionRequest(ProjectFun::FunPlayer * client) 
{
return true;
}

void MyGame9::ConnectionResponse(ProjectFun::Fun_Connection_Response serverResponse) 
{

}

void MyGame9::OnStart() 
{

}

void MyGame9::OnEnd() 
{

}

void MyGame9::Save(const Core::String & fileName)
{
	Game::Save(fileName);
}
void MyGame9::Load(const Core::String & fileName)
{
	Game::Load(fileName);
}
 MyGame9::~MyGame9() 
{

}

bool MyGame9:: GetImpactProperties_USER_CODE(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction)
{

return true;
}

bool MyGame9:: GetImpactProperties_Level0(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction)
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

MyGame9 * GetMyGame()
{
    Game * game = Game::GetInstance();
	return (MyGame9 *)GetInternalPointer(game);
}
Engine::ApplicationPtr CreateApplication(const char * commandLine)
{
	Engine::RenderingSettings rs(800, 600);
	rs.Antialiasing = 0;
	rs.FullScreen = false;
	rs.VSync = true;
	return new MyGame9(new MyLevelFactory(), rs,0);
}

