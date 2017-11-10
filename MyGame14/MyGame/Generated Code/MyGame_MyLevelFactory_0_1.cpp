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
void Level0_Layer1_Text0(MyLevelFactory *mlf)
{
	RandomText_142_Text_Class0= new Text_Class0("0",Game::GetInstance()->GetDirectory()+"\\Resources\\Fonts\\DefaultFont\\DefaultFont");
	RandomText_142_Text_Class0->SetName("RandomText");
	RandomText_142_Text_Class0->SetPosition(Point2D(0.0f,-29.0f));
	RandomText_142_Text_Class0->SetLifeTime(0.0f);
	RandomText_142_Text_Class0->SetVisible(true);
	RandomText_142_Text_Class0->SetRotationAngle(0.0f);
	RandomText_142_Text_Class0->SetScale(1.0f,1.0f);
	RandomText_142_Text_Class0->SetCenter(Point2D(0.0f,0.0f));
	RandomText_142_Text_Class0->SetOpacity(1.0f);
	RandomText_142_Text_Class0->SetZOrder(0.0f);
	mlf->layer1_Layer->AddGameObject(RandomText_142_Text_Class0);


}


//Sounds Setters

//Sprites Setters

//ParticleSystems Setters

//Joints Setters
void MyLevelFactory::Level0_Layer1_StaticCollision()
{
	layer1_Layer->ReadInformation_StaticCollision(Game::GetInstance()->GetDirectory() + "\\Resources\\Layers Collisions\\level0_layer1.txt");
}

void MyLevelFactory::Set_Level0_Layer1_Objects()
{
	 Level0_Layer1_Text0(this);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}
	Level0_Layer1_StaticCollision();
}
