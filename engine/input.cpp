#include "engine.h"
using namespace sf;

void Engine::input()
{
    switch (mState)
    {
    case State::TITLE:
        titleInput();
        break;
    case State::OVERWORLD:
        overWorldInput();
        break;
    case State::INVENTORY:
        inventoryInput();
        break;
    case State::GAMEOVER:
        gameOverInput();
        break;
    case State::PAUSED:
        pausedInput();
        break;
    }
}