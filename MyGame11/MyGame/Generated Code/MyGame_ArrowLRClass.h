#ifndef _MYGAME_ARROWLRCLASS_H_ 
#define _MYGAME_ARROWLRCLASS_H_



class ArrowLRClass:public ProjectFun::Sprite
{
public:
	ArrowLRClass();
	ArrowLRClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	ArrowLRClass(const ArrowLRClass & other);
	  ~ArrowLRClass() ;

	ArrowLRClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const ArrowLRClass & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(ArrowLRClass);
};



#endif
