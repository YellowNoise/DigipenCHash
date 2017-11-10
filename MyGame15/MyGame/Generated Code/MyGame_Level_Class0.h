#ifndef _MYGAME_LEVEL_CLASS0_H_ 
#define _MYGAME_LEVEL_CLASS0_H_



class Level_Class0:public ProjectFun::Level
{
public:
	Level_Class0(void);
	  ~Level_Class0() ;

	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void OnStart() ;
	 void OnEnd() ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(Level_Class0);
};



#endif
