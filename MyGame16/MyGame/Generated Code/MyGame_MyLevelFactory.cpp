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
	level0_Level = new CountdownLevelClass();
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


	camera0_145_Camera = new Camera(45.0f);
	camera0_145_Camera->SetName("camera0");
	camera0_145_Camera->SetPosition(Point2D(0.0f,0.0f));
	layer2_Layer->AddGameObject(camera0_145_Camera);


	Viewport0_Viewport = new Viewport(0, 0, 800, 600);
	Viewport0_Viewport->SetClearColor(Color(0.2509804f ,0.2509804f ,0.2509804f));
	Viewport0_Viewport->SetCamera(camera0_145_Camera);

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

Level * MyLevelFactory::CreateLevel1()
{
	level1_Level = new Level();
	level1_Level->SetName("level1");
	level1_Level->SetClearBackBuffer(false);

	layer0_Layer = new Layer(0.0f);
	layer0_Layer->SetName("level1_HUD");

	layer0_Layer->SetCollisionProperties(Math::Point2D(-400,-300),800,600);
	layer1_Layer = new Layer(0.0f);
	layer1_Layer->SetName("layer1");
	layer1_Layer->SetScale(1.0f,1.0f);
	layer1_Layer->SetRotation(0.0f);
	layer1_Layer->SetCollisionProperties(Math::Point2D(-508,-518),1024,1024);

	layer2_Layer = new Layer(724.264f);
	layer2_Layer->SetName("layer2");
	layer2_Layer->SetScale(1.0f,1.0f);
	layer2_Layer->SetRotation(0.0f);
	layer2_Layer->SetCollisionProperties(Math::Point2D(-400,-300),800,600);


	camera0_148_Camera = new Camera(45.0f);
	camera0_148_Camera->SetName("camera0");
	camera0_148_Camera->SetPosition(Point2D(0.0f,0.0f));
	layer2_Layer->AddGameObject(camera0_148_Camera);


	Viewport0_Viewport = new Viewport(0, 0, 800, 600);
	Viewport0_Viewport->SetClearColor(Color(0.2509804f ,0.2509804f ,0.2509804f));
	Viewport0_Viewport->SetCamera(camera0_148_Camera);

	level1_Level->AddLayer(layer0_Layer);
	level1_Level->AddLayer(layer1_Layer);
	level1_Level->AddLayer(layer2_Layer);

	level1_Level->AddViewport(Viewport0_Viewport);

	Set_Level1_Layer0_Objects();
	Set_Level1_Layer1_Objects();
	Set_Level1_Layer2_Objects();

	MountObjectsLevel1();
	CreateLevelForms(1);
	return level1_Level;
}


size_t MyLevelFactory::GetLevelsCount()
{
	 return 2;
}

Level * MyLevelFactory::CreateLevel(size_t index)
{
	//Assets
	AddCollisionActors();

	 switch(index){
	case 0:
		return CreateLevel0();
	case 1:
		return CreateLevel1();
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
	else if(levelName == "level1")
	{
		levelIndex = 1;
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
	case 1:
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
	sprite0_146_Sprite = 0;
	sprite1_147_CountdownClass = 0;

	//ParticleSystems

//LEVEL1

	//Texts
	text0_149_Text = 0;

	//Sounds

	//TileMaps

	//Sprites
	sprite0_150_Sprite = 0;

	//ParticleSystems

	//Cameras
	camera0_145_Camera = 0;
	camera0_148_Camera = 0;

	//ViewPorts
	Viewport0_Viewport = 0;

	//Layers
	layer0_Layer = 0;
	layer1_Layer = 0;
	layer2_Layer = 0;

	//JukeBoxes

	//Levels
	level0_Level = 0;
	level1_Level = 0;

}
void MyLevelFactory::MountObjectsLevel0()
{
	
}
void MyLevelFactory::MountObjectsLevel1()
{
	
}
