#include "Brix_MainDeclarations.h"
#include "Brix_Declarations.h"
#include <Core_DetectMemoryLeaks.h>

using namespace Core;
using namespace Math;
using namespace Input;
using namespace ProjectFun;
using namespace Collision2D;
using namespace Physics2D;
using namespace GUI;
using namespace std;


//TileMaps Setters

//Texts Setters
void Level0_Layer1_Text0(MyLevelFactory *mlf)
{
	ScoreText_124_Text= new Text("SCORE: ",Game::GetInstance()->GetDirectory()+"\\Resources\\Fonts\\ScoreFont\\ScoreFont");
	ScoreText_124_Text->SetName("ScoreText");
	ScoreText_124_Text->SetPosition(Point2D(-399.0f,243.0f));
	ScoreText_124_Text->SetLifeTime(0.0f);
	ScoreText_124_Text->SetVisible(true);
	ScoreText_124_Text->SetRotationAngle(0.0f);
	ScoreText_124_Text->SetScale(1.0f,1.0f);
	ScoreText_124_Text->SetCenter(Point2D(0.0f,0.0f));
	ScoreText_124_Text->SetOpacity(1.0f);
	ScoreText_124_Text->SetZOrder(1.5f);
	mlf->layer1_Layer->AddGameObject(ScoreText_124_Text);


}
void Level0_Layer1_Text1(MyLevelFactory *mlf)
{
	LivesText_122_Text= new Text("Lives",Game::GetInstance()->GetDirectory()+"\\Resources\\Fonts\\ScoreFont\\ScoreFont");
	LivesText_122_Text->SetName("LivesText");
	LivesText_122_Text->SetPosition(Point2D(-397.0f,204.0f));
	LivesText_122_Text->SetLifeTime(0.0f);
	LivesText_122_Text->SetVisible(true);
	LivesText_122_Text->SetRotationAngle(0.0f);
	LivesText_122_Text->SetScale(1.0f,1.0f);
	LivesText_122_Text->SetCenter(Point2D(0.0f,0.0f));
	LivesText_122_Text->SetOpacity(1.0f);
	LivesText_122_Text->SetZOrder(1.5f);
	mlf->layer1_Layer->AddGameObject(LivesText_122_Text);


}


//Sounds Setters
void Level0_Layer1_Sound0(MyLevelFactory *mlf)
{
	Core::String sound_File = Game::GetInstance()->GetDirectory()+"\\Resources\\Sounds\\Bounce.wav";
	Bounce_136_Sound = new Sound(sound_File,SoundSpatializationNone,10.0,false,0.0f);
	Bounce_136_Sound->SetName("Bounce");
	Bounce_136_Sound->SetPosition(Point2D(0.0f,0.0f));
	Bounce_136_Sound->SetVolume(1.0f);
	Bounce_136_Sound->SetPitch(1.0f);
	Bounce_136_Sound->SetLifeTime(0.0f);
	mlf->layer1_Layer->AddGameObject(Bounce_136_Sound);


}
void Level0_Layer1_Sound1(MyLevelFactory *mlf)
{
	Core::String sound_File = Game::GetInstance()->GetDirectory()+"\\Resources\\Sounds\\Brick.wav";
	Brick_137_Sound = new Sound(sound_File,SoundSpatializationNone,10.0,false,0.0f);
	Brick_137_Sound->SetName("Brick");
	Brick_137_Sound->SetPosition(Point2D(0.0f,0.0f));
	Brick_137_Sound->SetVolume(1.0f);
	Brick_137_Sound->SetPitch(1.0f);
	Brick_137_Sound->SetLifeTime(0.0f);
	mlf->layer1_Layer->AddGameObject(Brick_137_Sound);


}


