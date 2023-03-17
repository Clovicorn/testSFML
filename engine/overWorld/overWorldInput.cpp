#include "../engine.h"
using namespace sf;

void Engine::overWorldInput()
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
                mPlaying = true;
            }
            if (event.key.code == Keyboard::Q)
            {
                mCharacter1 = !mCharacter1;
            }
            if (event.key.code == Keyboard::E)
            {
            }
        }
    }
}