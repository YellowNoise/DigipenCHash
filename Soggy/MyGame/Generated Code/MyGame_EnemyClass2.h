#ifndef _MYGAME_ENEMYCLASS2_H_ 
#define _MYGAME_ENEMYCLASS2_H_



class EnemyClass2:public ProjectFun::Sprite
{
public:
	EnemyClass2();
	EnemyClass2(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	EnemyClass2(const EnemyClass2 & other);
	  ~EnemyClass2() ;

	EnemyClass2 * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const EnemyClass2 & other) ;



	ProjectFun::StateMachine<EnemyClass2>::StateMachinePtr sm1;
	bool sm1_Right_Left(float dt);
	bool sm1_Left_Right(float dt);

	void sm1_Right_OnEnter(float dt);

	void sm1_Left_OnEnter(float dt);



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(EnemyClass2);
};


ProjectFun::StateMachine<EnemyClass2>::StateMachinePtr Create_EnemyClass2_sm1_StateMachine(EnemyClass2 *owner);

#endif
