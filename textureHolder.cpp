#include "textureHolder.h"

using namespace std;
using namespace sf;

TextureHolder *TextureHolder::mInstance = nullptr;

TextureHolder::TextureHolder()
{
    assert(mInstance == nullptr);
    mInstance = this;
}

Texture &TextureHolder::getTexture(string const &filename)
{
    auto &m = mInstance->mTextures;

    auto keyValuePair = m.find(filename);

    if (keyValuePair != m.end())
    {
        return keyValuePair->second;
    }
    else
    {
        auto &texture = m[filename];
        texture.loadFromFile(filename);
        return texture;
    }
}