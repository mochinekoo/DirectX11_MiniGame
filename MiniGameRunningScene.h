#pragma once
#include "MochinekoEngine/BaseScene.h"
#include <string>

class MiniGameRunningScene : public BaseScene {
private:
public:

	MiniGameRunningScene(const std::string name)
		: BaseScene(name) {

	};
	~MiniGameRunningScene() {};

	virtual void Init() override {};
	virtual void Update() override {};
	virtual void Draw() override {};
};