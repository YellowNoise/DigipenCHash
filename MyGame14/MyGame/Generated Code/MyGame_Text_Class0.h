#ifndef _MYGAME_TEXT_CLASS0_H_ 
#define _MYGAME_TEXT_CLASS0_H_



class Text_Class0:public ProjectFun::Text
{
public:
	Text_Class0();
	Text_Class0(const Core::String & text, const Core::String & bitmapFont);
	Text_Class0(const Text_Class0 & other);
	  ~Text_Class0() ;

	Text_Class0 * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const Text_Class0 & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(Text_Class0);
};



#endif
