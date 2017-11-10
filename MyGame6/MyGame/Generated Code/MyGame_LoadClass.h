#ifndef _MYGAME_LOADCLASS_H_ 
#define _MYGAME_LOADCLASS_H_



class LoadClass:public ProjectFun::Sprite
{
public:
	LoadClass();
	LoadClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	LoadClass(const LoadClass & other);
	  ~LoadClass() ;

	LoadClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const LoadClass & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(LoadClass);
};



#endif
