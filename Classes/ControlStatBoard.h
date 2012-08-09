#ifndef __SIRTET_CONTROLSTAT_BOARD_H__
#define __SIRTET_CONTROLSTAT_BOARD_H__

#include "cocos2d.h"

class ControlStatBoard : public cocos2d::CCLayer
{
public:
	virtual bool init();

	void pauseGame(CCObject* pSender);
	void moveLeft(CCObject* pSender);

	LAYER_CREATE_FUNC(ControlStatBoard);

private:
	cocos2d::CCLabelTTF* m_pLevelLabel;
	cocos2d::CCLabelTTF* m_pScoreLabel;
};

#endif // __SIRTET_CONTROLSTAT_BAORD_H__