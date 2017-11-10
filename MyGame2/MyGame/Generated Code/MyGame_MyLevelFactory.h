#ifndef _MyGame_MYLEVELFACTORY_H_ 
#define _MyGame_MYLEVELFACTORY_H_ 

class MyLevelFactory: public ProjectFun::LevelFactory 
{
public:
ProjectFun::Level * CreateLevel0();
size_t GetLevelsCount();
ProjectFun::Level * CreateLevel(size_t index);

bool GetLevelIndexFromName(const Core::String & levelName, size_t & levelIndex);
void CreateLevelForms(size_t index);
void Reset();
//ALL LEVELS
//for all collisionActors objects (incremental counter)
void AddCollisionActors0();
void AddCollisionActors();

//LEVEL0
//physics joints 

void MountObjectsLevel0();
//static collision 
void Level0_Layer0_StaticCollision();
void Level0_Layer1_StaticCollision();
void Level0_Layer2_StaticCollision();

//objects distribution 
void Set_Level0_Layer0_Objects();
void Set_Level0_Layer1_Objects();
void Set_Level0_Layer2_Objects();

//CollisionActors
Collision2D::CollisionActor * collisionActor00;


//Cameras
ProjectFun::Camera * camera0_5_Camera;


//ViewPorts
ProjectFun::Viewport * Viewport0_Viewport;



//Layers
ProjectFun::Layer * layer0_Layer;
ProjectFun::Layer * layer1_Layer;
ProjectFun::Layer * layer2_Layer;


protected:


private:
//the standard classes should be initialised with ProjectFun::

//Jukeboxes


//Levels
ProjectFun::Level * level0_Level;

};
#endif
