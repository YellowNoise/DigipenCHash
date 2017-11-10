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

IMPLEMENT_OBJECT(ExplodeLevelClass);

ExplodeLevelClass::ExplodeLevelClass(void):Level()
{





}

void ExplodeLevelClass::Update(float dt) 
{
// Generated Code //

// user code//
//check if space pressed

if(GetKeyboard()->IsTriggered(Keyboard::Space))
{
	ParticleSystem *exp = GetGameObject<ParticleSystem>("particleSystem0");
	if(exp)
	{	ParticleSystem*expclone=exp->Clone();

		int posx =Random::GetNumber(-400,400);
		int posy =Random::GetNumber(-300,300);
		expclone->SetPositionX(posx);
		expclone->SetPositionY(posy);
		expclone->SetParticleLifeTime(1.0f,1.0f);

		expclone->SetLifeTime(1.0f);
		GetLayer(1)->AddGameObject(expclone);
	}
}
}

void ExplodeLevelClass::Save(Core::File & file)  const
{
	Level::Save(file);



}

void ExplodeLevelClass::Load(Core::File & file) 
{
	Level::Load(file);


}

void ExplodeLevelClass::OnStart() 
{

}

void ExplodeLevelClass::OnEnd() 
{

}

 ExplodeLevelClass::~ExplodeLevelClass() 
{

}



