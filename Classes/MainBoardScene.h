#ifndef __SIRTET_MAINBOARD_SCENE_H__
#define __SIRTET_MAINBOARD_SCENE_H__

#include "cocos2d.h"

class MainBoardScene : public cocos2d::CCLayer
{
public:
	virtual bool init();
	static cocos2d::CCScene* scene();

	LAYER_CREATE_FUNC(MainBoardScene);
};

#endif // __SIRTET_MAINBOARD_SCENE_H__