//Sprites Setters
void Level0_Layer1_Sprite0(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> backgroundAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Background.png",1,1,frames);
	anim->SetName("Background");
	backgroundAnimations.push_back(anim);
	frames.clear();
	background_3_Sprite = new Sprite(backgroundAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor00);
		dynamicCollisionData->SetCollisionType(false);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		background_3_Sprite->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	background_3_Sprite->SetName("background");
	background_3_Sprite->SetCollisionActorIndex(0);
	background_3_Sprite->SetOpacity(1.0f);
	background_3_Sprite->Play(true);
	background_3_Sprite->SetPosition(Point2D(0.0f ,0.0f));
	background_3_Sprite->SetCurrentAnimationIndex(0);
	background_3_Sprite->SetCurrentFrameIndex(0);
	background_3_Sprite->SetLoop(true);
	background_3_Sprite->SetAnimationSpeed(1.0f);
	background_3_Sprite->SetFlipHorizontal(false);
	background_3_Sprite->SetFlipVertical(false);
	background_3_Sprite->SetLifeTime(0.0f);
	background_3_Sprite->SetVisible(true);
	background_3_Sprite->SetRotationAngle(0.0f);
	background_3_Sprite->SetScale(1.0f, 1.0f);
	background_3_Sprite->SetCenter(Point2D(0.0f,0.0f));
	background_3_Sprite->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(background_3_Sprite);


}
void Level0_Layer1_Sprite1(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_79_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_79_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_79_BrickClass->SetName("Brick");
	Brick_79_BrickClass->SetCollisionActorIndex(1);
	Brick_79_BrickClass->SetOpacity(1.0f);
	Brick_79_BrickClass->Play(true);
	Brick_79_BrickClass->SetPosition(Point2D(-175.0f ,203.0f));
	Brick_79_BrickClass->SetCurrentAnimationIndex(0);
	Brick_79_BrickClass->SetCurrentFrameIndex(0);
	Brick_79_BrickClass->SetLoop(true);
	Brick_79_BrickClass->SetAnimationSpeed(1.0f);
	Brick_79_BrickClass->SetFlipHorizontal(false);
	Brick_79_BrickClass->SetFlipVertical(false);
	Brick_79_BrickClass->SetLifeTime(0.0f);
	Brick_79_BrickClass->SetVisible(true);
	Brick_79_BrickClass->SetRotationAngle(0.0f);
	Brick_79_BrickClass->SetScale(1.0f, 1.0f);
	Brick_79_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_79_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_79_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_79_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_79_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_79_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_79_BrickClass);


}
void Level0_Layer1_Sprite2(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_80_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_80_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_80_BrickClass->SetName("Brick");
	Brick_80_BrickClass->SetCollisionActorIndex(1);
	Brick_80_BrickClass->SetOpacity(1.0f);
	Brick_80_BrickClass->Play(true);
	Brick_80_BrickClass->SetPosition(Point2D(-106.0f ,203.0f));
	Brick_80_BrickClass->SetCurrentAnimationIndex(0);
	Brick_80_BrickClass->SetCurrentFrameIndex(0);
	Brick_80_BrickClass->SetLoop(true);
	Brick_80_BrickClass->SetAnimationSpeed(1.0f);
	Brick_80_BrickClass->SetFlipHorizontal(false);
	Brick_80_BrickClass->SetFlipVertical(false);
	Brick_80_BrickClass->SetLifeTime(0.0f);
	Brick_80_BrickClass->SetVisible(true);
	Brick_80_BrickClass->SetRotationAngle(0.0f);
	Brick_80_BrickClass->SetScale(1.0f, 1.0f);
	Brick_80_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_80_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_80_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_80_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_80_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_80_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_80_BrickClass);


}
void Level0_Layer1_Sprite3(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_81_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_81_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_81_BrickClass->SetName("Brick");
	Brick_81_BrickClass->SetCollisionActorIndex(1);
	Brick_81_BrickClass->SetOpacity(1.0f);
	Brick_81_BrickClass->Play(true);
	Brick_81_BrickClass->SetPosition(Point2D(-37.0f ,203.0f));
	Brick_81_BrickClass->SetCurrentAnimationIndex(0);
	Brick_81_BrickClass->SetCurrentFrameIndex(0);
	Brick_81_BrickClass->SetLoop(true);
	Brick_81_BrickClass->SetAnimationSpeed(1.0f);
	Brick_81_BrickClass->SetFlipHorizontal(false);
	Brick_81_BrickClass->SetFlipVertical(false);
	Brick_81_BrickClass->SetLifeTime(0.0f);
	Brick_81_BrickClass->SetVisible(true);
	Brick_81_BrickClass->SetRotationAngle(0.0f);
	Brick_81_BrickClass->SetScale(1.0f, 1.0f);
	Brick_81_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_81_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_81_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_81_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_81_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_81_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_81_BrickClass);


}
void Level0_Layer1_Sprite4(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_82_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_82_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_82_BrickClass->SetName("Brick");
	Brick_82_BrickClass->SetCollisionActorIndex(1);
	Brick_82_BrickClass->SetOpacity(1.0f);
	Brick_82_BrickClass->Play(true);
	Brick_82_BrickClass->SetPosition(Point2D(32.0f ,203.0f));
	Brick_82_BrickClass->SetCurrentAnimationIndex(0);
	Brick_82_BrickClass->SetCurrentFrameIndex(0);
	Brick_82_BrickClass->SetLoop(true);
	Brick_82_BrickClass->SetAnimationSpeed(1.0f);
	Brick_82_BrickClass->SetFlipHorizontal(false);
	Brick_82_BrickClass->SetFlipVertical(false);
	Brick_82_BrickClass->SetLifeTime(0.0f);
	Brick_82_BrickClass->SetVisible(true);
	Brick_82_BrickClass->SetRotationAngle(0.0f);
	Brick_82_BrickClass->SetScale(1.0f, 1.0f);
	Brick_82_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_82_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_82_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_82_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_82_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_82_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_82_BrickClass);


}
void Level0_Layer1_Sprite5(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_83_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_83_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_83_BrickClass->SetName("Brick");
	Brick_83_BrickClass->SetCollisionActorIndex(1);
	Brick_83_BrickClass->SetOpacity(1.0f);
	Brick_83_BrickClass->Play(true);
	Brick_83_BrickClass->SetPosition(Point2D(101.0f ,203.0f));
	Brick_83_BrickClass->SetCurrentAnimationIndex(0);
	Brick_83_BrickClass->SetCurrentFrameIndex(0);
	Brick_83_BrickClass->SetLoop(true);
	Brick_83_BrickClass->SetAnimationSpeed(1.0f);
	Brick_83_BrickClass->SetFlipHorizontal(false);
	Brick_83_BrickClass->SetFlipVertical(false);
	Brick_83_BrickClass->SetLifeTime(0.0f);
	Brick_83_BrickClass->SetVisible(true);
	Brick_83_BrickClass->SetRotationAngle(0.0f);
	Brick_83_BrickClass->SetScale(1.0f, 1.0f);
	Brick_83_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_83_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_83_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_83_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_83_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_83_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_83_BrickClass);


}
void Level0_Layer1_Sprite6(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_84_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_84_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_84_BrickClass->SetName("Brick");
	Brick_84_BrickClass->SetCollisionActorIndex(1);
	Brick_84_BrickClass->SetOpacity(1.0f);
	Brick_84_BrickClass->Play(true);
	Brick_84_BrickClass->SetPosition(Point2D(170.0f ,203.0f));
	Brick_84_BrickClass->SetCurrentAnimationIndex(0);
	Brick_84_BrickClass->SetCurrentFrameIndex(0);
	Brick_84_BrickClass->SetLoop(true);
	Brick_84_BrickClass->SetAnimationSpeed(1.0f);
	Brick_84_BrickClass->SetFlipHorizontal(false);
	Brick_84_BrickClass->SetFlipVertical(false);
	Brick_84_BrickClass->SetLifeTime(0.0f);
	Brick_84_BrickClass->SetVisible(true);
	Brick_84_BrickClass->SetRotationAngle(0.0f);
	Brick_84_BrickClass->SetScale(1.0f, 1.0f);
	Brick_84_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_84_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_84_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_84_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_84_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_84_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_84_BrickClass);


}
void Level0_Layer1_Sprite7(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_85_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_85_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_85_BrickClass->SetName("Brick");
	Brick_85_BrickClass->SetCollisionActorIndex(1);
	Brick_85_BrickClass->SetOpacity(1.0f);
	Brick_85_BrickClass->Play(true);
	Brick_85_BrickClass->SetPosition(Point2D(239.0f ,203.0f));
	Brick_85_BrickClass->SetCurrentAnimationIndex(0);
	Brick_85_BrickClass->SetCurrentFrameIndex(0);
	Brick_85_BrickClass->SetLoop(true);
	Brick_85_BrickClass->SetAnimationSpeed(1.0f);
	Brick_85_BrickClass->SetFlipHorizontal(false);
	Brick_85_BrickClass->SetFlipVertical(false);
	Brick_85_BrickClass->SetLifeTime(0.0f);
	Brick_85_BrickClass->SetVisible(true);
	Brick_85_BrickClass->SetRotationAngle(0.0f);
	Brick_85_BrickClass->SetScale(1.0f, 1.0f);
	Brick_85_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_85_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_85_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_85_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_85_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_85_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_85_BrickClass);


}
void Level0_Layer1_Sprite8(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_86_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_86_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_86_BrickClass->SetName("Brick");
	Brick_86_BrickClass->SetCollisionActorIndex(1);
	Brick_86_BrickClass->SetOpacity(1.0f);
	Brick_86_BrickClass->Play(true);
	Brick_86_BrickClass->SetPosition(Point2D(-244.0f ,166.0f));
	Brick_86_BrickClass->SetCurrentAnimationIndex(0);
	Brick_86_BrickClass->SetCurrentFrameIndex(0);
	Brick_86_BrickClass->SetLoop(true);
	Brick_86_BrickClass->SetAnimationSpeed(1.0f);
	Brick_86_BrickClass->SetFlipHorizontal(false);
	Brick_86_BrickClass->SetFlipVertical(false);
	Brick_86_BrickClass->SetLifeTime(0.0f);
	Brick_86_BrickClass->SetVisible(true);
	Brick_86_BrickClass->SetRotationAngle(0.0f);
	Brick_86_BrickClass->SetScale(1.0f, 1.0f);
	Brick_86_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_86_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_86_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_86_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_86_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_86_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_86_BrickClass);


}
void Level0_Layer1_Sprite9(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_87_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_87_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_87_BrickClass->SetName("Brick");
	Brick_87_BrickClass->SetCollisionActorIndex(1);
	Brick_87_BrickClass->SetOpacity(1.0f);
	Brick_87_BrickClass->Play(true);
	Brick_87_BrickClass->SetPosition(Point2D(-175.0f ,166.0f));
	Brick_87_BrickClass->SetCurrentAnimationIndex(0);
	Brick_87_BrickClass->SetCurrentFrameIndex(0);
	Brick_87_BrickClass->SetLoop(true);
	Brick_87_BrickClass->SetAnimationSpeed(1.0f);
	Brick_87_BrickClass->SetFlipHorizontal(false);
	Brick_87_BrickClass->SetFlipVertical(false);
	Brick_87_BrickClass->SetLifeTime(0.0f);
	Brick_87_BrickClass->SetVisible(true);
	Brick_87_BrickClass->SetRotationAngle(0.0f);
	Brick_87_BrickClass->SetScale(1.0f, 1.0f);
	Brick_87_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_87_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_87_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_87_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_87_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_87_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_87_BrickClass);


}
void Level0_Layer1_Sprite10(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_88_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_88_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_88_BrickClass->SetName("Brick");
	Brick_88_BrickClass->SetCollisionActorIndex(1);
	Brick_88_BrickClass->SetOpacity(1.0f);
	Brick_88_BrickClass->Play(true);
	Brick_88_BrickClass->SetPosition(Point2D(-106.0f ,166.0f));
	Brick_88_BrickClass->SetCurrentAnimationIndex(0);
	Brick_88_BrickClass->SetCurrentFrameIndex(0);
	Brick_88_BrickClass->SetLoop(true);
	Brick_88_BrickClass->SetAnimationSpeed(1.0f);
	Brick_88_BrickClass->SetFlipHorizontal(false);
	Brick_88_BrickClass->SetFlipVertical(false);
	Brick_88_BrickClass->SetLifeTime(0.0f);
	Brick_88_BrickClass->SetVisible(true);
	Brick_88_BrickClass->SetRotationAngle(0.0f);
	Brick_88_BrickClass->SetScale(1.0f, 1.0f);
	Brick_88_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_88_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_88_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_88_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_88_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_88_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_88_BrickClass);


}
void Level0_Layer1_Sprite11(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_89_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_89_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_89_BrickClass->SetName("Brick");
	Brick_89_BrickClass->SetCollisionActorIndex(1);
	Brick_89_BrickClass->SetOpacity(1.0f);
	Brick_89_BrickClass->Play(true);
	Brick_89_BrickClass->SetPosition(Point2D(-37.0f ,166.0f));
	Brick_89_BrickClass->SetCurrentAnimationIndex(0);
	Brick_89_BrickClass->SetCurrentFrameIndex(0);
	Brick_89_BrickClass->SetLoop(true);
	Brick_89_BrickClass->SetAnimationSpeed(1.0f);
	Brick_89_BrickClass->SetFlipHorizontal(false);
	Brick_89_BrickClass->SetFlipVertical(false);
	Brick_89_BrickClass->SetLifeTime(0.0f);
	Brick_89_BrickClass->SetVisible(true);
	Brick_89_BrickClass->SetRotationAngle(0.0f);
	Brick_89_BrickClass->SetScale(1.0f, 1.0f);
	Brick_89_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_89_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_89_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_89_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_89_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_89_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_89_BrickClass);


}
void Level0_Layer1_Sprite12(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_90_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_90_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_90_BrickClass->SetName("Brick");
	Brick_90_BrickClass->SetCollisionActorIndex(1);
	Brick_90_BrickClass->SetOpacity(1.0f);
	Brick_90_BrickClass->Play(true);
	Brick_90_BrickClass->SetPosition(Point2D(32.0f ,166.0f));
	Brick_90_BrickClass->SetCurrentAnimationIndex(0);
	Brick_90_BrickClass->SetCurrentFrameIndex(0);
	Brick_90_BrickClass->SetLoop(true);
	Brick_90_BrickClass->SetAnimationSpeed(1.0f);
	Brick_90_BrickClass->SetFlipHorizontal(false);
	Brick_90_BrickClass->SetFlipVertical(false);
	Brick_90_BrickClass->SetLifeTime(0.0f);
	Brick_90_BrickClass->SetVisible(true);
	Brick_90_BrickClass->SetRotationAngle(0.0f);
	Brick_90_BrickClass->SetScale(1.0f, 1.0f);
	Brick_90_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_90_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_90_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_90_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_90_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_90_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_90_BrickClass);


}
void Level0_Layer1_Sprite13(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_91_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_91_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_91_BrickClass->SetName("Brick");
	Brick_91_BrickClass->SetCollisionActorIndex(1);
	Brick_91_BrickClass->SetOpacity(1.0f);
	Brick_91_BrickClass->Play(true);
	Brick_91_BrickClass->SetPosition(Point2D(101.0f ,166.0f));
	Brick_91_BrickClass->SetCurrentAnimationIndex(0);
	Brick_91_BrickClass->SetCurrentFrameIndex(0);
	Brick_91_BrickClass->SetLoop(true);
	Brick_91_BrickClass->SetAnimationSpeed(1.0f);
	Brick_91_BrickClass->SetFlipHorizontal(false);
	Brick_91_BrickClass->SetFlipVertical(false);
	Brick_91_BrickClass->SetLifeTime(0.0f);
	Brick_91_BrickClass->SetVisible(true);
	Brick_91_BrickClass->SetRotationAngle(0.0f);
	Brick_91_BrickClass->SetScale(1.0f, 1.0f);
	Brick_91_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_91_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_91_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_91_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_91_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_91_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_91_BrickClass);


}
void Level0_Layer1_Sprite14(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_92_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_92_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_92_BrickClass->SetName("Brick");
	Brick_92_BrickClass->SetCollisionActorIndex(1);
	Brick_92_BrickClass->SetOpacity(1.0f);
	Brick_92_BrickClass->Play(true);
	Brick_92_BrickClass->SetPosition(Point2D(170.0f ,166.0f));
	Brick_92_BrickClass->SetCurrentAnimationIndex(0);
	Brick_92_BrickClass->SetCurrentFrameIndex(0);
	Brick_92_BrickClass->SetLoop(true);
	Brick_92_BrickClass->SetAnimationSpeed(1.0f);
	Brick_92_BrickClass->SetFlipHorizontal(false);
	Brick_92_BrickClass->SetFlipVertical(false);
	Brick_92_BrickClass->SetLifeTime(0.0f);
	Brick_92_BrickClass->SetVisible(true);
	Brick_92_BrickClass->SetRotationAngle(0.0f);
	Brick_92_BrickClass->SetScale(1.0f, 1.0f);
	Brick_92_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_92_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_92_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_92_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_92_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_92_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_92_BrickClass);


}
void Level0_Layer1_Sprite15(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_93_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_93_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_93_BrickClass->SetName("Brick");
	Brick_93_BrickClass->SetCollisionActorIndex(1);
	Brick_93_BrickClass->SetOpacity(1.0f);
	Brick_93_BrickClass->Play(true);
	Brick_93_BrickClass->SetPosition(Point2D(239.0f ,166.0f));
	Brick_93_BrickClass->SetCurrentAnimationIndex(0);
	Brick_93_BrickClass->SetCurrentFrameIndex(0);
	Brick_93_BrickClass->SetLoop(true);
	Brick_93_BrickClass->SetAnimationSpeed(1.0f);
	Brick_93_BrickClass->SetFlipHorizontal(false);
	Brick_93_BrickClass->SetFlipVertical(false);
	Brick_93_BrickClass->SetLifeTime(0.0f);
	Brick_93_BrickClass->SetVisible(true);
	Brick_93_BrickClass->SetRotationAngle(0.0f);
	Brick_93_BrickClass->SetScale(1.0f, 1.0f);
	Brick_93_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_93_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_93_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_93_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_93_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_93_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_93_BrickClass);


}
void Level0_Layer1_Sprite16(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_94_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_94_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_94_BrickClass->SetName("Brick");
	Brick_94_BrickClass->SetCollisionActorIndex(1);
	Brick_94_BrickClass->SetOpacity(1.0f);
	Brick_94_BrickClass->Play(true);
	Brick_94_BrickClass->SetPosition(Point2D(-244.0f ,129.0f));
	Brick_94_BrickClass->SetCurrentAnimationIndex(0);
	Brick_94_BrickClass->SetCurrentFrameIndex(0);
	Brick_94_BrickClass->SetLoop(true);
	Brick_94_BrickClass->SetAnimationSpeed(1.0f);
	Brick_94_BrickClass->SetFlipHorizontal(false);
	Brick_94_BrickClass->SetFlipVertical(false);
	Brick_94_BrickClass->SetLifeTime(0.0f);
	Brick_94_BrickClass->SetVisible(true);
	Brick_94_BrickClass->SetRotationAngle(0.0f);
	Brick_94_BrickClass->SetScale(1.0f, 1.0f);
	Brick_94_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_94_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_94_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_94_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_94_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_94_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_94_BrickClass);


}
void Level0_Layer1_Sprite17(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_95_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_95_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_95_BrickClass->SetName("Brick");
	Brick_95_BrickClass->SetCollisionActorIndex(1);
	Brick_95_BrickClass->SetOpacity(1.0f);
	Brick_95_BrickClass->Play(true);
	Brick_95_BrickClass->SetPosition(Point2D(-175.0f ,129.0f));
	Brick_95_BrickClass->SetCurrentAnimationIndex(0);
	Brick_95_BrickClass->SetCurrentFrameIndex(0);
	Brick_95_BrickClass->SetLoop(true);
	Brick_95_BrickClass->SetAnimationSpeed(1.0f);
	Brick_95_BrickClass->SetFlipHorizontal(false);
	Brick_95_BrickClass->SetFlipVertical(false);
	Brick_95_BrickClass->SetLifeTime(0.0f);
	Brick_95_BrickClass->SetVisible(true);
	Brick_95_BrickClass->SetRotationAngle(0.0f);
	Brick_95_BrickClass->SetScale(1.0f, 1.0f);
	Brick_95_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_95_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_95_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_95_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_95_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_95_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_95_BrickClass);


}
void Level0_Layer1_Sprite18(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_96_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_96_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_96_BrickClass->SetName("Brick");
	Brick_96_BrickClass->SetCollisionActorIndex(1);
	Brick_96_BrickClass->SetOpacity(1.0f);
	Brick_96_BrickClass->Play(true);
	Brick_96_BrickClass->SetPosition(Point2D(-106.0f ,129.0f));
	Brick_96_BrickClass->SetCurrentAnimationIndex(0);
	Brick_96_BrickClass->SetCurrentFrameIndex(0);
	Brick_96_BrickClass->SetLoop(true);
	Brick_96_BrickClass->SetAnimationSpeed(1.0f);
	Brick_96_BrickClass->SetFlipHorizontal(false);
	Brick_96_BrickClass->SetFlipVertical(false);
	Brick_96_BrickClass->SetLifeTime(0.0f);
	Brick_96_BrickClass->SetVisible(true);
	Brick_96_BrickClass->SetRotationAngle(0.0f);
	Brick_96_BrickClass->SetScale(1.0f, 1.0f);
	Brick_96_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_96_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_96_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_96_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_96_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_96_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_96_BrickClass);


}
void Level0_Layer1_Sprite19(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_97_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_97_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_97_BrickClass->SetName("Brick");
	Brick_97_BrickClass->SetCollisionActorIndex(1);
	Brick_97_BrickClass->SetOpacity(1.0f);
	Brick_97_BrickClass->Play(true);
	Brick_97_BrickClass->SetPosition(Point2D(-37.0f ,129.0f));
	Brick_97_BrickClass->SetCurrentAnimationIndex(0);
	Brick_97_BrickClass->SetCurrentFrameIndex(0);
	Brick_97_BrickClass->SetLoop(true);
	Brick_97_BrickClass->SetAnimationSpeed(1.0f);
	Brick_97_BrickClass->SetFlipHorizontal(false);
	Brick_97_BrickClass->SetFlipVertical(false);
	Brick_97_BrickClass->SetLifeTime(0.0f);
	Brick_97_BrickClass->SetVisible(true);
	Brick_97_BrickClass->SetRotationAngle(0.0f);
	Brick_97_BrickClass->SetScale(1.0f, 1.0f);
	Brick_97_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_97_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_97_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_97_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_97_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_97_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_97_BrickClass);


}
void Level0_Layer1_Sprite20(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_98_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_98_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_98_BrickClass->SetName("Brick");
	Brick_98_BrickClass->SetCollisionActorIndex(1);
	Brick_98_BrickClass->SetOpacity(1.0f);
	Brick_98_BrickClass->Play(true);
	Brick_98_BrickClass->SetPosition(Point2D(32.0f ,129.0f));
	Brick_98_BrickClass->SetCurrentAnimationIndex(0);
	Brick_98_BrickClass->SetCurrentFrameIndex(0);
	Brick_98_BrickClass->SetLoop(true);
	Brick_98_BrickClass->SetAnimationSpeed(1.0f);
	Brick_98_BrickClass->SetFlipHorizontal(false);
	Brick_98_BrickClass->SetFlipVertical(false);
	Brick_98_BrickClass->SetLifeTime(0.0f);
	Brick_98_BrickClass->SetVisible(true);
	Brick_98_BrickClass->SetRotationAngle(0.0f);
	Brick_98_BrickClass->SetScale(1.0f, 1.0f);
	Brick_98_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_98_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_98_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_98_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_98_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_98_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_98_BrickClass);


}
void Level0_Layer1_Sprite21(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_99_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_99_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_99_BrickClass->SetName("Brick");
	Brick_99_BrickClass->SetCollisionActorIndex(1);
	Brick_99_BrickClass->SetOpacity(1.0f);
	Brick_99_BrickClass->Play(true);
	Brick_99_BrickClass->SetPosition(Point2D(101.0f ,129.0f));
	Brick_99_BrickClass->SetCurrentAnimationIndex(0);
	Brick_99_BrickClass->SetCurrentFrameIndex(0);
	Brick_99_BrickClass->SetLoop(true);
	Brick_99_BrickClass->SetAnimationSpeed(1.0f);
	Brick_99_BrickClass->SetFlipHorizontal(false);
	Brick_99_BrickClass->SetFlipVertical(false);
	Brick_99_BrickClass->SetLifeTime(0.0f);
	Brick_99_BrickClass->SetVisible(true);
	Brick_99_BrickClass->SetRotationAngle(0.0f);
	Brick_99_BrickClass->SetScale(1.0f, 1.0f);
	Brick_99_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_99_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_99_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_99_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_99_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_99_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_99_BrickClass);


}
void Level0_Layer1_Sprite22(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_100_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_100_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_100_BrickClass->SetName("Brick");
	Brick_100_BrickClass->SetCollisionActorIndex(1);
	Brick_100_BrickClass->SetOpacity(1.0f);
	Brick_100_BrickClass->Play(true);
	Brick_100_BrickClass->SetPosition(Point2D(170.0f ,129.0f));
	Brick_100_BrickClass->SetCurrentAnimationIndex(0);
	Brick_100_BrickClass->SetCurrentFrameIndex(0);
	Brick_100_BrickClass->SetLoop(true);
	Brick_100_BrickClass->SetAnimationSpeed(1.0f);
	Brick_100_BrickClass->SetFlipHorizontal(false);
	Brick_100_BrickClass->SetFlipVertical(false);
	Brick_100_BrickClass->SetLifeTime(0.0f);
	Brick_100_BrickClass->SetVisible(true);
	Brick_100_BrickClass->SetRotationAngle(0.0f);
	Brick_100_BrickClass->SetScale(1.0f, 1.0f);
	Brick_100_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_100_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_100_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_100_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_100_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_100_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_100_BrickClass);


}
void Level0_Layer1_Sprite23(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_101_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_101_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_101_BrickClass->SetName("Brick");
	Brick_101_BrickClass->SetCollisionActorIndex(1);
	Brick_101_BrickClass->SetOpacity(1.0f);
	Brick_101_BrickClass->Play(true);
	Brick_101_BrickClass->SetPosition(Point2D(239.0f ,129.0f));
	Brick_101_BrickClass->SetCurrentAnimationIndex(0);
	Brick_101_BrickClass->SetCurrentFrameIndex(0);
	Brick_101_BrickClass->SetLoop(true);
	Brick_101_BrickClass->SetAnimationSpeed(1.0f);
	Brick_101_BrickClass->SetFlipHorizontal(false);
	Brick_101_BrickClass->SetFlipVertical(false);
	Brick_101_BrickClass->SetLifeTime(0.0f);
	Brick_101_BrickClass->SetVisible(true);
	Brick_101_BrickClass->SetRotationAngle(0.0f);
	Brick_101_BrickClass->SetScale(1.0f, 1.0f);
	Brick_101_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_101_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_101_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_101_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_101_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_101_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_101_BrickClass);


}
void Level0_Layer1_Sprite24(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_102_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_102_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_102_BrickClass->SetName("Brick");
	Brick_102_BrickClass->SetCollisionActorIndex(1);
	Brick_102_BrickClass->SetOpacity(1.0f);
	Brick_102_BrickClass->Play(true);
	Brick_102_BrickClass->SetPosition(Point2D(-244.0f ,92.0f));
	Brick_102_BrickClass->SetCurrentAnimationIndex(0);
	Brick_102_BrickClass->SetCurrentFrameIndex(0);
	Brick_102_BrickClass->SetLoop(true);
	Brick_102_BrickClass->SetAnimationSpeed(1.0f);
	Brick_102_BrickClass->SetFlipHorizontal(false);
	Brick_102_BrickClass->SetFlipVertical(false);
	Brick_102_BrickClass->SetLifeTime(0.0f);
	Brick_102_BrickClass->SetVisible(true);
	Brick_102_BrickClass->SetRotationAngle(0.0f);
	Brick_102_BrickClass->SetScale(1.0f, 1.0f);
	Brick_102_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_102_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_102_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_102_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_102_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_102_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_102_BrickClass);


}
void Level0_Layer1_Sprite25(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_103_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_103_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_103_BrickClass->SetName("Brick");
	Brick_103_BrickClass->SetCollisionActorIndex(1);
	Brick_103_BrickClass->SetOpacity(1.0f);
	Brick_103_BrickClass->Play(true);
	Brick_103_BrickClass->SetPosition(Point2D(-175.0f ,92.0f));
	Brick_103_BrickClass->SetCurrentAnimationIndex(0);
	Brick_103_BrickClass->SetCurrentFrameIndex(0);
	Brick_103_BrickClass->SetLoop(true);
	Brick_103_BrickClass->SetAnimationSpeed(1.0f);
	Brick_103_BrickClass->SetFlipHorizontal(false);
	Brick_103_BrickClass->SetFlipVertical(false);
	Brick_103_BrickClass->SetLifeTime(0.0f);
	Brick_103_BrickClass->SetVisible(true);
	Brick_103_BrickClass->SetRotationAngle(0.0f);
	Brick_103_BrickClass->SetScale(1.0f, 1.0f);
	Brick_103_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_103_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_103_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_103_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_103_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_103_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_103_BrickClass);


}
void Level0_Layer1_Sprite26(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_104_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_104_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_104_BrickClass->SetName("Brick");
	Brick_104_BrickClass->SetCollisionActorIndex(1);
	Brick_104_BrickClass->SetOpacity(1.0f);
	Brick_104_BrickClass->Play(true);
	Brick_104_BrickClass->SetPosition(Point2D(-106.0f ,92.0f));
	Brick_104_BrickClass->SetCurrentAnimationIndex(0);
	Brick_104_BrickClass->SetCurrentFrameIndex(0);
	Brick_104_BrickClass->SetLoop(true);
	Brick_104_BrickClass->SetAnimationSpeed(1.0f);
	Brick_104_BrickClass->SetFlipHorizontal(false);
	Brick_104_BrickClass->SetFlipVertical(false);
	Brick_104_BrickClass->SetLifeTime(0.0f);
	Brick_104_BrickClass->SetVisible(true);
	Brick_104_BrickClass->SetRotationAngle(0.0f);
	Brick_104_BrickClass->SetScale(1.0f, 1.0f);
	Brick_104_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_104_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_104_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_104_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_104_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_104_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_104_BrickClass);


}
void Level0_Layer1_Sprite27(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_105_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_105_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_105_BrickClass->SetName("Brick");
	Brick_105_BrickClass->SetCollisionActorIndex(1);
	Brick_105_BrickClass->SetOpacity(1.0f);
	Brick_105_BrickClass->Play(true);
	Brick_105_BrickClass->SetPosition(Point2D(-37.0f ,92.0f));
	Brick_105_BrickClass->SetCurrentAnimationIndex(0);
	Brick_105_BrickClass->SetCurrentFrameIndex(0);
	Brick_105_BrickClass->SetLoop(true);
	Brick_105_BrickClass->SetAnimationSpeed(1.0f);
	Brick_105_BrickClass->SetFlipHorizontal(false);
	Brick_105_BrickClass->SetFlipVertical(false);
	Brick_105_BrickClass->SetLifeTime(0.0f);
	Brick_105_BrickClass->SetVisible(true);
	Brick_105_BrickClass->SetRotationAngle(0.0f);
	Brick_105_BrickClass->SetScale(1.0f, 1.0f);
	Brick_105_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_105_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_105_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_105_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_105_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_105_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_105_BrickClass);


}
void Level0_Layer1_Sprite28(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_106_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_106_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_106_BrickClass->SetName("Brick");
	Brick_106_BrickClass->SetCollisionActorIndex(1);
	Brick_106_BrickClass->SetOpacity(1.0f);
	Brick_106_BrickClass->Play(true);
	Brick_106_BrickClass->SetPosition(Point2D(32.0f ,92.0f));
	Brick_106_BrickClass->SetCurrentAnimationIndex(0);
	Brick_106_BrickClass->SetCurrentFrameIndex(0);
	Brick_106_BrickClass->SetLoop(true);
	Brick_106_BrickClass->SetAnimationSpeed(1.0f);
	Brick_106_BrickClass->SetFlipHorizontal(false);
	Brick_106_BrickClass->SetFlipVertical(false);
	Brick_106_BrickClass->SetLifeTime(0.0f);
	Brick_106_BrickClass->SetVisible(true);
	Brick_106_BrickClass->SetRotationAngle(0.0f);
	Brick_106_BrickClass->SetScale(1.0f, 1.0f);
	Brick_106_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_106_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_106_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_106_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_106_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_106_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_106_BrickClass);


}
void Level0_Layer1_Sprite29(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_107_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_107_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_107_BrickClass->SetName("Brick");
	Brick_107_BrickClass->SetCollisionActorIndex(1);
	Brick_107_BrickClass->SetOpacity(1.0f);
	Brick_107_BrickClass->Play(true);
	Brick_107_BrickClass->SetPosition(Point2D(101.0f ,92.0f));
	Brick_107_BrickClass->SetCurrentAnimationIndex(0);
	Brick_107_BrickClass->SetCurrentFrameIndex(0);
	Brick_107_BrickClass->SetLoop(true);
	Brick_107_BrickClass->SetAnimationSpeed(1.0f);
	Brick_107_BrickClass->SetFlipHorizontal(false);
	Brick_107_BrickClass->SetFlipVertical(false);
	Brick_107_BrickClass->SetLifeTime(0.0f);
	Brick_107_BrickClass->SetVisible(true);
	Brick_107_BrickClass->SetRotationAngle(0.0f);
	Brick_107_BrickClass->SetScale(1.0f, 1.0f);
	Brick_107_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_107_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_107_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_107_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_107_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_107_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_107_BrickClass);


}
void Level0_Layer1_Sprite30(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_108_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_108_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_108_BrickClass->SetName("Brick");
	Brick_108_BrickClass->SetCollisionActorIndex(1);
	Brick_108_BrickClass->SetOpacity(1.0f);
	Brick_108_BrickClass->Play(true);
	Brick_108_BrickClass->SetPosition(Point2D(170.0f ,92.0f));
	Brick_108_BrickClass->SetCurrentAnimationIndex(0);
	Brick_108_BrickClass->SetCurrentFrameIndex(0);
	Brick_108_BrickClass->SetLoop(true);
	Brick_108_BrickClass->SetAnimationSpeed(1.0f);
	Brick_108_BrickClass->SetFlipHorizontal(false);
	Brick_108_BrickClass->SetFlipVertical(false);
	Brick_108_BrickClass->SetLifeTime(0.0f);
	Brick_108_BrickClass->SetVisible(true);
	Brick_108_BrickClass->SetRotationAngle(0.0f);
	Brick_108_BrickClass->SetScale(1.0f, 1.0f);
	Brick_108_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_108_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_108_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_108_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_108_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_108_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_108_BrickClass);


}
void Level0_Layer1_Sprite31(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_109_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_109_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_109_BrickClass->SetName("Brick");
	Brick_109_BrickClass->SetCollisionActorIndex(1);
	Brick_109_BrickClass->SetOpacity(1.0f);
	Brick_109_BrickClass->Play(true);
	Brick_109_BrickClass->SetPosition(Point2D(239.0f ,92.0f));
	Brick_109_BrickClass->SetCurrentAnimationIndex(0);
	Brick_109_BrickClass->SetCurrentFrameIndex(0);
	Brick_109_BrickClass->SetLoop(true);
	Brick_109_BrickClass->SetAnimationSpeed(1.0f);
	Brick_109_BrickClass->SetFlipHorizontal(false);
	Brick_109_BrickClass->SetFlipVertical(false);
	Brick_109_BrickClass->SetLifeTime(0.0f);
	Brick_109_BrickClass->SetVisible(true);
	Brick_109_BrickClass->SetRotationAngle(0.0f);
	Brick_109_BrickClass->SetScale(1.0f, 1.0f);
	Brick_109_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_109_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_109_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_109_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_109_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_109_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_109_BrickClass);


}
void Level0_Layer1_Sprite32(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_110_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_110_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_110_BrickClass->SetName("Brick");
	Brick_110_BrickClass->SetCollisionActorIndex(1);
	Brick_110_BrickClass->SetOpacity(1.0f);
	Brick_110_BrickClass->Play(true);
	Brick_110_BrickClass->SetPosition(Point2D(-244.0f ,55.0f));
	Brick_110_BrickClass->SetCurrentAnimationIndex(0);
	Brick_110_BrickClass->SetCurrentFrameIndex(0);
	Brick_110_BrickClass->SetLoop(true);
	Brick_110_BrickClass->SetAnimationSpeed(1.0f);
	Brick_110_BrickClass->SetFlipHorizontal(false);
	Brick_110_BrickClass->SetFlipVertical(false);
	Brick_110_BrickClass->SetLifeTime(0.0f);
	Brick_110_BrickClass->SetVisible(true);
	Brick_110_BrickClass->SetRotationAngle(0.0f);
	Brick_110_BrickClass->SetScale(1.0f, 1.0f);
	Brick_110_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_110_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_110_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_110_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_110_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_110_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_110_BrickClass);


}
void Level0_Layer1_Sprite33(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_111_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_111_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_111_BrickClass->SetName("Brick");
	Brick_111_BrickClass->SetCollisionActorIndex(1);
	Brick_111_BrickClass->SetOpacity(1.0f);
	Brick_111_BrickClass->Play(true);
	Brick_111_BrickClass->SetPosition(Point2D(-175.0f ,55.0f));
	Brick_111_BrickClass->SetCurrentAnimationIndex(0);
	Brick_111_BrickClass->SetCurrentFrameIndex(0);
	Brick_111_BrickClass->SetLoop(true);
	Brick_111_BrickClass->SetAnimationSpeed(1.0f);
	Brick_111_BrickClass->SetFlipHorizontal(false);
	Brick_111_BrickClass->SetFlipVertical(false);
	Brick_111_BrickClass->SetLifeTime(0.0f);
	Brick_111_BrickClass->SetVisible(true);
	Brick_111_BrickClass->SetRotationAngle(0.0f);
	Brick_111_BrickClass->SetScale(1.0f, 1.0f);
	Brick_111_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_111_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_111_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_111_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_111_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_111_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_111_BrickClass);


}
void Level0_Layer1_Sprite34(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_112_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_112_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_112_BrickClass->SetName("Brick");
	Brick_112_BrickClass->SetCollisionActorIndex(1);
	Brick_112_BrickClass->SetOpacity(1.0f);
	Brick_112_BrickClass->Play(true);
	Brick_112_BrickClass->SetPosition(Point2D(-106.0f ,55.0f));
	Brick_112_BrickClass->SetCurrentAnimationIndex(0);
	Brick_112_BrickClass->SetCurrentFrameIndex(0);
	Brick_112_BrickClass->SetLoop(true);
	Brick_112_BrickClass->SetAnimationSpeed(1.0f);
	Brick_112_BrickClass->SetFlipHorizontal(false);
	Brick_112_BrickClass->SetFlipVertical(false);
	Brick_112_BrickClass->SetLifeTime(0.0f);
	Brick_112_BrickClass->SetVisible(true);
	Brick_112_BrickClass->SetRotationAngle(0.0f);
	Brick_112_BrickClass->SetScale(1.0f, 1.0f);
	Brick_112_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_112_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_112_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_112_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_112_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_112_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_112_BrickClass);


}
void Level0_Layer1_Sprite35(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_113_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_113_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_113_BrickClass->SetName("Brick");
	Brick_113_BrickClass->SetCollisionActorIndex(1);
	Brick_113_BrickClass->SetOpacity(1.0f);
	Brick_113_BrickClass->Play(true);
	Brick_113_BrickClass->SetPosition(Point2D(-37.0f ,55.0f));
	Brick_113_BrickClass->SetCurrentAnimationIndex(0);
	Brick_113_BrickClass->SetCurrentFrameIndex(0);
	Brick_113_BrickClass->SetLoop(true);
	Brick_113_BrickClass->SetAnimationSpeed(1.0f);
	Brick_113_BrickClass->SetFlipHorizontal(false);
	Brick_113_BrickClass->SetFlipVertical(false);
	Brick_113_BrickClass->SetLifeTime(0.0f);
	Brick_113_BrickClass->SetVisible(true);
	Brick_113_BrickClass->SetRotationAngle(0.0f);
	Brick_113_BrickClass->SetScale(1.0f, 1.0f);
	Brick_113_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_113_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_113_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_113_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_113_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_113_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_113_BrickClass);


}
void Level0_Layer1_Sprite36(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_114_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_114_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_114_BrickClass->SetName("Brick");
	Brick_114_BrickClass->SetCollisionActorIndex(1);
	Brick_114_BrickClass->SetOpacity(1.0f);
	Brick_114_BrickClass->Play(true);
	Brick_114_BrickClass->SetPosition(Point2D(32.0f ,55.0f));
	Brick_114_BrickClass->SetCurrentAnimationIndex(0);
	Brick_114_BrickClass->SetCurrentFrameIndex(0);
	Brick_114_BrickClass->SetLoop(true);
	Brick_114_BrickClass->SetAnimationSpeed(1.0f);
	Brick_114_BrickClass->SetFlipHorizontal(false);
	Brick_114_BrickClass->SetFlipVertical(false);
	Brick_114_BrickClass->SetLifeTime(0.0f);
	Brick_114_BrickClass->SetVisible(true);
	Brick_114_BrickClass->SetRotationAngle(0.0f);
	Brick_114_BrickClass->SetScale(1.0f, 1.0f);
	Brick_114_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_114_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_114_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_114_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_114_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_114_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_114_BrickClass);


}
void Level0_Layer1_Sprite37(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_115_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_115_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_115_BrickClass->SetName("Brick");
	Brick_115_BrickClass->SetCollisionActorIndex(1);
	Brick_115_BrickClass->SetOpacity(1.0f);
	Brick_115_BrickClass->Play(true);
	Brick_115_BrickClass->SetPosition(Point2D(101.0f ,55.0f));
	Brick_115_BrickClass->SetCurrentAnimationIndex(0);
	Brick_115_BrickClass->SetCurrentFrameIndex(0);
	Brick_115_BrickClass->SetLoop(true);
	Brick_115_BrickClass->SetAnimationSpeed(1.0f);
	Brick_115_BrickClass->SetFlipHorizontal(false);
	Brick_115_BrickClass->SetFlipVertical(false);
	Brick_115_BrickClass->SetLifeTime(0.0f);
	Brick_115_BrickClass->SetVisible(true);
	Brick_115_BrickClass->SetRotationAngle(0.0f);
	Brick_115_BrickClass->SetScale(1.0f, 1.0f);
	Brick_115_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_115_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_115_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_115_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_115_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_115_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_115_BrickClass);


}
void Level0_Layer1_Sprite38(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_116_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_116_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_116_BrickClass->SetName("Brick");
	Brick_116_BrickClass->SetCollisionActorIndex(1);
	Brick_116_BrickClass->SetOpacity(1.0f);
	Brick_116_BrickClass->Play(true);
	Brick_116_BrickClass->SetPosition(Point2D(170.0f ,55.0f));
	Brick_116_BrickClass->SetCurrentAnimationIndex(0);
	Brick_116_BrickClass->SetCurrentFrameIndex(0);
	Brick_116_BrickClass->SetLoop(true);
	Brick_116_BrickClass->SetAnimationSpeed(1.0f);
	Brick_116_BrickClass->SetFlipHorizontal(false);
	Brick_116_BrickClass->SetFlipVertical(false);
	Brick_116_BrickClass->SetLifeTime(0.0f);
	Brick_116_BrickClass->SetVisible(true);
	Brick_116_BrickClass->SetRotationAngle(0.0f);
	Brick_116_BrickClass->SetScale(1.0f, 1.0f);
	Brick_116_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_116_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_116_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_116_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_116_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_116_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_116_BrickClass);


}
void Level0_Layer1_Sprite39(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_117_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_117_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_117_BrickClass->SetName("Brick");
	Brick_117_BrickClass->SetCollisionActorIndex(1);
	Brick_117_BrickClass->SetOpacity(1.0f);
	Brick_117_BrickClass->Play(true);
	Brick_117_BrickClass->SetPosition(Point2D(239.0f ,55.0f));
	Brick_117_BrickClass->SetCurrentAnimationIndex(0);
	Brick_117_BrickClass->SetCurrentFrameIndex(0);
	Brick_117_BrickClass->SetLoop(true);
	Brick_117_BrickClass->SetAnimationSpeed(1.0f);
	Brick_117_BrickClass->SetFlipHorizontal(false);
	Brick_117_BrickClass->SetFlipVertical(false);
	Brick_117_BrickClass->SetLifeTime(0.0f);
	Brick_117_BrickClass->SetVisible(true);
	Brick_117_BrickClass->SetRotationAngle(0.0f);
	Brick_117_BrickClass->SetScale(1.0f, 1.0f);
	Brick_117_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_117_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_117_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_117_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_117_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_117_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_117_BrickClass);


}
void Level0_Layer1_Sprite40(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> paddleAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Paddle.png",1,1,frames);
	anim->SetName("Paddle");
	paddleAnimations.push_back(anim);
	frames.clear();
	paddle_4_PaddleClass = new PaddleClass(paddleAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor02);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(true);
		paddle_4_PaddleClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	paddle_4_PaddleClass->SetName("paddle");
	paddle_4_PaddleClass->SetCollisionActorIndex(2);
	paddle_4_PaddleClass->SetOpacity(1.0f);
	paddle_4_PaddleClass->Play(true);
	paddle_4_PaddleClass->SetPosition(Point2D(0.0f ,-200.0f));
	paddle_4_PaddleClass->SetCurrentAnimationIndex(0);
	paddle_4_PaddleClass->SetCurrentFrameIndex(0);
	paddle_4_PaddleClass->SetLoop(true);
	paddle_4_PaddleClass->SetAnimationSpeed(1.0f);
	paddle_4_PaddleClass->SetFlipHorizontal(false);
	paddle_4_PaddleClass->SetFlipVertical(false);
	paddle_4_PaddleClass->SetLifeTime(0.0f);
	paddle_4_PaddleClass->SetVisible(true);
	paddle_4_PaddleClass->SetRotationAngle(0.0f);
	paddle_4_PaddleClass->SetScale(1.0f, 1.0f);
	paddle_4_PaddleClass->SetCenter(Point2D(0.0f,0.0f));
	paddle_4_PaddleClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		paddle_4_PaddleClass->SetCenter(Point2D(0.0f,0.0f));
		paddle_4_PaddleClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		paddle_4_PaddleClass->SetVelocity(Vector2D(0.0f,0.0f));
		paddle_4_PaddleClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(paddle_4_PaddleClass);


}
void Level0_Layer1_Sprite41(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> ballAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Ball.png",1,1,frames);
	anim->SetName("Ball");
	ballAnimations.push_back(anim);
	frames.clear();
	ball_6_BallClass = new BallClass(ballAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor03);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(true);
		ball_6_BallClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	ball_6_BallClass->SetName("ball");
	ball_6_BallClass->SetCollisionActorIndex(3);
	ball_6_BallClass->SetOpacity(1.0f);
	ball_6_BallClass->Play(true);
	ball_6_BallClass->SetPosition(Point2D(1.0f ,-176.0f));
	ball_6_BallClass->SetCurrentAnimationIndex(0);
	ball_6_BallClass->SetCurrentFrameIndex(0);
	ball_6_BallClass->SetLoop(true);
	ball_6_BallClass->SetAnimationSpeed(1.0f);
	ball_6_BallClass->SetFlipHorizontal(false);
	ball_6_BallClass->SetFlipVertical(false);
	ball_6_BallClass->SetLifeTime(0.0f);
	ball_6_BallClass->SetVisible(true);
	ball_6_BallClass->SetRotationAngle(0.0f);
	ball_6_BallClass->SetScale(1.0f, 1.0f);
	ball_6_BallClass->SetCenter(Point2D(0.0f,0.0f));
	ball_6_BallClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		ball_6_BallClass->SetCenter(Point2D(0.0f,0.0f));
		ball_6_BallClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		ball_6_BallClass->SetVelocity(Vector2D(0.0f,0.0f));
		ball_6_BallClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(ball_6_BallClass);


}
void Level0_Layer1_Sprite42(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> BrickAnimations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Brick.png",1,1,frames);
	anim->SetName("Brick");
	BrickAnimations.push_back(anim);
	frames.clear();
	Brick_78_BrickClass = new BrickClass(BrickAnimations);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		DynamicObject * dynamicCollisionData = new DynamicObject;
		dynamicCollisionData->AddCollisionData(mlf->collisionActor01);
		dynamicCollisionData->SetCollisionType(true);
		dynamicCollisionData->SetCollisionThickness(4.0f);
		dynamicCollisionData->SetBoundingRectangleCheckingTileMap(true);
		dynamicCollisionData->SetZCollision(0);
		dynamicCollisionData->SetCanCollid(0,true);
		dynamicCollisionData->SetUpdateOnIdle(false);
		Brick_78_BrickClass->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	Brick_78_BrickClass->SetName("Brick");
	Brick_78_BrickClass->SetCollisionActorIndex(1);
	Brick_78_BrickClass->SetOpacity(1.0f);
	Brick_78_BrickClass->Play(true);
	Brick_78_BrickClass->SetPosition(Point2D(-244.0f ,203.0f));
	Brick_78_BrickClass->SetCurrentAnimationIndex(0);
	Brick_78_BrickClass->SetCurrentFrameIndex(0);
	Brick_78_BrickClass->SetLoop(true);
	Brick_78_BrickClass->SetAnimationSpeed(1.0f);
	Brick_78_BrickClass->SetFlipHorizontal(false);
	Brick_78_BrickClass->SetFlipVertical(false);
	Brick_78_BrickClass->SetLifeTime(0.0f);
	Brick_78_BrickClass->SetVisible(true);
	Brick_78_BrickClass->SetRotationAngle(0.0f);
	Brick_78_BrickClass->SetScale(1.0f, 1.0f);
	Brick_78_BrickClass->SetCenter(Point2D(0.0f,0.0f));
	Brick_78_BrickClass->SetZOrder(1.0f);
	
	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
		Brick_78_BrickClass->SetCenter(Point2D(0.0f,0.0f));
		Brick_78_BrickClass->AddPhysicalProperties(Physics2D::MassProperties(1.0f,0.0f,Point2D(0.0f,0.0f)),Physics2D::ODESolverMethodEuler);
		Brick_78_BrickClass->SetVelocity(Vector2D(0.0f,0.0f));
		Brick_78_BrickClass->SetAngularVelocity(0.0f);
	}

	mlf->layer1_Layer->AddGameObject(Brick_78_BrickClass);


}


