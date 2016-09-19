﻿#ifndef __STATE_LAYER_H__
#define __STATE_LAYER_H__

#include "cocos2d.h"
#include "GameLayer.h"
#include "Number.h"

USING_NS_CC;

const string NUMBER_SCORE = "number_score";
const string NUMBER_FONT = "font";

class StatusLayer : public Layer ,public StatusDelegate
{
public:
	virtual bool init();

	void onGameStart();
	void onGamePlaying(int score);
	void onGameEnd(int curScore, int bestScore);

	CREATE_FUNC(StatusLayer);
private:
	Size visibleSize;
	Vec2 origin;

	int currentScore;
	int m_bestScore;
	bool isNewRecord;

	Sprite* scoreSprite;
	Sprite* textReady;
	Sprite* tutorial;
	Sprite* whiteSprite;

	void blinkFullScreen();
	void fadeInGameOver();
};

#endif