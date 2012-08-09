#include "GameBoard.h"
#include "const.h"

using namespace cocos2d;

bool GameBoard::init()
{
	bool bRet = false;
	do
	{
		CC_BREAK_IF(! CCLayer::init() );

		this->getContentSize();
		//this->changeWidthAndHeight(GAME_BOARD_W,GAME_BOARD_H);

		bRet = true;
	} while(0);

	return bRet;
}

void GameBoard::draw()
{
	CCLayer::draw();

	//glColor4f(0.0, 0.0, 1.0, 0.5);
	ccDrawRect(ccp(0,0), ccp(GAME_BOARD_W, GAME_BOARD_H));
}

void GameBoard::menuCloseCallback(CCObject* pSender)
{
	CCDirector::sharedDirector()->end();
}