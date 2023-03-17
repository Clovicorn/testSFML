#include "../engine.h"
using namespace sf;

void Engine::inventoryInput()
{
    Event event;
    while (mWindow.pollEvent(event))
    {
        if (event.type == Event::KeyPressed)
        {
            if (event.key.code == Keyboard::Escape)
            {
                mChangeState = true;
                mStateToChange = State::OVERWORLD;
            }
            if (event.key.code == Keyboard::Return)
            {
                // probably nee to change this later
                mChangeState = true;
                mStateToChange = State::OVERWORLD;
            }
        }
    }
}