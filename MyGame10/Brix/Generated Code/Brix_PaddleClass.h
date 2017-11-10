#ifndef _BRIX_PADDLECLASS_H_ 
#define _BRIX_PADDLECLASS_H_



class PaddleClass:public ProjectFun::Sprite
{
public:
	PaddleClass();
	PaddleClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	PaddleClass(const PaddleClass & other);
	  ~PaddleClass() ;

	PaddleClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const PaddleClass & other) ;
	 void Movement() ;

	int myspeed;


protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(PaddleClass);
};



#endif
