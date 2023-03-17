#pragma
#include <SFML/Graphics.hpp>
#include "../textureHolder.h"

using namespace sf;

class Engine
{
    enum class State
    {
        TITLE,
        OVERWORLD,
        INVENTORY,
        GAMEOVER,
        PAUSED
    };
    TextureHolder th;

    State mState;
    const int TILE_SIZE = 50;
    const int VERTS_IN_QUAD = 4;
    const int GRAVITY = 300;
    RenderWindow mWindow;

    View mTitleView;
    View mPausedView;
    View mInventoryView;
    View mMainView;
    View mScrollView;
    View mGameOverView;

    Sprite mBGSprite;
    Texture mBGTexture;

    RectangleShape mScrollShape;

    bool mCharacter1 = true;
    bool mPlaying = false;

    float mTimeRemaining = 10;
    Time mGameTimeTotal;

    bool mChangeState = false;
    bool mNewLevelRequired = true;

    State mStateToChange;
    void input();
    void update(float dtAsSeconds);
    void draw();

    void titleDraw();
    void titleInput();
    void titleUpdate(float dtAsSeconds);

    void overWorldDraw();
    void overWorldInput();
    void overWorldUpdate(float dtAsSeconds);

    void inventoryDraw();
    void inventoryInput();
    void inventoryUpdate(float dtAsSeconds);

    void pausedDraw();
    void pausedInput();
    void pausedUpdate(float dtAsSeconds);

    void gameOverDraw();
    void gameOverInput();
    void gameOverUpdate(float dtAsSeconds);

public:
    Engine();
    void run();
};
