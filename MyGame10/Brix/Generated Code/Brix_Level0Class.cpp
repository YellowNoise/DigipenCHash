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

IMPLEMENT_OBJECT(Level0Class);

Level0Class::Level0Class(void):Level()
{





}

void Level0Class::Update(float dt) 
{
// Generated Code //

// user code//
Text* LivesText = GetGameObject<Text>("LivesText");
if(LivesText)
	LivesText->SetText(String::From((int)GetMyGame()->livesvalue));
Text* ScoreText = GetGameObject<Text>("ScoreText");
if(ScoreText)
	ScoreText->SetText("SCORE: " + String::From((int)GetMyGame()->scorevalue));
}

void Level0Class::Save(Core::File & file)  const
{
	Level::Save(file);



}

void Level0Class::Load(Core::File & file) 
{
	Level::Load(file);


}

void Level0Class::OnStart() 
{

}

void Level0Class::OnEnd() 
{

}

 Level0Class::~Level0Class() 
{

}



