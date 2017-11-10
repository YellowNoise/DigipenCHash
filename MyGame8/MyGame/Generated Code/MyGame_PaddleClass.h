#ifndef _MYGAME_PADDLECLASS_H_ 
#define _MYGAME_PADDLECLASS_H_



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



	ProjectFun::StateMachine<PaddleClass>::StateMachinePtr Movement;
	bool Movement_MovingRight_MovingLeft(float dt);
	bool Movement_MovingLeft_MovingRight(float dt);

	void Movement_MovingRight_OnUpdate(float dt);

	void Movement_MovingLeft_OnEnter(float dt);
	void Movement_MovingLeft_OnUpdate(float dt);



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(PaddleClass);
};


ProjectFun::StateMachine<PaddleClass>::StateMachinePtr Create_PaddleClass_Movement_StateMachine(PaddleClass *owner);

#endif
