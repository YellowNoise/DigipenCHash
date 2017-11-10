#ifndef _Brix_MYLEVELFACTORY_H_ 
#define _Brix_MYLEVELFACTORY_H_ 

class MyLevelFactory: public ProjectFun::LevelFactory 
{
public:
ProjectFun::Level * CreateLevel0();
ProjectFun::Level * CreateLevel1();
ProjectFun::Level * CreateLevel2();
ProjectFun::Level * CreateLevel3();
ProjectFun::Level * CreateLevel4();
size_t GetLevelsCount();
 void CreateJukeBox0();
 void CreateJukeBox1();
 void CreateJukeBox2();
ProjectFun::Level * CreateLevel(size_t index);

bool GetLevelIndexFromName(const Core::String & levelName, size_t & levelIndex);
void CreateLevelForms(size_t index);
void Reset();
//ALL LEVELS
//for all collisionActors objects (incremental counter)
void AddCollisionActors0();
void AddCollisionActors1();
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

//LEVEL1
//physics joints 

void MountObjectsLevel1();
//static collision 
void Level1_Layer0_StaticCollision();
void Level1_Layer1_StaticCollision();
void Level1_Layer2_StaticCollision();

//objects distribution 
void Set_Level1_Layer0_Objects();
void Set_Level1_Layer1_Objects();
void Set_Level1_Layer2_Objects();

//LEVEL2
//physics joints 

void MountObjectsLevel2();
//static collision 
void Level2_Layer0_StaticCollision();
void Level2_Layer1_StaticCollision();
void Level2_Layer2_StaticCollision();

//objects distribution 
void Set_Level2_Layer0_Objects();
void Set_Level2_Layer1_Objects();
void Set_Level2_Layer2_Objects();

//LEVEL3
//physics joints 

void MountObjectsLevel3();
//static collision 
void Level3_Layer0_StaticCollision();
void Level3_Layer1_StaticCollision();
void Level3_Layer2_StaticCollision();

//objects distribution 
void Set_Level3_Layer0_Objects();
void Set_Level3_Layer1_Objects();
void Set_Level3_Layer2_Objects();

//LEVEL4
//physics joints 

void MountObjectsLevel4();
//static collision 
void Level4_Layer0_StaticCollision();
void Level4_Layer1_StaticCollision();
void Level4_Layer2_StaticCollision();

//objects distribution 
void Set_Level4_Layer0_Objects();
void Set_Level4_Layer1_Objects();
void Set_Level4_Layer2_Objects();

//CollisionActors
Collision2D::CollisionActor * collisionActor00;
Collision2D::CollisionActor * collisionActor01;
Collision2D::CollisionActor * collisionActor02;
Collision2D::CollisionActor * collisionActor03;
Collision2D::CollisionActor * collisionActor04;
Collision2D::CollisionActor * collisionActor05;
Collision2D::CollisionActor * collisionActor06;
Collision2D::CollisionActor * collisionActor07;
Collision2D::CollisionActor * collisionActor08;
Collision2D::CollisionActor * collisionActor09;
Collision2D::CollisionActor * collisionActor10;


//Cameras
ProjectFun::Camera * camera0_2_Camera;
ProjectFun::Camera * camera0_118_Camera;
ProjectFun::Camera * camera0_120_Camera;
ProjectFun::Camera * camera0_125_Camera;
ProjectFun::Camera * camera0_130_Camera;


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
ProjectFun::JukeBox * MenuMusic;
ProjectFun::JukeBox * Splash;


//Levels
Level0Class * level0_Level;
ProjectFun::Level * level1_Level;
ProjectFun::Level * level2_Level;
ProjectFun::Level * level3_Level;
ProjectFun::Level * level4_Level;

};
#endif
