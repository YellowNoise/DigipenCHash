#ifndef _MYGAME_RINGCLASS_H_ 
#define _MYGAME_RINGCLASS_H_



class RingClass:public ProjectFun::Sprite
{
public:
	RingClass();
	RingClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	RingClass(const RingClass & other);
	  ~RingClass() ;

	RingClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const RingClass & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(RingClass);
};



#endif
