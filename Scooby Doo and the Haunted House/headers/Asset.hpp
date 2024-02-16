#ifndef ASSETH
#define ASSETH
#include <string>
#include <SDL.h>
#include <SDL_image.h>
using namespace std;

//every image to be rendered
class Asset {
    string path;

    protected:
        //src rectangle
        SDL_Rect* rect;
        //loads image in texture
        SDL_Texture* texture;
        //loaded implies success
        bool loaded;

    public:
        //SDL functions
        Asset(string path, int x, int y, int w, int h);
        bool load(SDL_Renderer* gRenderer);
        SDL_Texture* getTexture();
        SDL_Rect* getRect();
        ~Asset();
};
#endif