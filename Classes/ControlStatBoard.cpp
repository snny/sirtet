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
		this->addChild(pMenuCtrl);
		pMenuCtrl->setPosition(ccp(MAIN_BOARD_W-32, 130));

		m_pLevelLabel = CCLabelTTF::create();
		m_pLevelLabel->initWithString("level1", "Consolas", 14.0);
		this->addChild(m_pLevelLabel);
		m_pLevelLabel->setPosition(ccp(MAIN_BOARD_W-32, MAIN_BOARD_H-80));

		m_pScoreLabel = CCLabelTTF::create();
		m_pScoreLabel->initWithString("10000", "Consolas", 14.0);
		this->addChild(m_pScoreLabel);
		m_pScoreLabel->setPosition(ccp(MAIN_BOARD_W-31, MAIN_BOARD_H-110));
		

		CCMenuItemImage *pLeftItem = CCMenuItemImage::create(
			"dirNormal.png",
			"dirSelected.png",
			this, menu_selector(ControlStatBoard::moveLeft));
		CC_BREAK_IF(!pLeftItem);
		CCMenu* pDirLeftMenu = CCMenu::create(pLeftItem, NULL);
		pDirLeftMenu->setPosition(ccp(MAIN_BOARD_W-50, 60));
		this->addChild(pDirLeftMenu);

		CCMenuItemImage *pRightItem = CCMenuItemImage::create(
			"dirNormal.png",
			"dirSelected.png",
			this, menu_selector(ControlStatBoard::moveLeft));
		CC_BREAK_IF(!pRightItem);
		CCMenu* pDirRightMenu = CCMenu::create(pRightItem, NULL);
		pDirRightMenu->setPosition(ccp(MAIN_BOARD_W-20, 60));
		this->addChild(pDirRightMenu);

		CCMenuItemImage *pUpItem = CCMenuItemImage::create(
			"dirNormal.png",
			"dirSelected.png",
			this, menu_selector(ControlStatBoard::moveLeft));
		CC_BREAK_IF(!pUpItem);
		CCMenu* pDirUpMenu = CCMenu::create(pUpItem, NULL);
		pDirUpMenu->setPosition(ccp(MAIN_BOARD_W-35, 75));
		this->addChild(pDirUpMenu);

		CCMenuItemImage *pDownItem = CCMenuItemImage::create(
			"dirNormal.png",
			"dirSelected.png",
			this, menu_selector(ControlStatBoard::moveLeft));
		CC_BREAK_IF(!pDownItem);
		CCMenu* pDirDownMenu = CCMenu::create(pDownItem, NULL);
		pDirDownMenu->setPosition(ccp(MAIN_BOARD_W-35, 45));
		this->addChild(pDirDownMenu);

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