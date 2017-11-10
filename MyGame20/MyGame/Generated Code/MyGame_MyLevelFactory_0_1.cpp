#include "MyGame_MainDeclarations.h"
#include "MyGame_Declarations.h"
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

//Sounds Setters

//Sprites Setters
void Level0_Layer1_Sprite0(MyLevelFactory *mlf)
{
	std::vector<ProjectFun::SpriteAnimationPtr> sprite0Animations;
	SpriteAnimationPtr anim;
	std::vector<float> frames;
	frames.push_back(1.0f);
	anim = new SpriteAnimation(Game::GetInstance()->GetDirectory() + "\\Resources\\Animations\\Animation0.png",1,1,frames);
	anim->SetName("Animation0");
	sprite0Animations.push_back(anim);
	frames.clear();
	sprite0_164_Sprite_Class0 = new Sprite_Class0(sprite0Animations);

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
		sprite0_164_Sprite_Class0->AddCollision(dynamicCollisionData, mlf->layer1_Layer->GetCollisionId());
	}

	sprite0_164_Sprite_Class0->SetName("sprite0");
	sprite0_164_Sprite_Class0->SetCollisionActorIndex(0);
	sprite0_164_Sprite_Class0->SetOpacity(1.0f);
	sprite0_164_Sprite_Class0->Play(false);
	sprite0_164_Sprite_Class0->SetPosition(Point2D(0.0f ,0.0f));
	sprite0_164_Sprite_Class0->SetCurrentAnimationIndex(0);
	sprite0_164_Sprite_Class0->SetCurrentFrameIndex(0);
	sprite0_164_Sprite_Class0->SetLoop(false);
	sprite0_164_Sprite_Class0->SetAnimationSpeed(1.0f);
	sprite0_164_Sprite_Class0->SetFlipHorizontal(false);
	sprite0_164_Sprite_Class0->SetFlipVertical(false);
	sprite0_164_Sprite_Class0->SetLifeTime(0.0f);
	sprite0_164_Sprite_Class0->SetVisible(true);
	sprite0_164_Sprite_Class0->SetRotationAngle(0.0f);
	sprite0_164_Sprite_Class0->SetScale(1.0f, 1.0f);
	sprite0_164_Sprite_Class0->SetCenter(Point2D(0.0f,0.0f));
	sprite0_164_Sprite_Class0->SetZOrder(0.0f);
	
	mlf->layer1_Layer->AddGameObject(sprite0_164_Sprite_Class0);


}


