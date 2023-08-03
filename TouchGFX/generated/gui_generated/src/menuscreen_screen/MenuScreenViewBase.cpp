/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/menuscreen_screen/MenuScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

MenuScreenViewBase::MenuScreenViewBase() :
    buttonCallback(this, &MenuScreenViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    image1.setXY(20, 27);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_TITLE_ID));
    add(image1);

    button.setXY(35, 160);
    button.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_SMALL_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_SMALL_PRESSED_ID));
    button.setLabelText(touchgfx::TypedText(T___SINGLEUSE_2L9P));
    button.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    button.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    button.setAction(buttonCallback);
    add(button);
}

MenuScreenViewBase::~MenuScreenViewBase()
{

}

void MenuScreenViewBase::setupScreen()
{

}

void MenuScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &button)
    {
        //ChangeToGameScreen
        //When button clicked change screen to GameScreen
        //Go to GameScreen with screen transition towards East
        application().gotoGameScreenScreenSlideTransitionEast();
    }
}
