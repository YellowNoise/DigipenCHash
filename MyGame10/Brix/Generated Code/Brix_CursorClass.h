#ifndef _BRIX_CURSORCLASS_H_ 
#define _BRIX_CURSORCLASS_H_



class CursorClass:public ProjectFun::Sprite
{
public:
	CursorClass();
	CursorClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	CursorClass(const CursorClass & other);
	  ~CursorClass() ;

	CursorClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const CursorClass & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(CursorClass);
};



#endif
