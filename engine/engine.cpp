#include "engine.h"
#include <iostream>

Engine::Engine(void)
{
    mState = State::TITLE;

    Vector2f resolution;
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;

    if (resolution.x > 1920)
    {
        resolution.x = 1920;
        resolution.y = 1080;
    }

    std::cout << "resolution width " << resolution.x << "\n";
    std::cout << "resolution height " << resolution.y << "\n";
    mWindow.create(VideoMode(resolution.x, resolution.y), "Platformer", Style::Fullscreen);

    mTitleView.setViewport(FloatRect(0, 0, resolution.x, resolution.y));

    mMainView.setViewport(FloatRect(0.0f, 0.00f, 0.698f, 1.00f));

    // mScrollView.setSize(Vector2f(resolution.x * 0.3f, resolution.y));
    mScrollView.setViewport(FloatRect(0.7f, 0.0f, 1.0f, 1.00f));

    mScrollShape.setPosition(Vector2f(1, 0));

    mScrollShape.setSize(Vector2f(mScrollView.getSize().x, resolution.y));
    mScrollShape.setScale(Vector2f(0.30f, 0.94f));
    mScrollShape.setPosition(0, 0);
    std::cout << "width " << mScrollShape.getSize().x << "\n";
    std::cout << "height " << mScrollShape.getSize().y << "\n";
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
