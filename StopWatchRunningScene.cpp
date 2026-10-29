#include "StopWatchRunningScene.h"
#include "MochinekoEngine/ObjectManager.h"

StopWatchRunningScene::StopWatchRunningScene()
	: MiniGameRunningScene("StopWatchRunningScene") {

}

StopWatchRunningScene::~StopWatchRunningScene()
{
}

void StopWatchRunningScene::Init() {
	ObjectManager::AddObject(new FBX("stage.fbx"));
}

void StopWatchRunningScene::Update()
{
}

void StopWatchRunningScene::Draw()
{
}
