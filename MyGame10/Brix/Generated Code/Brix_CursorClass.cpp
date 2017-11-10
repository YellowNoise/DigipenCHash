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

IMPLEMENT_OBJECT(CursorClass);

CursorClass::CursorClass():Sprite()
{ 

}
CursorClass::CursorClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations):Sprite(animations)
{





}

CursorClass::CursorClass(const CursorClass & other):Sprite(other)
{
	OnClone(other);


}

CursorClass *CursorClass::Clone()
{
	return new CursorClass(*this);
}

void CursorClass::Update(float dt) 
{
// Generated Code //

// user code//
GetHUD()->ShowCursor(false);

Viewport* viewport =GetMyGame()->GetCurrentLevel()->GetViewport(0);
Point2D mousePosition=GetMouse()->GetPosition();
float width = viewport->GetWidth();
float height = viewport->GetHeight();
Point2D halfsize(width/2,height/2);

SetPosition(mousePosition - halfsize);
}

void CursorClass::Destroy() 
{
	Sprite::Destroy();

}

void CursorClass::Save(Core::File & file)  const
{
	Sprite::Save(file);



}

void CursorClass::Load(Core::File & file) 
{
	Sprite::Load(file);


}

void CursorClass::NetworkSave(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSave(file);


}

void CursorClass::NetworkLoad(ProjectFun::NetworkFile &file) 
{
	Sprite::NetworkLoad(file);

}

void CursorClass::NetworkSyncSend(ProjectFun::NetworkFile &file)  const
{
	Sprite::NetworkSyncSend(file);

}

void CursorClass::NetworkSyncReceive(ProjectFun::NetworkFile & file) 
{
	Sprite::NetworkSyncReceive(file);

}

void CursorClass::OnStart() 
{

}

void CursorClass::OnEnd() 
{

}

void CursorClass::OnClone(const CursorClass & other) 
{

}

 CursorClass::~CursorClass() 
{

}



