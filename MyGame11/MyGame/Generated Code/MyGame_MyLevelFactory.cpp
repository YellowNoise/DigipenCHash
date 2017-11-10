#include "MyGame_MainDeclarations.h"
#include "MyGame_Declarations.h"
#include <Core_DetectMemoryLeaks.h>

using namespace Core;
using namespace Math;
using namespace Input;
using namespace ProjectFun;
using namespace Collision2D;
using namespace Physics2D;
using namespace GUI;
using namespace std;

Level * MyLevelFactory::CreateLevel0()
{
	level0_Level = new Level();
	level0_Level->SetName("level0");
	level0_Level->SetClearBackBuffer(false);

	layer0_Layer = new Layer(0.0f);
	layer0_Layer->SetName("level0_HUD");

	layer0_Layer->SetCollisionProperties(Math::Point2D(-400,-300),800,600);
	layer1_Layer = new Layer(0.0f);
	layer1_Layer->SetName("layer1");
	layer1_Layer->SetScale(1.0f,1.0f);
	layer1_Layer->SetRotation(0.0f);
	layer1_Layer->SetCollisionProperties(Math::Point2D(-512,-512),1024,1024);

	layer2_Layer = new Layer(724.264f);
	layer2_Layer->SetName("layer2");
	layer2_Layer->SetScale(1.0f,1.0f);
	layer2_Layer->SetRotation(0.0f);
	layer2_Layer->SetCollisionProperties(Math::Point2D(-400,-300),800,600);


	camera0_130_Camera = new Camera(45.0f);
	camera0_130_Camera->SetName("camera0");
	camera0_130_Camera->SetPosition(Point2D(0.0f,0.0f));
	layer2_Layer->AddGameObject(camera0_130_Camera);


	Viewport0_Viewport = new Viewport(0, 0, 800, 600);
	Viewport0_Viewport->SetClearColor(Color(0.2509804f ,0.2509804f ,0.2509804f));
	Viewport0_Viewport->SetCamera(camera0_130_Camera);

	level0_Level->AddLayer(layer0_Layer);
	level0_Level->AddLayer(layer1_Layer);
	level0_Level->AddLayer(layer2_Layer);

	level0_Level->AddViewport(Viewport0_Viewport);

	Set_Level0_Layer0_Objects();
	Set_Level0_Layer1_Objects();
	Set_Level0_Layer2_Objects();

	MountObjectsLevel0();
	CreateLevelForms(0);
	return level0_Level;
}


size_t MyLevelFactory::GetLevelsCount()
{
	 return 1;
}

Level * MyLevelFactory::CreateLevel(size_t index)
{
	//Assets
	AddCollisionActors();

	 switch(index){
	case 0:
		return CreateLevel0();
	}
	return 0;
}
bool MyLevelFactory::GetLevelIndexFromName(const Core::String & levelName, size_t & levelIndex)
{
	if(levelName == "level0")
	{
		levelIndex = 0;
		return true;
	}
	else 	return false;
}
void MyLevelFactory::CreateLevelForms(size_t index)
{
	switch(index){
	case 0:
	{
	}
	break;
	}
}
void MyLevelFactory::Reset()
{
//LEVEL0

	//Texts

	//Sounds

	//TileMaps

	//Sprites
	sprite0_131_Sprite = 0;
	LRarrow_133_ArrowLRClass = 0;
	sprite1_132_ArrowClass = 0;

	//ParticleSystems

	//Cameras
	camera0_130_Camera = 0;

	//ViewPorts
	Viewport0_Viewport = 0;

	//Layers
	layer0_Layer = 0;
	layer1_Layer = 0;
	layer2_Layer = 0;

	//JukeBoxes

	//Levels
	level0_Level = 0;

}
void MyLevelFactory::MountObjectsLevel0()
{
	
}
