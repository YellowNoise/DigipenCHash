#ifndef _MYGAME_SHIPCLASS_H_ 
#define _MYGAME_SHIPCLASS_H_



class ShipClass:public ProjectFun::Sprite
{
public:
	ShipClass();
	ShipClass(const std::vector<ProjectFun::SpriteAnimationPtr> & animations);
	ShipClass(const ShipClass & other);
	  ~ShipClass() ;

	ShipClass * Clone();

	 void Destroy() ;
	 void Save(Core::File & file)  const;
	 void Load(Core::File & file) ;
	 void NetworkSave(ProjectFun::NetworkFile &file)  const;
	 void NetworkLoad(ProjectFun::NetworkFile &file) ;
	 void NetworkSyncSend(ProjectFun::NetworkFile &file)  const;
	 void NetworkSyncReceive(ProjectFun::NetworkFile & file) ;
	 void OnStart() ;
	 void OnEnd() ;
	 void OnClone(const ShipClass & other) ;
	 void movement() ;
	 void WrapShip() ;
	 void Rotation() ;



protected:
	 void Update(float dt) ;



private:





DECLARE_OBJECT(ShipClass);
};



#endif
