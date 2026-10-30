#include "StopWatchRunningScene.h"
#include "MochinekoEngine/ObjectManager.h"
#include "MochinekoEngine/InputManager.h"
#include <format>

StopWatchRunningScene::StopWatchRunningScene()
	: MiniGameRunningScene("StopWatchRunningScene") {
	isRunningTimer_ = false;
	timerText_ = nullptr;
	timer_ = 0;
}

StopWatchRunningScene::~StopWatchRunningScene()
{
}

void StopWatchRunningScene::Init() {
	ObjectManager::AddObject(new FBX("stage.fbx"));
	ObjectManager::AddObject(new FBX("playerStage.fbx"));
	ObjectManager::AddObject(new FBX("playerTest.fbx"));
	
	//const std::wstring fontName, const int fontSize, const std::wstring& text, const Color& color
	timerText_ = new FontText(L"メイリオ", 30, L"", Color::Red());
	timerText_->SetDrawOrder(1000);
	ObjectManager::AddObject(timerText_);
}

void StopWatchRunningScene::Update() {
	if (InputManager::CheckDownKey(DIK_SPACE)) {
		isRunningTimer_ = !isRunningTimer_;
	}

	if (isRunningTimer_) {
		timer_ += MochinekoEngine::GetDeltaTime();

		int hour = timer_ / 3600;
		int min = ((int) timer_ % 3600) / 60;
		int sec = (int) timer_ % 60;
		int mili = (int)((timer_ - (int)timer_) * 1000);
		std::string drawText = std::format("{:02d}:{:02d}:{:02d}:{:03d}", hour, min, sec, mili);
		timerText_->SetText(std::wstring(drawText.begin(), drawText.end()));
	}

}

void StopWatchRunningScene::Draw() {

}
