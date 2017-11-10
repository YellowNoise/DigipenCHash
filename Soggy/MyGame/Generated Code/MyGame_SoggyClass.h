#ifndef _MYGAME_SOGGYCLASS_H_ 
#define _MYGAME_SOGGYCLASS_H_



class SoggyClass:public ProjectFun::Sprite
{
public:
	SoggyClass();
	SoggyClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	SoggyClass(const SoggyClass & other);
	  ~SoggyClass() ;

	SoggyClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const SoggyClass & other) ;
	 void inputfn() ;
	 void ApplyMovement() ;
	 void ClampSpeed() ;
	 void jump() ;
	 void applygrav() ;

	int moveforce;
	int xmove;
	int ymove;
	int jumpforce;
	int gravforce;
	int jumpcounter;
	int jumpcountermax;
	bool isjumping;
	bool intheair;
	bool ismoving;
	bool ismovingleft;
	int blink;


	ProjectFun::StateMachine<SoggyClass>::StateMachinePtr PlatformSM;
	bool PlatformSM_OnGround_inair(float dt);
	bool PlatformSM_OnGround_inair_1(float dt);
	bool PlatformSM_inair_OnGround(float dt);

	void PlatformSM_OnGround_OnEnter(float dt);
	void PlatformSM_OnGround_OnUpdate(float dt);

	void PlatformSM_inair_OnEnter(float dt);
	void PlatformSM_inair_OnUpdate(float dt);



	ProjectFun::StateMachine<SoggyClass>::StateMachinePtr animationsm;
	bool animationsm_Idle_Walk(float dt);
	bool animationsm_Idle_Win(float dt);
	bool animationsm_Idle_Jump(float dt);
	bool animationsm_Walk_Idle(float dt);
	bool animationsm_Walk_Jump(float dt);
	bool animationsm_Jump_Idle(float dt);

	void animationsm_Idle_OnEnter(float dt);

	void animationsm_Win_OnEnter(float dt);
	void animationsm_Win_OnUpdate(float dt);

	void animationsm_Walk_OnEnter(float dt);

	void animationsm_Jump_OnEnter(float dt);



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(SoggyClass);
};


ProjectFun::StateMachine<SoggyClass>::StateMachinePtr Create_SoggyClass_PlatformSM_StateMachine(SoggyClass *owner);
ProjectFun::StateMachine<SoggyClass>::StateMachinePtr Create_SoggyClass_animationsm_StateMachine(SoggyClass *owner);

#endif
