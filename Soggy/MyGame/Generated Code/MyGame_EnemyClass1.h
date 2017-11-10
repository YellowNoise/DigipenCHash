#ifndef _MYGAME_ENEMYCLASS1_H_ 
#define _MYGAME_ENEMYCLASS1_H_



class EnemyClass1:public ProjectFun::Sprite
{
public:
	EnemyClass1();
	EnemyClass1(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	EnemyClass1(const EnemyClass1 & other);
	  ~EnemyClass1() ;

	EnemyClass1 * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const EnemyClass1 & other) ;



	ProjectFun::StateMachine<EnemyClass1>::StateMachinePtr sm1;
	bool sm1_Right_Left(float dt);
	bool sm1_Left_Right(float dt);

	void sm1_Right_OnEnter(float dt);

	void sm1_Left_OnEnter(float dt);



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(EnemyClass1);
};


ProjectFun::StateMachine<EnemyClass1>::StateMachinePtr Create_EnemyClass1_sm1_StateMachine(EnemyClass1 *owner);

#endif
