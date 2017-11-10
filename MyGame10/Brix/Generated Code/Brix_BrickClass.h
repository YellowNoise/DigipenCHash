#ifndef _BRIX_BRICKCLASS_H_ 
#define _BRIX_BRICKCLASS_H_



class BrickClass:public ProjectFun::Sprite
{
public:
	BrickClass();
	BrickClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	BrickClass(const BrickClass & other);
	  ~BrickClass() ;

	BrickClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const BrickClass & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(BrickClass);
};



#endif
