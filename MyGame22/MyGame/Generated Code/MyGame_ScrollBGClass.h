#ifndef _MYGAME_SCROLLBGCLASS_H_ 
#define _MYGAME_SCROLLBGCLASS_H_



class ScrollBGClass:public ProjectFun::Sprite
{
public:
	ScrollBGClass();
	ScrollBGClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	ScrollBGClass(const ScrollBGClass & other);
	  ~ScrollBGClass() ;

	ScrollBGClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const ScrollBGClass & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(ScrollBGClass);
};



#endif
