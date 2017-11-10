#ifndef _BRIX_LEVEL0CLASS_H_ 
#define _BRIX_LEVEL0CLASS_H_



class Level0Class:public ProjectFun::Level
{
public:
	Level0Class(void);
	  ~Level0Class() ;

	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void OnStart() ;
	 void OnEnd() ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(Level0Class);
};



#endif
