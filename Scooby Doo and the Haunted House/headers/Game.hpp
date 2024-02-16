#ifndef GAMEH
#define GAMEH
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include "../headers/AssetManager.hpp"
#include "../headers/Scooby.hpp"
#include "../headers/TreasureBox.hpp"
#include "../headers/Floor.hpp"
#include "../headers/GroundFloor.hpp"
#include "../headers/Snack.hpp"
#include "../headers/BoobyTrap.hpp"

using namespace std;

class Game {
    SDL_Window* gWindow = NULL;
    SDL_Renderer* gRenderer = NULL;
    SDL_Texture* gTexture = NULL;

    bool isScoobyJumping = false;
    bool isScoobyFalling = false;

	string clueWord = "WAREHOUSE";

    Scooby* scooby;

    BaseFloor** floors;

	Floor* floor1;
	Floor* floor2;
	Floor* floor3;
	GroundFloor* groundFloor;

    TreasureBox** treasureBoxes;

    Snack* snack1;
    Snack* snack2;

    BoobyTrap* boobyTrap1;
    BoobyTrap* boobyTrap2;

    const int SCREEN_WIDTH = 1000;
    const int SCREEN_HEIGHT = 600;

    AssetManager* assetManager;

    Mix_Music* bgmusic = NULL;
    Mix_Chunk* treasure_open = NULL;
    Mix_Chunk* scooby_snack= NULL;
    Mix_Chunk* clue_found = NULL;
    Mix_Chunk* clue_notfound = NULL;
    Mix_Chunk* scooby_scream = NULL;
    Mix_Chunk* gamewin = NULL;
    Mix_Chunk* gamelose = NULL;

    void renderAsset(string key);
    bool isScoobyCollidingWithAnyFloor();
    bool isScoobyOnTopOf(Actor* actor);
    bool isScoobyOnTopOfFloorOrTreasureBox();
    bool isScoobyOnTheLeftOfAnyTreasureBox();
    bool isScoobyOnTheRightOfAnyTreasureBox();

    public:
        bool init();
        bool loadAssets();
        void run();
        ~Game();
};
#endif