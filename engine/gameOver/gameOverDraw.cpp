#include "../engine.h"
#include <iostream>

void Engine::gameOverDraw()
{
    mWindow.setView(mGameOverView);

    mWindow.setView(mWindow.getDefaultView());
    mWindow.display();
}