//ParticleSystems Setters
void Level0_Layer1_ParticleSystem0(MyLevelFactory *mlf)
{
	ParticleEmitter * pe = new CircleEmitter(Point2D(0.0f, 0.0f), 8.0f);
	ballparticle_132_ParticleSystem = new ParticleSystem(Game::GetInstance()->GetDirectory() + "\\Resources\\ParticleSystems\\Particle_Texture.png", 1024, 256, Vector2D(0.0f, 0.0));
	ballparticle_132_ParticleSystem->SetEmitter(pe);

	ballparticle_132_ParticleSystem->SetName("ballparticle");
	ballparticle_132_ParticleSystem->SetLifeTime(0.0f);
	ballparticle_132_ParticleSystem->SetZOrder(0.9f);
	ballparticle_132_ParticleSystem->SetPosition(2.0f, -177.0f);
	ballparticle_132_ParticleSystem->SetRotationAngle(0.0f);
	ballparticle_132_ParticleSystem->SetScale(1.0f, 1.0f);
	ballparticle_132_ParticleSystem->SetCenter(Point2D(0.0f,0.0f));
	ballparticle_132_ParticleSystem->SetVisible(true);
	ballparticle_132_ParticleSystem->SetRecycleParticles(true);
	ballparticle_132_ParticleSystem->SetEmissionRate(256.0f, 256.0f);
	ballparticle_132_ParticleSystem->SetSrcBlendFactor(ParticleSystem::BlendFactorSrcAlpha);
	ballparticle_132_ParticleSystem->SetDstBlendFactor(ParticleSystem::BlendFactorInvSrcAlpha);
	ballparticle_132_ParticleSystem->SetParticleStartingColor(Color(1.0f, 1.0f, 1.0f, 1.0f), Color(1.0f, 1.0f, 1.0f, 1.0f));
	ballparticle_132_ParticleSystem->SetParticleEndingColor(Color(1.0f, 1.0f, 1.0f, 0.0f), Color(1.0f, 1.0f, 1.0f, 0.0f));
	ballparticle_132_ParticleSystem->SetParticleLifeTime(0.1f, 0.6f);
	ballparticle_132_ParticleSystem->SetParticleSpeed(4.0f, 6.0f);
	ballparticle_132_ParticleSystem->SetParticleDirection(ParticleSystem::VelocityDirection);
	ballparticle_132_ParticleSystem->SetParticleStartingScale(Vector2D(1.0f, 1.0f), Vector2D(1.0f, 1.0f));
	ballparticle_132_ParticleSystem->SetParticleEndingScale(Vector2D(1.0f, 1.0f), Vector2D(1.0f, 1.0f));
	ballparticle_132_ParticleSystem->SetUseLocalCoordinates(false);
	ballparticle_132_ParticleSystem->WarmUp(0.0f);
	mlf->layer1_Layer->AddGameObject(ballparticle_132_ParticleSystem);


}
void Level0_Layer1_ParticleSystem1(MyLevelFactory *mlf)
{
	ParticleEmitter * pe = new FilledRectangleEmitter(0.0f, 0.0f, 32.0f, 16.0f);
	masterps_133_ParticleSystem = new ParticleSystem(Game::GetInstance()->GetDirectory() + "\\Resources\\ParticleSystems\\Particle_Texture.png", 64, 256, Vector2D(0.0f, 0.0));
	masterps_133_ParticleSystem->SetEmitter(pe);

	masterps_133_ParticleSystem->SetName("masterps");
	masterps_133_ParticleSystem->SetLifeTime(0.0f);
	masterps_133_ParticleSystem->SetZOrder(2.0f);
	masterps_133_ParticleSystem->SetPosition(6.0f, 47.0f);
	masterps_133_ParticleSystem->SetRotationAngle(0.0f);
	masterps_133_ParticleSystem->SetScale(1.0f, 1.0f);
	masterps_133_ParticleSystem->SetCenter(Point2D(0.0f,0.0f));
	masterps_133_ParticleSystem->SetVisible(false);
	masterps_133_ParticleSystem->SetRecycleParticles(true);
	masterps_133_ParticleSystem->SetEmissionRate(256.0f, 256.0f);
	masterps_133_ParticleSystem->SetSrcBlendFactor(ParticleSystem::BlendFactorSrcAlpha);
	masterps_133_ParticleSystem->SetDstBlendFactor(ParticleSystem::BlendFactorInvSrcAlpha);
	masterps_133_ParticleSystem->SetParticleStartingColor(Color(0.0f, 1.0f, 0.0f, 1.0f), Color(0.4f, 1.0f, 0.4f, 1.0f));
	masterps_133_ParticleSystem->SetParticleEndingColor(Color(0.0f, 0.8f, 0.0f, 0.0f), Color(0.0f, 0.6f, 0.0f, 0.0f));
	masterps_133_ParticleSystem->SetParticleLifeTime(0.8f, 1.2f);
	masterps_133_ParticleSystem->SetParticleSpeed(0.0f, 50.0f);
	masterps_133_ParticleSystem->SetParticleDirection(ParticleSystem::VelocityDirection);
	masterps_133_ParticleSystem->SetParticleStartingScale(Vector2D(0.5f, 0.5f), Vector2D(0.5f, 0.5f));
	masterps_133_ParticleSystem->SetParticleEndingScale(Vector2D(1.5f, 1.5f), Vector2D(1.5f, 1.5f));
	masterps_133_ParticleSystem->SetUseLocalCoordinates(true);
	masterps_133_ParticleSystem->WarmUp(0.0f);
	mlf->layer1_Layer->AddGameObject(masterps_133_ParticleSystem);


}


