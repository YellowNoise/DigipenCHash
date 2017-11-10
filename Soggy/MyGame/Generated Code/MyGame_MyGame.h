#ifndef _MYGAME_MYGAME_H_ 
#define _MYGAME_MYGAME_H_



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
	 bool CursorCollidedWithButton(Core::String name) ;

	void Save(const Core::String & fileName);
void Load(const Core::String & fileName);
	bool isgamewon;
	int ringscollected;
	int totalrings;
	int enemiesdestroyed;
	int totalenemies;
	int lives;


	ProjectFun::StateMachine<MyGame>::StateMachinePtr gamesm;
	bool gamesm_Win_Start(float dt);
	bool gamesm_Game_Lose(float dt);
	bool gamesm_Game_Win(float dt);
	bool gamesm_Lose_Start(float dt);
	bool gamesm_Start_Game(float dt);

	void gamesm_Win_OnEnter(float dt);

	void gamesm_Game_OnEnter(float dt);

	void gamesm_Lose_OnEnter(float dt);

	void gamesm_Start_OnEnter(float dt);



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

ProjectFun::StateMachine<MyGame>::StateMachinePtr Create_MyGame_gamesm_StateMachine(MyGame *owner);

#endif
