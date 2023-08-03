/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/gamescreen_screen/GameScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

GameScreenViewBase::GameScreenViewBase() :
    buttonCallback(this, &GameScreenViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    heart_01.setXY(134, 1);
    heart_01.setBitmap(touchgfx::Bitmap(BITMAP_HEART_ID));
    add(heart_01);

    heart_03.setXY(204, 1);
    heart_03.setBitmap(touchgfx::Bitmap(BITMAP_HEART_ID));
    add(heart_03);

    heart_02.setXY(169, 1);
    heart_02.setBitmap(touchgfx::Bitmap(BITMAP_HEART_ID));
    add(heart_02);

    score_board.setPosition(8, 4, 96, 29);
    score_board.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    score_board.setLinespacing(0);
    Unicode::snprintf(score_boardBuffer, SCORE_BOARD_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_SC0I).getText());
    score_board.setWildcard(score_boardBuffer);
    score_board.setTypedText(touchgfx::TypedText(T___SINGLEUSE_FA5H));
    add(score_board);

    animatedImage1.setXY(208, 1);
    animatedImage1.setBitmaps(BITMAP_ENEMY_RED_01_ID, BITMAP_ENEMY_RED_02_ID);
    animatedImage1.setUpdateTicksInterval(1);
    animatedImage1.setAlpha(0);
    add(animatedImage1);

    score_holder.setPosition(0, 114, 240, 34);
    score_holder.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    score_holder.setLinespacing(0);
    score_holderBuffer[0] = 0;
    score_holder.setWildcard(score_holderBuffer);
    score_holder.setTypedText(touchgfx::TypedText(T___SINGLEUSE_8V5A));
    add(score_holder);

    menu_button.setXY(38, 160);
    menu_button.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_SMALL_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_SMALL_PRESSED_ID));
    menu_button.setLabelText(touchgfx::TypedText(T___SINGLEUSE_8TQL));
    menu_button.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    menu_button.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    menu_button.setAction(buttonCallback);
    add(menu_button);
}

GameScreenViewBase::~GameScreenViewBase()
{

}

void GameScreenViewBase::setupScreen()
{

}

void GameScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &menu_button)
    {
        //Interaction1
        //When menu_button clicked change screen to MenuScreen
        //Go to MenuScreen with screen transition towards East
        application().gotoMenuScreenScreenSlideTransitionEast();
    }
}
