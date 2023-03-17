#include "../engine.h"
using namespace sf;

void Engine::titleInput()
{
    Event event;
    while (mWindow.pollEvent(event))
    {
        if (event.type == Event::KeyPressed)
        {
            if (event.key.code == Keyboard::Escape)
            {
                mWindow.close();
            }
            if (event.key.code == Keyboard::Return)
            {
                mChangeState = true;
                mStateToChange = State::OVERWORLD;
            }
        }
    }
}