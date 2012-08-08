#include "GameBoard.h"

using namespace cocos2d;

bool GameBoard::init()
{
	bool bRet = false;
	do
	{
		CC_BREAK_IF(!CCLayer::init());

		CCSize size = CCDirector::sharedDirector()->getWinSize();
		ccDrawRect(ccp(0,0), ccp(size.width, size.height));

		bRet = true;
	} while(0);

	return bRet;
}