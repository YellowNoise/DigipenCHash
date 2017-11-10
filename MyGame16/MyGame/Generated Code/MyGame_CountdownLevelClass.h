#ifndef _MYGAME_COUNTDOWNLEVELCLASS_H_ 
#define _MYGAME_COUNTDOWNLEVELCLASS_H_



class CountdownLevelClass:public ProjectFun::Level
{
public:
	CountdownLevelClass(void);
	  ~CountdownLevelClass() ;

	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void OnStart() ;
	 void OnEnd() ;

	int timer;


protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(CountdownLevelClass);
};



#endif
