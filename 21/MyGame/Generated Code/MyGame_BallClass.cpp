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

IMPLEMENT_OBJECT(BallClass);

BallClass::BallClass():Sprite()
{ 

}
BallClass::BallClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{




	PolylinePathPtr plp0 = new PolylinePath(Game::GetInstance()->GetDirectory() + "\\Resources\\Paths\\BallClass_ballpath");
	ballpath.SetCurve(plp0);
	ballpath.SetPosition(0.0f);
	ballpath.SetDirectionAtRest(Path<PolylinePathPtr>::Normal);
	ballpath.SetSpeed(500.0f);
	ballpath.SetLoop(true);


}

BallClass::BallClass(const BallClass & other):Sprite(other)
{
	OnClone(other);

	ballpath = other.ballpath;

}

BallClass *BallClass::Clone()
{
	return new BallClass(*this);
}

void BallClass::Update(float dt) 
{
// Generated Code //

// user code//
Vector2D dir;
Point2D pos;

ballpath.GetPositionAndDirection(dt,pos,dir);

SetPositionX(pos.X + TranslationVector.X);
SetPositionY(pos.Y + TranslationVector.Y);
}

void BallClass::Destroy() 
{
	Sprite::Destroy();

}

void BallClass::Save(Core::File & file)  const
{
	Sprite::Save(file);


	// save Pathes //
	file << ballpath;



}

void BallClass::Load(Core::File & file) 
{
	Sprite::Load(file);

	// load Pathes //
	file >> ballpath;



}

void BallClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void BallClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void BallClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void BallClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void BallClass::OnStart() 
{
// Generated Code //

// user code//
Vector2D dir;
Point2D pos;
ballpath.GetPositionAndDirection(0,pos,dir);

TranslationVector.X = GetPositionX() -pos.X;

TranslationVector.Y = GetPositionY() -pos.Y;

}

void BallClass::OnEnd() 
{

}

void BallClass::OnClone(const BallClass & other) 
{

}

 BallClass::~BallClass() 
{

}



