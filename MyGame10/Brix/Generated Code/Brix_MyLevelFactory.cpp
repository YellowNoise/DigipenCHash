#include "Brix_MainDeclarations.h"
#include "Brix_Declarations.h"
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
	level0_Level = new Level0Class();
	level0_Level->SetName("level0");
	level0_Level->SetClearBackBuffer(true);
	level0_Level->SetClearColor(Color(0.0f, 0.0f, 1.0f));

	CreateJukeBox0();
	level0_Level->CreateJukeBox(MenuMusic);
	layer0_Layer = new Layer(0.0f);
	layer0_Layer->SetName("level0_HUD");

	layer0_Layer->SetCollisionProperties(Math::Point2D(-400,-300),800,600);
	layer1_Layer = new Layer(0.0f);
	layer1_Layer->SetName("Texts");
	layer1_Layer->SetScale(1.0f,1.0f);
	layer1_Layer->SetRotation(0.0f);
	layer1_Layer->SetCollisionProperties(Math::Point2D(-420,-337),871,728);

	layer2_Layer = new Layer(724.264f);
	layer2_Layer->SetName("layer2");
	layer2_Layer->SetScale(1.0f,1.0f);
	layer2_Layer->SetRotation(0.0f);
	layer2_Layer->SetCollisionProperties(Math::Point2D(-400,-300),800,600);


	camera0_2_Camera = new Camera(45.0f);
	camera0_2_Camera->SetName("camera0");
	camera0_2_Camera->SetPosition(Point2D(0.0f,0.0f));
	layer2_Layer->AddGameObject(camera0_2_Camera);


	Viewport0_Viewport = new Viewport(0, 0, 800, 600);
	Viewport0_Viewport->SetClearColor(Color(1.0f ,1.0f ,1.0f));
	Viewport0_Viewport->SetCamera(camera0_2_Camera);

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
	level1_Level->SetName("WinLevel");
	level1_Level->SetClearBackBuffer(true);
	level1_Level->SetClearColor(Color(0.2f, 1.0f, 1.0f));

	layer0_Layer = new Layer(0.0f);
	layer0_Layer->SetName("WinLevel_HUD");

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


	camera0_118_Camera = new Camera(45.0f);
	camera0_118_Camera->SetName("camera0");
	camera0_118_Camera->SetPosition(Point2D(0.0f,0.0f));
	layer2_Layer->AddGameObject(camera0_118_Camera);


	Viewport0_Viewport = new Viewport(0, 0, 800, 600);
	Viewport0_Viewport->SetClearColor(Color(1.0f ,1.0f ,1.0f));
	Viewport0_Viewport->SetCamera(camera0_118_Camera);

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
	level2_Level->SetName("LoseLevel");
	level2_Level->SetClearBackBuffer(false);

	layer0_Layer = new Layer(0.0f);
	layer0_Layer->SetName("LoseLevel_HUD");

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


	camera0_120_Camera = new Camera(45.0f);
	camera0_120_Camera->SetName("camera0");
	camera0_120_Camera->SetPosition(Point2D(0.0f,0.0f));
	layer2_Layer->AddGameObject(camera0_120_Camera);


	Viewport0_Viewport = new Viewport(0, 0, 800, 600);
	Viewport0_Viewport->SetClearColor(Color(0.2509804f ,0.2509804f ,0.2509804f));
	Viewport0_Viewport->SetCamera(camera0_120_Camera);

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
	level3_Level->SetName("MainMenu");
	level3_Level->SetClearBackBuffer(true);
	level3_Level->SetClearColor(Color(0.0f, 0.8f, 0.8f));

	CreateJukeBox1();
	level3_Level->CreateJukeBox(MenuMusic);
	layer0_Layer = new Layer(0.0f);
	layer0_Layer->SetName("MainMenu_HUD");

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


	camera0_125_Camera = new Camera(45.0f);
	camera0_125_Camera->SetName("camera0");
	camera0_125_Camera->SetPosition(Point2D(0.0f,0.0f));
	layer2_Layer->AddGameObject(camera0_125_Camera);


	Viewport0_Viewport = new Viewport(0, 0, 800, 600);
	Viewport0_Viewport->SetClearColor(Color(1.0f ,1.0f ,1.0f));
	Viewport0_Viewport->SetCamera(camera0_125_Camera);

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
	level4_Level->SetName("Splashscreen");
	level4_Level->SetClearBackBuffer(true);
	level4_Level->SetClearColor(Color(0.0f, 0.0f, 0.0f));

	CreateJukeBox2();
	level4_Level->CreateJukeBox(Splash);
	layer0_Layer = new Layer(0.0f);
	layer0_Layer->SetName("Splashscreen_HUD");

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


	camera0_130_Camera = new Camera(45.0f);
	camera0_130_Camera->SetName("camera0");
	camera0_130_Camera->SetPosition(Point2D(0.0f,0.0f));
	layer2_Layer->AddGameObject(camera0_130_Camera);


	Viewport0_Viewport = new Viewport(0, 0, 800, 600);
	Viewport0_Viewport->SetClearColor(Color(0.2509804f ,0.2509804f ,0.2509804f));
	Viewport0_Viewport->SetCamera(camera0_130_Camera);

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

void MyLevelFactory::CreateJukeBox0()
{
	//MenuMusic
	vector<Core::String> music_FilesMenuMusic;
	music_FilesMenuMusic.push_back(Game::GetInstance()->GetDirectory() + "\\Resources\\JukeBoxes\\MenuMusic\\MenuMusic.wav");

	MenuMusic = new JukeBox(music_FilesMenuMusic);
	MenuMusic->SetFadeTime(0.0);
	srand((unsigned int)time(NULL));
	MenuMusic->SetShuffle(false);
	MenuMusic->SetRepeat(true);
	MenuMusic->PlayMusic();
	MenuMusic->SetMusicVolume(1.0f);

}

