#ifndef _MYGAME_EXPLODELEVELCLASS_H_ 
#define _MYGAME_EXPLODELEVELCLASS_H_



class ExplodeLevelClass:public ProjectFun::Level
{
public:
	ExplodeLevelClass(void);
	  ~ExplodeLevelClass() ;

	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void OnStart() ;
	 void OnEnd() ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(ExplodeLevelClass);
};



#endif
