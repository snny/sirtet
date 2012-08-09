#include "ControlStatBoard.h"
#include "const.h"

using namespace cocos2d;

bool ControlStatBoard::init()
{
	m_pLevelLabel = m_pScoreLabel = NULL;

	bool bRet = false;
	do
	{
		CCMenuItemFont::setFontName("Lucida console");
		CCMenuItemFont::setFontSize(20);

		CCMenuItemFont* pPause = CCMenuItemFont::create("pause", this, menu_selector(ControlStatBoard::pauseGame));
		CC_BREAK_IF(!pPause);
		CCMenuItemFont* pStart = CCMenuItemFont::create("start", this, menu_selector(ControlStatBoard::pauseGame));
		CC_BREAK_IF(!pStart);
		CCMenu* pMenuCtrl = CCMenu::create(pStart, pPause, NULL);
		CC_BREAK_IF(!pMenuCtrl);
		pMenuCtrl->alignItemsVertically();
		this->addChild(pMenuCtrl, 1, 0);
		pMenuCtrl->setPosition(ccp(MAIN_BOARD_W-32, 130));

		m_pLevelLabel = CCLabelTTF::create();
		m_pLevelLabel->initWithString("level1", "Lucida console", 16.0);
		this->addChild(m_pLevelLabel, 1, 1);
		m_pLevelLabel->setPosition(ccp(MAIN_BOARD_W-32, MAIN_BOARD_H-80));

		m_pScoreLabel = CCLabelTTF::create();
		m_pScoreLabel->initWithString("10000", "Lucida console", 16.0);
		this->addChild(m_pScoreLabel, 1, 2);
		m_pScoreLabel->setPosition(ccp(MAIN_BOARD_W-32, MAIN_BOARD_H-110));
		
		
		CCSprite* pDirNormal = CCSprite::create("dirNormal.png");
		CC_BREAK_IF(!pDirNormal);
		CCSprite* pDirSelected = CCSprite::create("dirSelected.png");
		CC_BREAK_IF(!pDirSelected);

		CCMenuItemImage *pUpItem = CCMenuItemImage::create();
		CC_BREAK_IF(!pUpItem);
		pUpItem->initWithNormalSprite(pDirNormal, pDirSelected, NULL, this, menu_selector(ControlStatBoard::moveLeft));


		CCSprite* pDirNormal1 = CCSprite::create("dirNormal.png");
		CC_BREAK_IF(!pDirNormal1);
		CCSprite* pDirSelected1 = CCSprite::create("dirSelected.png");
		CC_BREAK_IF(!pDirSelected1);

        CCMenuItemImage *pLeftItem = CCMenuItemImage::create();
		CC_BREAK_IF(!pLeftItem);
		pDirNormal1->setRotation(-90.0);
		pDirSelected1->setRotation(-90.0);
		pLeftItem->initWithNormalSprite(pDirNormal1, pDirSelected1, NULL, this, menu_selector(ControlStatBoard::moveLeft));


        CCMenu* pMenuDir = CCMenu::create(pUpItem, pLeftItem, NULL);
		pMenuDir->alignItemsHorizontallyWithPadding(20);
        CC_BREAK_IF(! pMenuDir);
        this->addChild(pMenuDir, 1, 3);
		pMenuDir->setPosition(ccp(MAIN_BOARD_W-32, 60));
	
		m_pLevelLabel->setString("level9");

		bRet = true;
	} while(0);

	return bRet;
}

void ControlStatBoard::pauseGame(CCObject* pSender)
{

}

void ControlStatBoard::moveLeft(CCObject* pSender)
{

}