//ParticleSystems Setters
void Level0_Layer1_ParticleSystem0(MyLevelFactory *mlf)
{
	ParticleEmitter * pe = new PointEmitter(Point2D(0.0f, 0.0f), 0.0f, 360.0f);
	particleSystem0_162_ParticleSystem = new ParticleSystem(Game::GetInstance()->GetDirectory() + "\\Resources\\ParticleSystems\\Particle_Texture.png", 256, 256, Vector2D(0.0f, 0.0));
	particleSystem0_162_ParticleSystem->SetEmitter(pe);

	particleSystem0_162_ParticleSystem->SetName("particleSystem0");
	particleSystem0_162_ParticleSystem->SetLifeTime(0.0f);
	particleSystem0_162_ParticleSystem->SetZOrder(0.0f);
	particleSystem0_162_ParticleSystem->SetPosition(-254.0f, -9.0f);
	particleSystem0_162_ParticleSystem->SetRotationAngle(0.0f);
	particleSystem0_162_ParticleSystem->SetScale(1.0f, 1.0f);
	particleSystem0_162_ParticleSystem->SetCenter(Point2D(0.0f,0.0f));
	particleSystem0_162_ParticleSystem->SetVisible(true);
	particleSystem0_162_ParticleSystem->SetRecycleParticles(true);
	particleSystem0_162_ParticleSystem->SetEmissionRate(64.0f, 5000.0f);
	particleSystem0_162_ParticleSystem->SetSrcBlendFactor(ParticleSystem::BlendFactorSrcAlpha);
	particleSystem0_162_ParticleSystem->SetDstBlendFactor(ParticleSystem::BlendFactorInvSrcAlpha);
	particleSystem0_162_ParticleSystem->SetParticleStartingColor(Color(1.0f, 1.0f, 0.2f, 1.0f), Color(1.0f, 0.6f, 0.2f, 1.0f));
	particleSystem0_162_ParticleSystem->SetParticleEndingColor(Color(1.0f, 1.0f, 0.2f, 0.0f), Color(1.0f, 0.6f, 0.2f, 0.0f));
	particleSystem0_162_ParticleSystem->SetParticleLifeTime(0.0f, 0.0f);
	particleSystem0_162_ParticleSystem->SetParticleSpeed(0.0f, 50.0f);
	particleSystem0_162_ParticleSystem->SetParticleDirection(ParticleSystem::VelocityDirection);
	particleSystem0_162_ParticleSystem->SetParticleStartingScale(Vector2D(1.0f, 1.0f), Vector2D(1.0f, 1.0f));
	particleSystem0_162_ParticleSystem->SetParticleEndingScale(Vector2D(1.0f, 1.0f), Vector2D(1.0f, 1.0f));
	particleSystem0_162_ParticleSystem->SetUseLocalCoordinates(true);
	particleSystem0_162_ParticleSystem->WarmUp(0.0f);
	mlf->layer1_Layer->AddGameObject(particleSystem0_162_ParticleSystem);


}
void Level0_Layer1_ParticleSystem1(MyLevelFactory *mlf)
{
	ParticleEmitter * pe = new LineEmitter(Point2D(0.0f, 0.0f), Point2D(256.0f, 0.0f));
	particleSystem1_165_ParticleSystem = new ParticleSystem(Game::GetInstance()->GetDirectory() + "\\Resources\\ParticleSystems\\Particle_Texture.png", 256, 256, Vector2D(0.0f, 0.0));
	particleSystem1_165_ParticleSystem->SetEmitter(pe);

	particleSystem1_165_ParticleSystem->SetName("particleSystem1");
	particleSystem1_165_ParticleSystem->SetLifeTime(0.0f);
	particleSystem1_165_ParticleSystem->SetZOrder(0.0f);
	particleSystem1_165_ParticleSystem->SetPosition(-16.0f, 64.0f);
	particleSystem1_165_ParticleSystem->SetRotationAngle(0.0f);
	particleSystem1_165_ParticleSystem->SetScale(1.0f, 1.0f);
	particleSystem1_165_ParticleSystem->SetCenter(Point2D(0.0f,0.0f));
	particleSystem1_165_ParticleSystem->SetVisible(true);
	particleSystem1_165_ParticleSystem->SetRecycleParticles(true);
	particleSystem1_165_ParticleSystem->SetEmissionRate(64.0f, 64.0f);
	particleSystem1_165_ParticleSystem->SetSrcBlendFactor(ParticleSystem::BlendFactorSrcAlpha);
	particleSystem1_165_ParticleSystem->SetDstBlendFactor(ParticleSystem::BlendFactorInvSrcAlpha);
	particleSystem1_165_ParticleSystem->SetParticleStartingColor(Color(0.8f, 0.0f, 0.0f, 1.0f), Color(1.0f, 1.0f, 1.0f, 1.0f));
	particleSystem1_165_ParticleSystem->SetParticleEndingColor(Color(1.0f, 1.0f, 1.0f, 0.0f), Color(1.0f, 1.0f, 1.0f, 0.0f));
	particleSystem1_165_ParticleSystem->SetParticleLifeTime(1.0f, 4.0f);
	particleSystem1_165_ParticleSystem->SetParticleSpeed(16.0f, 50.0f);
	particleSystem1_165_ParticleSystem->SetParticleDirection(ParticleSystem::VelocityDirection);
	particleSystem1_165_ParticleSystem->SetParticleStartingScale(Vector2D(1.0f, 1.0f), Vector2D(1.0f, 1.0f));
	particleSystem1_165_ParticleSystem->SetParticleEndingScale(Vector2D(1.0f, 1.0f), Vector2D(1.0f, 1.0f));
	particleSystem1_165_ParticleSystem->SetUseLocalCoordinates(false);
	particleSystem1_165_ParticleSystem->WarmUp(0.0f);
	mlf->layer1_Layer->AddGameObject(particleSystem1_165_ParticleSystem);


}
void Level0_Layer1_ParticleSystem2(MyLevelFactory *mlf)
{
	ParticleEmitter * pe = new PointEmitter(Point2D(0.0f, 0.0f), 0.0f, 360.0f);
	particleSystem2_166_ParticleSystem = new ParticleSystem(Game::GetInstance()->GetDirectory() + "\\Resources\\ParticleSystems\\Particle_Texture.png", 128, 256, Vector2D(0.0f, 0.0));
	particleSystem2_166_ParticleSystem->SetEmitter(pe);

	particleSystem2_166_ParticleSystem->SetName("particleSystem2");
	particleSystem2_166_ParticleSystem->SetLifeTime(0.0f);
	particleSystem2_166_ParticleSystem->SetZOrder(0.0f);
	particleSystem2_166_ParticleSystem->SetPosition(0.0f, 0.0f);
	particleSystem2_166_ParticleSystem->SetRotationAngle(0.0f);
	particleSystem2_166_ParticleSystem->SetScale(1.0f, 1.0f);
	particleSystem2_166_ParticleSystem->SetCenter(Point2D(0.0f,0.0f));
	particleSystem2_166_ParticleSystem->SetVisible(true);
	particleSystem2_166_ParticleSystem->SetRecycleParticles(true);
	particleSystem2_166_ParticleSystem->SetEmissionRate(64.0f, 64.0f);
	particleSystem2_166_ParticleSystem->SetSrcBlendFactor(ParticleSystem::BlendFactorSrcAlpha);
	particleSystem2_166_ParticleSystem->SetDstBlendFactor(ParticleSystem::BlendFactorInvSrcAlpha);
	particleSystem2_166_ParticleSystem->SetParticleStartingColor(Color(1.0f, 1.0f, 1.0f, 1.0f), Color(1.0f, 1.0f, 1.0f, 1.0f));
	particleSystem2_166_ParticleSystem->SetParticleEndingColor(Color(1.0f, 1.0f, 1.0f, 0.0f), Color(1.0f, 1.0f, 1.0f, 0.0f));
	particleSystem2_166_ParticleSystem->SetParticleLifeTime(1.0f, 2.0f);
	particleSystem2_166_ParticleSystem->SetParticleSpeed(16.0f, 16.0f);
	particleSystem2_166_ParticleSystem->SetParticleDirection(ParticleSystem::VelocityDirection);
	particleSystem2_166_ParticleSystem->SetParticleStartingScale(Vector2D(1.0f, 1.0f), Vector2D(1.0f, 1.0f));
	particleSystem2_166_ParticleSystem->SetParticleEndingScale(Vector2D(1.0f, 1.0f), Vector2D(1.0f, 1.0f));
	particleSystem2_166_ParticleSystem->SetUseLocalCoordinates(false);
	particleSystem2_166_ParticleSystem->WarmUp(0.0f);
	mlf->layer1_Layer->AddGameObject(particleSystem2_166_ParticleSystem);


}
void Level0_Layer1_ParticleSystem3(MyLevelFactory *mlf)
{
	ParticleEmitter * pe = new CircleEmitter(Point2D(0.0f, 0.0f), 25.0f);
	glow_167_ParticleSystem = new ParticleSystem(Game::GetInstance()->GetDirectory() + "\\Resources\\ParticleSystems\\Particle_Texture.png", 512, 256, Vector2D(0.0f, 0.0));
	glow_167_ParticleSystem->SetEmitter(pe);

	glow_167_ParticleSystem->SetName("glow");
	glow_167_ParticleSystem->SetLifeTime(0.0f);
	glow_167_ParticleSystem->SetZOrder(0.0f);
	glow_167_ParticleSystem->SetPosition(-213.0f, 147.0f);
	glow_167_ParticleSystem->SetRotationAngle(0.0f);
	glow_167_ParticleSystem->SetScale(1.0f, 1.0f);
	glow_167_ParticleSystem->SetCenter(Point2D(0.0f,0.0f));
	glow_167_ParticleSystem->SetVisible(true);
	glow_167_ParticleSystem->SetRecycleParticles(true);
	glow_167_ParticleSystem->SetEmissionRate(64.0f, 64.0f);
	glow_167_ParticleSystem->SetSrcBlendFactor(ParticleSystem::BlendFactorSrcAlpha);
	glow_167_ParticleSystem->SetDstBlendFactor(ParticleSystem::BlendFactorInvSrcAlpha);
	glow_167_ParticleSystem->SetParticleStartingColor(Color(1.0f, 1.0f, 1.0f, 1.0f), Color(1.0f, 1.0f, 1.0f, 1.0f));
	glow_167_ParticleSystem->SetParticleEndingColor(Color(1.0f, 1.0f, 1.0f, 0.0f), Color(1.0f, 1.0f, 1.0f, 0.0f));
	glow_167_ParticleSystem->SetParticleLifeTime(1.0f, 2.0f);
	glow_167_ParticleSystem->SetParticleSpeed(16.0f, 16.0f);
	glow_167_ParticleSystem->SetParticleDirection(ParticleSystem::VelocityDirection);
	glow_167_ParticleSystem->SetParticleStartingScale(Vector2D(1.0f, 0.1f), Vector2D(1.0f, 0.1f));
	glow_167_ParticleSystem->SetParticleEndingScale(Vector2D(1.0f, 1.0f), Vector2D(1.0f, 1.0f));
	glow_167_ParticleSystem->SetUseLocalCoordinates(false);
	glow_167_ParticleSystem->WarmUp(0.0f);
	mlf->layer1_Layer->AddGameObject(glow_167_ParticleSystem);


}


//Joints Setters

void MyLevelFactory::Level0_Layer1_StaticCollision()
{
	layer1_Layer->ReadInformation_StaticCollision(Game::GetInstance()->GetDirectory() + "\\Resources\\Layers Collisions\\level0_layer1.txt");
}

void MyLevelFactory::Set_Level0_Layer1_Objects()
{
	 Level0_Layer1_Sprite0(this);

	 Level0_Layer1_ParticleSystem0(this);
	 Level0_Layer1_ParticleSystem1(this);
	 Level0_Layer1_ParticleSystem2(this);
	 Level0_Layer1_ParticleSystem3(this);

	if(!GetMyGame()->IsNetworkGame() || GetMyGame()->IsServer())
	{
	}

	Level0_Layer1_StaticCollision();
}
