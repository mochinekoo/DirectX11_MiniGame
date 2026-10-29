#pragma once
#include "MiniGameRunningScene.h"
#include "MochinekoEngine/BaseScene.h"
#include "MochinekoEngine/FBX.h"

class StopWatchRunningScene : public MiniGameRunningScene {
private:
public:

	StopWatchRunningScene();
	~StopWatchRunningScene();

	void Init() override;
	void Update() override;
	void Draw() override;

};

