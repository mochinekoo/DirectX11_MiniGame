#include "TitleScene.h"
#include "StopWatchRunningScene.h"
#include "MochinekoEngine/InputManager.h"
#include "MochinekoEngine/SceneManager.h"

TitleScene::TitleScene()
	: BaseScene("TitleScene") {
}

TitleScene::~TitleScene()
{
}

void TitleScene::Init()
{
}

void TitleScene::Update() {
	if (InputManager::CheckDownKey(DIK_0)) {
		SceneManager::ChangeScene("StopWatchRunningScene");
	}
}

void TitleScene::Draw()
{
}
