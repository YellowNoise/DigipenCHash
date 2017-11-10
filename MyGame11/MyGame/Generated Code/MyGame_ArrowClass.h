#ifndef _MYGAME_ARROWCLASS_H_ 
#define _MYGAME_ARROWCLASS_H_



class ArrowClass:public ProjectFun::Sprite
{
public:
	ArrowClass();
	ArrowClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	ArrowClass(const ArrowClass & other);
	  ~ArrowClass() ;

	ArrowClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const ArrowClass & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(ArrowClass);
};



#endif
