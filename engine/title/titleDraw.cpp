#include "../engine.h"
#include <iostream>

void Engine::titleDraw()
{
    mWindow.setView(mTitleView);

    mWindow.setView(mWindow.getDefaultView());
    mWindow.display();
}