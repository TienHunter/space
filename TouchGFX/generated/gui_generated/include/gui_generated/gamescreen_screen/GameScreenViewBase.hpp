/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef GAMESCREENVIEWBASE_HPP
#define GAMESCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/gamescreen_screen/GameScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/AnimatedImage.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>

class GameScreenViewBase : public touchgfx::View<GameScreenPresenter>
{
public:
    GameScreenViewBase();
    virtual ~GameScreenViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image heart_01;
    touchgfx::Image heart_03;
    touchgfx::Image heart_02;
    touchgfx::TextAreaWithOneWildcard score_board;
    touchgfx::AnimatedImage animatedImage1;
    touchgfx::TextAreaWithOneWildcard score_holder;
    touchgfx::ButtonWithLabel menu_button;

    /*
     * Wildcard Buffers
     */
    static const uint16_t SCORE_BOARD_SIZE = 5;
    touchgfx::Unicode::UnicodeChar score_boardBuffer[SCORE_BOARD_SIZE];
    static const uint16_t SCORE_HOLDER_SIZE = 10;
    touchgfx::Unicode::UnicodeChar score_holderBuffer[SCORE_HOLDER_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<GameScreenViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // GAMESCREENVIEWBASE_HPP