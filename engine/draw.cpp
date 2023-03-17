#include "engine.h"
#include <iostream>

void Engine::draw()
{
    switch (mState)
    {
    case State::TITLE:
        titleDraw();
        break;
    case State::OVERWORLD:
        overWorldDraw();
        break;
    case State::INVENTORY:
        inventoryDraw();
        break;
    case State::GAMEOVER:
        gameOverDraw();
        break;
    case State::PAUSED:
        pausedDraw();
        break;
    }
}