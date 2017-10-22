#pragma once
#include "LogicNormal.h"
class LogicNormalNonTorusMP : public LogicNormal
{
private:
	virtual void loopWithBorderCheck(int x0, int x1, int y0, int y1) override;
	virtual void loopWithoutBorderCheck(int x0, int x1, int y0, int y1) override;

public:
	LogicNormalNonTorusMP(int worldWidth, int worldHeight);
	virtual ~LogicNormalNonTorusMP() override;
};

