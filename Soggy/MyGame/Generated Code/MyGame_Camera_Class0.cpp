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

IMPLEMENT_OBJECT(Camera_Class0);

Camera_Class0::Camera_Class0():Camera()
{ 

}
Camera_Class0::Camera_Class0(float zoom):Camera(zoom)
{





}

Camera_Class0::Camera_Class0(const Camera_Class0 & other):Camera(other)
{
	OnClone(other);


}

Camera_Class0 *Camera_Class0::Clone()
{
	return new Camera_Class0(*this);
}

void Camera_Class0::Update(float dt) 
{
// Generated Code //

// user code//
SoggyClass * soggy = GetGameObject<SoggyClass>("soggy");

if(soggy)
{
	SetPosition(soggy->GetPositionX(), soggy->GetPositionY());
}

if(GetPositionX() >624)
	SetPositionX(624);
if(GetPositionX() <-624)
	SetPositionX(-624);
if(GetPositionY() >50)
	SetPositionY(50);
if(GetPositionY() <-50)
	SetPositionY(-50);
}

void Camera_Class0::Destroy() 
{
	Camera::Destroy();

}

void Camera_Class0::Save(Core::File & file)  const
{
	Camera::Save(file);



}

void Camera_Class0::Load(Core::File & file) 
{
	Camera::Load(file);


}

void Camera_Class0::OnStart() 
{

}

void Camera_Class0::OnEnd() 
{

}

void Camera_Class0::OnClone(const Camera_Class0 & other) 
{

}

 Camera_Class0::~Camera_Class0() 
{

}



