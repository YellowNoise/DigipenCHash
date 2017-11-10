#ifndef _BRIX_BUTTONCLASS_H_ 
#define _BRIX_BUTTONCLASS_H_



class ButtonClass:public ProjectFun::Sprite
{
public:
	ButtonClass();
	ButtonClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	ButtonClass(const ButtonClass & other);
	  ~ButtonClass() ;

	ButtonClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const ButtonClass & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(ButtonClass);
};



#endif
