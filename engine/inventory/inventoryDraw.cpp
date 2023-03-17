#include "../engine.h"
#include <iostream>

void Engine::inventoryDraw()
{
    mWindow.setView(mInventoryView);

    mWindow.setView(mWindow.getDefaultView());
    mWindow.display();
}