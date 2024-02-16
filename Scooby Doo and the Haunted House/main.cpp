#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include "headers/Game.hpp"

int main( int argc, char* args[] )
{
	srand(time(0));
    Game game;

	if( !game.init() )
	{
		printf( "Failed to initialize!\n" );
	}
	else
	{
		//Load media
		if( !game.loadAssets() )
		{
			printf( "Failed to load media!\n" );
		}
		else
		{
			game.run();
		}
	}

	return 0;
}