#ifndef _MYGAME_SPRITE_CLASS0_H_ 
#define _MYGAME_SPRITE_CLASS0_H_



class Sprite_Class0:public ProjectFun::Sprite
{
public:
	Sprite_Class0();
	Sprite_Class0(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	Sprite_Class0(const Sprite_Class0 & other);
	  ~Sprite_Class0() ;

	Sprite_Class0 * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const Sprite_Class0 & other) ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(Sprite_Class0);
};



#endif
