#ifndef __SIRTET_GAMEBOARD_H__
#define __SIRTET_GAMEBOARD_H__

#include "cocos2d.h"

class GameBoard : public cocos2d::CCLayer
{
public:
	virtual bool init();

	LAYER_CREATE_FUNC(GameBoard);
};

#endif // __SIRTET_GAMEBOARD_H__