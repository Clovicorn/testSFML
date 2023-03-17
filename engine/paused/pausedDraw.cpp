#include "../engine.h"
#include <iostream>

void Engine::pausedDraw()
{
    mWindow.setView(mPausedView);

    mWindow.setView(mWindow.getDefaultView());
    mWindow.display();
}