void MyLevelFactory::CreateJukeBox1()
{
	//MenuMusic
	vector<Core::String> music_FilesMenuMusic;
	music_FilesMenuMusic.push_back(Game::GetInstance()->GetDirectory() + "\\Resources\\JukeBoxes\\MenuMusic\\MenuMusic.wav");

	MenuMusic = new JukeBox(music_FilesMenuMusic);
	MenuMusic->SetFadeTime(0.0);
	srand((unsigned int)time(NULL));
	MenuMusic->SetShuffle(false);
	MenuMusic->SetRepeat(true);
	MenuMusic->PlayMusic();
	MenuMusic->SetMusicVolume(1.0f);

}

void MyLevelFactory::CreateJukeBox2()
{
	//Splash
	vector<Core::String> music_FilesSplash;
	music_FilesSplash.push_back(Game::GetInstance()->GetDirectory() + "\\Resources\\JukeBoxes\\Splash\\SplashMusic.wav");

	Splash = new JukeBox(music_FilesSplash);
	Splash->SetFadeTime(0.0);
	srand((unsigned int)time(NULL));
	Splash->SetShuffle(false);
	Splash->SetRepeat(true);
	Splash->PlayMusic();
	Splash->SetMusicVolume(1.0f);

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
	else if(levelName == "WinLevel")
	{
		levelIndex = 1;
		return true;
	}
	else if(levelName == "LoseLevel")
	{
		levelIndex = 2;
		return true;
	}
	else if(levelName == "MainMenu")
	{
		levelIndex = 3;
		return true;
	}
	else if(levelName == "Splashscreen")
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
	ScoreText_124_Text = 0;
	LivesText_122_Text = 0;

	//Sounds
	Bounce_136_Sound = 0;
	Brick_137_Sound = 0;

	//TileMaps

	//Sprites
	background_3_Sprite = 0;
	Brick_79_BrickClass = 0;
	Brick_80_BrickClass = 0;
	Brick_81_BrickClass = 0;
	Brick_82_BrickClass = 0;
	Brick_83_BrickClass = 0;
	Brick_84_BrickClass = 0;
	Brick_85_BrickClass = 0;
	Brick_86_BrickClass = 0;
	Brick_87_BrickClass = 0;
	Brick_88_BrickClass = 0;
	Brick_89_BrickClass = 0;
	Brick_90_BrickClass = 0;
	Brick_91_BrickClass = 0;
	Brick_92_BrickClass = 0;
	Brick_93_BrickClass = 0;
	Brick_94_BrickClass = 0;
	Brick_95_BrickClass = 0;
	Brick_96_BrickClass = 0;
	Brick_97_BrickClass = 0;
	Brick_98_BrickClass = 0;
	Brick_99_BrickClass = 0;
	Brick_100_BrickClass = 0;
	Brick_101_BrickClass = 0;
	Brick_102_BrickClass = 0;
	Brick_103_BrickClass = 0;
	Brick_104_BrickClass = 0;
	Brick_105_BrickClass = 0;
	Brick_106_BrickClass = 0;
	Brick_107_BrickClass = 0;
	Brick_108_BrickClass = 0;
	Brick_109_BrickClass = 0;
	Brick_110_BrickClass = 0;
	Brick_111_BrickClass = 0;
	Brick_112_BrickClass = 0;
	Brick_113_BrickClass = 0;
	Brick_114_BrickClass = 0;
	Brick_115_BrickClass = 0;
	Brick_116_BrickClass = 0;
	Brick_117_BrickClass = 0;
	paddle_4_PaddleClass = 0;
	ball_6_BallClass = 0;
	Brick_78_BrickClass = 0;

	//ParticleSystems
	ballparticle_132_ParticleSystem = 0;
	masterps_133_ParticleSystem = 0;

//LEVEL1

	//Texts

	//Sounds

	//TileMaps

	//Sprites
	sprite0_119_Sprite = 0;

	//ParticleSystems

//LEVEL2

	//Texts

	//Sounds

	//TileMaps

	//Sprites
	sprite0_121_Sprite = 0;

	//ParticleSystems

//LEVEL3

	//Texts

	//Sounds

	//TileMaps

	//Sprites
	BG_126_Sprite = 0;
	Start_127_ButtonClass = 0;
	Exit_128_ButtonClass = 0;
	Mouse_129_CursorClass = 0;

	//ParticleSystems

//LEVEL4

	//Texts

	//Sounds

	//TileMaps

	//Sprites
	spash_131_Sprite = 0;

	//ParticleSystems

	//Cameras
	camera0_2_Camera = 0;
	camera0_118_Camera = 0;
	camera0_120_Camera = 0;
	camera0_125_Camera = 0;
	camera0_130_Camera = 0;

	//ViewPorts
	Viewport0_Viewport = 0;

	//Layers
	layer0_Layer = 0;
	layer1_Layer = 0;
	layer2_Layer = 0;

	//JukeBoxes
	MenuMusic = 0;
	Splash = 0;

	//Levels
	level0_Level = 0;
	level1_Level = 0;
	level2_Level = 0;
	level3_Level = 0;
	level4_Level = 0;

}
void MyLevelFactory::MountObjectsLevel0()
{
	ball_6_BallClass->Mount(ballparticle_132_ParticleSystem);
	
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
