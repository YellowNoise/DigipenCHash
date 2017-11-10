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
	layer1_Layer->SetCollisionProperties(Math::Point2D(-1187,-1031),2212,2055);

	layer2_Layer = new Layer(724.264f);
	layer2_Layer->SetName("layer2");
	layer2_Layer->SetScale(1.0f,1.0f);
	layer2_Layer->SetRotation(0.0f);
	layer2_Layer->SetCollisionProperties(Math::Point2D(-400,-300),800,600);


	camera0_7_Camera_Class0 = new Camera_Class0(45.0f);
	camera0_7_Camera_Class0->SetName("camera0");
	camera0_7_Camera_Class0->SetPosition(Point2D(0.0f,0.0f));
	layer2_Layer->AddGameObject(camera0_7_Camera_Class0);


	Viewport0_Viewport = new Viewport(0, 0, 800, 600);
	Viewport0_Viewport->SetClearColor(Color(0.2509804f ,0.2509804f ,0.2509804f));
	Viewport0_Viewport->SetCamera(camera0_7_Camera_Class0);

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
	level1_Level->SetName("winlevel");
	level1_Level->SetClearBackBuffer(false);

	layer0_Layer = new Layer(0.0f);
	layer0_Layer->SetName("winlevel_HUD");

	layer0_Layer->SetCollisionProperties(Math::Point2D(-400,-300),800,600);
	layer1_Layer = new Layer(0.0f);
	layer1_Layer->SetName("layer1");
	layer1_Layer->SetScale(1.0f,1.0f);
	layer1_Layer->SetRotation(0.0f);
	layer1_Layer->SetCollisionProperties(Math::Point2D(-400,-300),800,600);

	layer2_Layer = new Layer(724.264f);
	layer2_Layer->SetName("layer2");
	layer2_Layer->SetScale(1.0f,1.0f);
	layer2_Layer->SetRotation(0.0f);
	layer2_Layer->SetCollisionProperties(Math::Point2D(-400,-300),800,600);


	camera0_35_Camera = new Camera(45.0f);
	camera0_35_Camera->SetName("camera0");
	camera0_35_Camera->SetPosition(Point2D(0.0f,0.0f));
	layer2_Layer->AddGameObject(camera0_35_Camera);


	Viewport0_Viewport = new Viewport(0, 0, 800, 600);
	Viewport0_Viewport->SetClearColor(Color(0.2509804f ,0.2509804f ,0.2509804f));
	Viewport0_Viewport->SetCamera(camera0_35_Camera);

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

Level * MyLevelFactory::CreateLevel2()
{
	level2_Level = new Level();
	level2_Level->SetName("loselevel");
	level2_Level->SetClearBackBuffer(false);

	layer0_Layer = new Layer(0.0f);
	layer0_Layer->SetName("loselevel_HUD");

	layer0_Layer->SetCollisionProperties(Math::Point2D(-400,-300),800,600);
	layer1_Layer = new Layer(0.0f);
	layer1_Layer->SetName("layer1");
	layer1_Layer->SetScale(1.0f,1.0f);
	layer1_Layer->SetRotation(0.0f);
	layer1_Layer->SetCollisionProperties(Math::Point2D(-400,-300),800,600);

	layer2_Layer = new Layer(724.264f);
	layer2_Layer->SetName("layer2");
	layer2_Layer->SetScale(1.0f,1.0f);
	layer2_Layer->SetRotation(0.0f);
	layer2_Layer->SetCollisionProperties(Math::Point2D(-400,-300),800,600);


	camera0_36_Camera = new Camera(45.0f);
	camera0_36_Camera->SetName("camera0");
	camera0_36_Camera->SetPosition(Point2D(0.0f,0.0f));
	layer2_Layer->AddGameObject(camera0_36_Camera);


	Viewport0_Viewport = new Viewport(0, 0, 800, 600);
	Viewport0_Viewport->SetClearColor(Color(0.2509804f ,0.2509804f ,0.2509804f));
	Viewport0_Viewport->SetCamera(camera0_36_Camera);

	level2_Level->AddLayer(layer0_Layer);
	level2_Level->AddLayer(layer1_Layer);
	level2_Level->AddLayer(layer2_Layer);

	level2_Level->AddViewport(Viewport0_Viewport);

	Set_Level2_Layer0_Objects();
	Set_Level2_Layer1_Objects();
	Set_Level2_Layer2_Objects();

	MountObjectsLevel2();
	CreateLevelForms(2);
	return level2_Level;
}

Level * MyLevelFactory::CreateLevel3()
{
	level3_Level = new Level();
	level3_Level->SetName("menulevel");
	level3_Level->SetClearBackBuffer(false);

	layer0_Layer = new Layer(0.0f);
	layer0_Layer->SetName("menulevel_HUD");

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


	camera0_40_Camera = new Camera(45.0f);
	camera0_40_Camera->SetName("camera0");
	camera0_40_Camera->SetPosition(Point2D(0.0f,0.0f));
	layer2_Layer->AddGameObject(camera0_40_Camera);


	Viewport0_Viewport = new Viewport(0, 0, 800, 600);
	Viewport0_Viewport->SetClearColor(Color(0.2509804f ,0.2509804f ,0.2509804f));
	Viewport0_Viewport->SetCamera(camera0_40_Camera);

	level3_Level->AddLayer(layer0_Layer);
	level3_Level->AddLayer(layer1_Layer);
	level3_Level->AddLayer(layer2_Layer);

	level3_Level->AddViewport(Viewport0_Viewport);

	Set_Level3_Layer0_Objects();
	Set_Level3_Layer1_Objects();
	Set_Level3_Layer2_Objects();

	MountObjectsLevel3();
	CreateLevelForms(3);
	return level3_Level;
}

