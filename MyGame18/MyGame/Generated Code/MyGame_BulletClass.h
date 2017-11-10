#ifndef _MYGAME_BULLETCLASS_H_ 
#define _MYGAME_BULLETCLASS_H_



class BulletClass:public ProjectFun::Sprite
{
public:
	BulletClass();
	BulletClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	BulletClass(const BulletClass & other);
	  ~BulletClass() ;

	BulletClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const BulletClass & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(BulletClass);
};



#endif
