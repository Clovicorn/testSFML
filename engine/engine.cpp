#include "engine.h"
#include <iostream>

Engine::Engine(void)
{
    mState = State::TITLE;

    Vector2f resolution;
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;

    mWindow.create(VideoMode::getDesktopMode(), "Platformer", Style::Fullscreen);

    mTitleView.setViewport(FloatRect(0, 0, resolution.x, resolution.y));

    mMainView.setViewport(FloatRect(0.0f, 0.001f, 0.698f, 1.00f));

    mScrollView.setViewport(FloatRect(0.7f, 0.0f, 0.998f, 1.3f));
    // mScrollView.reset(FloatRect(resolution.x * 0.7f, 0.0f, resolution.x * 0.3f, resolution.y));

    mScrollShape.setPosition(Vector2f(0, 0));
    // mScrollShape.
    mScrollShape.setSize(Vector2f(resolution.x * 0.22, resolution.y));
    mScrollShape.setTexture(&TextureHolder::getTexture("assets/graphics/scroll.png"));
}

void Engine::run(void)
{
    Clock clock;

    while (mWindow.isOpen())
    {
        Time dt = clock.restart();
        float dtAsSeconds = dt.asSeconds();
        mGameTimeTotal += dt;

        input();
        update(dtAsSeconds);
        draw();
        if (mChangeState)
        {
            mState = mStateToChange;
            mChangeState = false;
        }
    }
}
