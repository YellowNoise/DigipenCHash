#ifndef _MYGAME_CAMERA_CLASS0_H_ 
#define _MYGAME_CAMERA_CLASS0_H_



class Camera_Class0:public ProjectFun::Camera
{
public:
	Camera_Class0();
	Camera_Class0(float zoom);
	Camera_Class0(const Camera_Class0 & other);
	  ~Camera_Class0() ;

	Camera_Class0 * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const Camera_Class0 & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(Camera_Class0);
};



#endif
