#include "../engine.h"
using namespace sf;

void Engine::pausedInput()
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
                // This will change over time.
                mChangeState = true;
                mStateToChange = State::OVERWORLD;
            }
        }
    }
}