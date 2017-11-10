#ifndef _MYGAME_BALLCLASS_H_ 
#define _MYGAME_BALLCLASS_H_



class BallClass:public ProjectFun::Sprite
{
public:
	BallClass();
	BallClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	BallClass(const BallClass & other);
	  ~BallClass() ;

	ProjectFun::Path<ProjectFun::PolylinePathPtr>ballpath;
	BallClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const BallClass & other) ;

	Math::Vector2D TranslationVector;


protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(BallClass);
};



#endif
