#ifndef SCOOBYH
#define SCOOBYH
#include "../headers/Actor.hpp"
#include <string>
using namespace std;
class Scooby : public Actor {
    int jumpBase; //y-position of jumpstart
    string direction, currentFoot; //direction scooby is facing, currentfoor refers to animation (two walking animations)
    unsigned int footSwitchTimer; //times the 2 walking animations
    bool jumping, jumpingUp, inAir, flashlightOn; //jumpingUp is initial jump (going up), jumping refers to being in air (even while coming down)
    int flashlight_battery = 4000; //flashlight battery (finite)

    void changeFoot(); //toggles scooby animation

    public:
        Scooby(int x, int y);
        //movement functions
        void moveLeft();
        void moveRight();
        void moveDown();
        void stand();
        void jump();
        void interruptJump(); //collision with floor/box mid jump stops jump
        void resetJump(); //resets jumpbase to current y value
        void turnFlashlightOn(); //turns flashlight on and decreases battery
        void turnFlashlightOff(); //turns flashlight off when battery dead or user stops holding F
        int getBattery(); //returns battery level to game.cpp

        string getAssetKey(); //asset key of scooby
        bool isJumping(); //getter for jumping
        bool isInAir(); //getter for inair
};
#endif