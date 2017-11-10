#ifndef _MYGAME_COUNTDOWNCLASS_H_ 
#define _MYGAME_COUNTDOWNCLASS_H_



class CountdownClass:public ProjectFun::Sprite
{
public:
	CountdownClass();
	CountdownClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	CountdownClass(const CountdownClass & other);
	  ~CountdownClass() ;

	CountdownClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const CountdownClass & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(CountdownClass);
};



#endif
