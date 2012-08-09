#include "const.h"
#include "MainBoardScene.h"
#include "GameBoard.h"
#include "ControlStatBoard.h"

using namespace cocos2d;

CCScene* MainBoardScene::scene()
{
	CCScene* scene = NULL;
	do
	{
		scene = CCScene::create();
		CC_BREAK_IF(!scene);

		MainBoardScene* lyMainBoard = MainBoardScene::create();
		CC_BREAK_IF(!lyMainBoard);

		scene->addChild(lyMainBoard);
	} while(0);
	
	return scene;
}

bool MainBoardScene::init()
{
	bool bRet = false;
	do
	{
		CC_BREAK_IF(!CCLayer::init());

		GameBoard* lyGameBoard = GameBoard::create();
		CC_BREAK_IF(!lyGameBoard);
		lyGameBoard->setPosition(ccp(GAME_BOARD_MARGIN, GAME_BOARD_MARGIN));
		this->addChild(lyGameBoard, 1);

		ControlStatBoard* lyControlStat = ControlStatBoard::create();
		CC_BREAK_IF(!lyControlStat);
		this->addChild(lyControlStat, 2);

		bRet = true;
	} while(0);

	return bRet;
}