Level * MyLevelFactory::CreateLevel4()
{
	level4_Level = new Level();
	level4_Level->SetName("aboutlevel");
	level4_Level->SetClearBackBuffer(false);

	layer0_Layer = new Layer(0.0f);
	layer0_Layer->SetName("aboutlevel_HUD");

	layer0_Layer->SetCollisionProperties(Math::Point2D(-400,-300),800,600);
	layer1_Layer = new Layer(0.0f);
	layer1_Layer->SetName("layer1");
	layer1_Layer->SetScale(1.0f,1.0f);
	layer1_Layer->SetRotation(0.0f);
	layer1_Layer->SetCollisionProperties(Math::Point2D(-514,-764),1026,1276);

	layer2_Layer = new Layer(724.264f);
	layer2_Layer->SetName("layer2");
	layer2_Layer->SetScale(1.0f,1.0f);
	layer2_Layer->SetRotation(0.0f);
	layer2_Layer->SetCollisionProperties(Math::Point2D(-400,-300),800,600);


	camera0_42_Camera = new Camera(45.0f);
	camera0_42_Camera->SetName("camera0");
	camera0_42_Camera->SetPosition(Point2D(0.0f,0.0f));
	layer2_Layer->AddGameObject(camera0_42_Camera);


	Viewport0_Viewport = new Viewport(0, 0, 800, 600);
	Viewport0_Viewport->SetClearColor(Color(0.2509804f ,0.2509804f ,0.2509804f));
	Viewport0_Viewport->SetCamera(camera0_42_Camera);

	level4_Level->AddLayer(layer0_Layer);
	level4_Level->AddLayer(layer1_Layer);
	level4_Level->AddLayer(layer2_Layer);

	level4_Level->AddViewport(Viewport0_Viewport);

	Set_Level4_Layer0_Objects();
	Set_Level4_Layer1_Objects();
	Set_Level4_Layer2_Objects();

	MountObjectsLevel4();
	CreateLevelForms(4);
	return level4_Level;
}


size_t MyLevelFactory::GetLevelsCount()
{
	 return 5;
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
	case 2:
		return CreateLevel2();
	case 3:
		return CreateLevel3();
	case 4:
		return CreateLevel4();
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
	else if(levelName == "winlevel")
	{
		levelIndex = 1;
		return true;
	}
	else if(levelName == "loselevel")
	{
		levelIndex = 2;
		return true;
	}
	else if(levelName == "menulevel")
	{
		levelIndex = 3;
		return true;
	}
	else if(levelName == "aboutlevel")
	{
		levelIndex = 4;
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
	case 2:
	{
	}
	break;
	case 3:
	{
	}
	break;
	case 4:
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
	Life_31_Sprite = 0;
	Life_32_Sprite = 0;
	Life_33_Sprite = 0;
	bg_8_Sprite = 0;
	soggy_11_SoggyClass = 0;
	Enemy1_25_EnemyClass1 = 0;
	Enemy2_27_EnemyClass2 = 0;
	Enemy1_28_EnemyClass1 = 0;
	Enemy1_29_EnemyClass1 = 0;
	Enemy2_30_EnemyClass2 = 0;
	Ring_23_RingClass = 0;
	Ring_18_RingClass = 0;
	angel_34_AngelClass = 0;

	//ParticleSystems

//LEVEL1

	//Texts

	//Sounds

	//TileMaps

	//Sprites
	sprite0_37_Sprite = 0;
	cursor_52_CursorClass = 0;
	sprite1_55_Sprite = 0;

	//ParticleSystems

//LEVEL2

	//Texts

	//Sounds

	//TileMaps

	//Sprites
	sprite0_39_Sprite = 0;
	sprite0_53_CursorClass = 0;
	sprite1_54_Sprite = 0;

	//ParticleSystems

//LEVEL3

	//Texts

	//Sounds

	//TileMaps

	//Sprites
	BG_41_Sprite = 0;
	play_49_Sprite = 0;
	cursor_50_CursorClass = 0;
	about_44_Sprite = 0;
	exit_45_Sprite = 0;

	//ParticleSystems

//LEVEL4

	//Texts

	//Sounds

	//TileMaps

	//Sprites
	sprite0_43_Sprite = 0;
	sprite1_48_Sprite = 0;
	sprite0_51_CursorClass = 0;

	//ParticleSystems

	//Cameras
	camera0_7_Camera_Class0 = 0;
	camera0_35_Camera = 0;
	camera0_36_Camera = 0;
	camera0_40_Camera = 0;
	camera0_42_Camera = 0;

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
	level2_Level = 0;
	level3_Level = 0;
	level4_Level = 0;

}
void MyLevelFactory::MountObjectsLevel0()
{
	
}
void MyLevelFactory::MountObjectsLevel1()
{
	
}
void MyLevelFactory::MountObjectsLevel2()
{
	
}
void MyLevelFactory::MountObjectsLevel3()
{
	
}
void MyLevelFactory::MountObjectsLevel4()
{
	
}
