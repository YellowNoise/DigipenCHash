#ifndef _BRIX_MYGAME_H_ 
#define _BRIX_MYGAME_H_



class MyGame:public ProjectFun::Game
{
public:
	MyGame(ProjectFun::LevelFactory * levelFactory, const Engine::RenderingSettings & rs, size_t startingLevel);
	  ~MyGame() ;

	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void JoinedNetworkGame() ;
	 void HostedNetworkGame() ;
	 void SessionEnded() ;
	 void PlayerJoined(ProjectFun::FunPlayer* Player) ;
	 void PlayerRemoved(ProjectFun::FunPlayer* Player) ;
	 void ReceivedTextMessage(ProjectFun::FunPlayer * Sender, const Core::String & TextReceived) ;
	 void ReceivedDataMessage(ProjectFun::FunPlayer * Sender, unsigned int ID, unsigned int DataSize, void * Data) ;
	 bool ConnectionRequest(ProjectFun::FunPlayer * client) ;
	 void ConnectionResponse(ProjectFun::Fun_Connection_Response serverResponse) ;
	 void OnStart() ;
	 void OnEnd() ;

	void Save(const Core::String & fileName);
void Load(const Core::String & fileName);
	int livesvalue;
	int scorevalue;


	ProjectFun::StateMachine<MyGame>::StateMachinePtr sm1;
	bool sm1_Splash_MainMenu(float dt);
	bool sm1_WinLevel_MainMenu(float dt);
	bool sm1_LoseLevel_MainMenu(float dt);
	bool sm1_Level0_LoseLevel(float dt);
	bool sm1_Level0_WinLevel(float dt);
	bool sm1_Level0_MainMenu(float dt);
	bool sm1_MainMenu_Level0(float dt);
	bool sm1_MainMenu_Exit(float dt);


	void sm1_WinLevel_OnEnter(float dt);

	void sm1_LoseLevel_OnEnter(float dt);

	void sm1_Level0_OnEnter(float dt);

	void sm1_Exit_OnEnter(float dt);

	void sm1_MainMenu_OnEnter(float dt);
	void sm1_MainMenu_OnUpdate(float dt);



	ProjectFun::StateMachine<MyGame>::StateMachinePtr stateMachine_0;




protected:
	 void Update(float dt) ;
	 void PostCollisionUpdate(float dt) ;
	 bool GetImpactProperties(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction) ;



private:




	bool GetImpactProperties_USER_CODE(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction);
	bool GetImpactProperties_Level0(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction);
	bool GetImpactProperties_Level1(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction);
	bool GetImpactProperties_Level2(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction);
	bool GetImpactProperties_Level3(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction);
	bool GetImpactProperties_Level4(ProjectFun::GameObject * object1,ProjectFun::GameObject * object2,float& bounciness,float& friction);

};
MyGame * GetMyGame();

ProjectFun::StateMachine<MyGame>::StateMachinePtr Create_MyGame_sm1_StateMachine(MyGame *owner);
ProjectFun::StateMachine<MyGame>::StateMachinePtr Create_MyGame_stateMachine_0_StateMachine(MyGame *owner);

#endif
