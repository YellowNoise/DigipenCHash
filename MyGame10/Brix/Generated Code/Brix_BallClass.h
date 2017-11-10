#ifndef _BRIX_BALLCLASS_H_ 
#define _BRIX_BALLCLASS_H_



class BallClass:public ProjectFun::Sprite
{
public:
	BallClass();
	BallClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	BallClass(const BallClass & other);
	  ~BallClass() ;

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



	ProjectFun::StateMachine<BallClass>::StateMachinePtr sm1;
	bool sm1_Play_Idle(float dt);
	bool sm1_Idle_Play(float dt);

	void sm1_Play_OnEnter(float dt);

	void sm1_Idle_OnEnter(float dt);
	void sm1_Idle_OnUpdate(float dt);



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(BallClass);
};


ProjectFun::StateMachine<BallClass>::StateMachinePtr Create_BallClass_sm1_StateMachine(BallClass *owner);

#endif
