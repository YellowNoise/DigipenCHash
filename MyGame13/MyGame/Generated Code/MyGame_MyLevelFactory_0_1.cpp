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


//TileMaps Setters

//Texts Setters

//Sounds Setters
void Level0_Layer1_Sound0(MyLevelFactory *mlf)
{
	Core::String sound_File = Game::GetInstance()->GetDirectory()+"\\Resources\\Sounds\\HitSpace.wav";
	HitSpace_140_Sound = new Sound(sound_File,SoundSpatializationNone,10.0,false,0.0f);
	HitSpace_140_Sound->SetName("HitSpace");
	HitSpace_140_Sound->SetPosition(Point2D(0.0f,0.0f));
	HitSpace_140_Sound->SetVolume(1.0f);
	HitSpace_140_Sound->SetPitch(1.0f);
	HitSpace_140_Sound->SetLifeTime(0.0f);
	mlf->layer1_Layer->AddGameObject(HitSpace_140_Sound);


}


//Sprites Setters

//ParticleSystems Setters

//Joints Setters
void MyLevelFactory::Level0_Layer1_StaticCollision()
{
	layer1_Layer->ReadInformation_StaticCollision(Game::GetInstance()->GetDirectory() + "\\Resources\\Layers Collisions\\level0_layer1.txt");
}

void MyLevelFactory::Set_Level0_Layer1_Objects()
{
	 Level0_Layer1_Sound0(this);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}
	Level0_Layer1_StaticCollision();
}
