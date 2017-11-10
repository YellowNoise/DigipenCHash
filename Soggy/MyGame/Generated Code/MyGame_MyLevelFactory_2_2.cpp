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

//Sprites Setters

//ParticleSystems Setters

//Joints Setters
void MyLevelFactory::Level2_Layer2_StaticCollision()
{
	layer2_Layer->ReadInformation_StaticCollision(Game::GetInstance()->GetDirectory() + "\\Resources\\Layers Collisions\\level2_layer2.txt");
}

void MyLevelFactory::Set_Level2_Layer2_Objects()
{
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}
	Level2_Layer2_StaticCollision();
}
