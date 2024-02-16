#ifndef ASSETMANAGERH
#define ASSETMANAGERH
#include <unordered_map>
#include <SDL.h>
#include <SDL_image.h>
#include <string>
#include "../headers/Asset.hpp"

using namespace std;

class AssetManager {
    /*hash map to store the asset against asset keys
    each asset is assigned a specific key by the hash map
    the key is used for rendering the asset in game.cpp
    it helps to access the asset via the key.*/
    unordered_map<string, Asset*> map;
    SDL_Renderer* gRenderer = NULL;
    //load implies success
    bool load(string key, Asset* asset);

    public:
        //sdl renderer
        AssetManager(SDL_Renderer* gRenderer);
        //populates hash map
        bool loadImage(string path, string key, int x, int y, int w, int h);
        //accesses asset
        Asset* get(string key);
        //render bgs
        void render(string key, int x, int y);
        //overloaded function: render other objects
        void render(string key, int x, int y, int w, int h);
        ~AssetManager();
};
#endif