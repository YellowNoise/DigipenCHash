#ifndef _MYGAME_ANGELCLASS_H_ 
#define _MYGAME_ANGELCLASS_H_



class AngelClass:public ProjectFun::Sprite
{
public:
	AngelClass();
	AngelClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	AngelClass(const AngelClass & other);
	  ~AngelClass() ;

	AngelClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const AngelClass & other) ;



	ProjectFun::StateMachine<AngelClass>::StateMachinePtr sm1;
	bool sm1_invisible_visible(float dt);
	bool sm1_visible_invisible(float dt);

	void sm1_invisible_OnEnter(float dt);

	void sm1_visible_OnEnter(float dt);
	void sm1_visible_OnUpdate(float dt);



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(AngelClass);
};


ProjectFun::StateMachine<AngelClass>::StateMachinePtr Create_AngelClass_sm1_StateMachine(AngelClass *owner);

#endif