//Joints Setters

void MyLevelFactory::Level0_Layer1_StaticCollision()
{
	layer1_Layer->ReadInformation_StaticCollision(Game::GetInstance()->GetDirectory() + "\\Resources\\Layers Collisions\\level0_layer1.txt");
}

void MyLevelFactory::Set_Level0_Layer1_Objects()
{
	 Level0_Layer1_Text0(this);
	 Level0_Layer1_Text1(this);

	 Level0_Layer1_Sound0(this);
	 Level0_Layer1_Sound1(this);

	 Level0_Layer1_Sprite0(this);
	 Level0_Layer1_Sprite1(this);
	 Level0_Layer1_Sprite2(this);
	 Level0_Layer1_Sprite3(this);
	 Level0_Layer1_Sprite4(this);
	 Level0_Layer1_Sprite5(this);
	 Level0_Layer1_Sprite6(this);
	 Level0_Layer1_Sprite7(this);
	 Level0_Layer1_Sprite8(this);
	 Level0_Layer1_Sprite9(this);
	 Level0_Layer1_Sprite10(this);
	 Level0_Layer1_Sprite11(this);
	 Level0_Layer1_Sprite12(this);
	 Level0_Layer1_Sprite13(this);
	 Level0_Layer1_Sprite14(this);
	 Level0_Layer1_Sprite15(this);
	 Level0_Layer1_Sprite16(this);
	 Level0_Layer1_Sprite17(this);
	 Level0_Layer1_Sprite18(this);
	 Level0_Layer1_Sprite19(this);
	 Level0_Layer1_Sprite20(this);
	 Level0_Layer1_Sprite21(this);
	 Level0_Layer1_Sprite22(this);
	 Level0_Layer1_Sprite23(this);
	 Level0_Layer1_Sprite24(this);
	 Level0_Layer1_Sprite25(this);
	 Level0_Layer1_Sprite26(this);
	 Level0_Layer1_Sprite27(this);
	 Level0_Layer1_Sprite28(this);
	 Level0_Layer1_Sprite29(this);
	 Level0_Layer1_Sprite30(this);
	 Level0_Layer1_Sprite31(this);
	 Level0_Layer1_Sprite32(this);
	 Level0_Layer1_Sprite33(this);
	 Level0_Layer1_Sprite34(this);
	 Level0_Layer1_Sprite35(this);
	 Level0_Layer1_Sprite36(this);
	 Level0_Layer1_Sprite37(this);
	 Level0_Layer1_Sprite38(this);
	 Level0_Layer1_Sprite39(this);
	 Level0_Layer1_Sprite40(this);
	 Level0_Layer1_Sprite41(this);
	 Level0_Layer1_Sprite42(this);

	 Level0_Layer1_ParticleSystem0(this);
	 Level0_Layer1_ParticleSystem1(this);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level0_Layer1_StaticCollision();
}
