#ifndef ACTORH
#define ACTORH
#include <string>

//represents a physical entity in the game; is "collide-able"
class Actor {
    protected:
        int x, y, w, h;

    public:
        //src position & size
        Actor(int x, int y, int w, int h);
        int getX();
        int getY();
        int getW();
        int getH();

        //setting new width and height
        void setW(int w);
        void setH(int h);

        //boolean for collision
        bool isCollidingWith(Actor& actor);

        //every actor has an assetkey, but each base class has a separate asset key (polymorphism)
        virtual std::string getAssetKey() = 0;
};
#endif