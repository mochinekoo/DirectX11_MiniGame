#pragma once
#include "MiniGameRunningScene.h"
#include "MochinekoEngine/BaseScene.h"
#include "MochinekoEngine/FBX.h"
#include "MochinekoEngine/FontText.h"

class StopWatchRunningScene : public MiniGameRunningScene {
private:
	bool isRunningTimer_;
	float timer_;
	FontText* timerText_;
public:

	StopWatchRunningScene();
	~StopWatchRunningScene();

	void Init() override;
	void Update() override;
	void Draw() override;

};

