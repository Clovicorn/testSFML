#include "engine.h"

void Engine::update(float dtAsSeconds)
{
    switch (mState)
    {
    case State::TITLE:
        titleUpdate(dtAsSeconds);
        break;
    case State::OVERWORLD:
        overWorldUpdate(dtAsSeconds);
        break;
    case State::INVENTORY:
        inventoryUpdate(dtAsSeconds);
        break;
    case State::GAMEOVER:
        gameOverUpdate(dtAsSeconds);
        break;
    case State::PAUSED:
        pausedUpdate(dtAsSeconds);
        break;
    }
}