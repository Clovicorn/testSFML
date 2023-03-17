#include "../engine.h"

void Engine::overWorldDraw()
{
    mWindow.setView(mMainView);
    // mWindow.draw(mScrollShape);
    mWindow.setView(mScrollView);
    mWindow.draw(mScrollShape);
    mWindow.setView(mWindow.getDefaultView());
    mWindow.display();
}