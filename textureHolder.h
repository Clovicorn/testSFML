#pragma once
#ifndef TEXTURE_HOLDER_H
#define TEXTURE_HOLDER_H

#include <SFML/Graphics.hpp>
#include <map>
#include <assert.h>

using namespace sf;

class TextureHolder
{
    std::map<std::string, sf::Texture> mTextures;

    static TextureHolder *mInstance;

public:
    TextureHolder();
    static Texture &getTexture(std::string const &filename);
};

#endif