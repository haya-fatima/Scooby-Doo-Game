#ifndef SNACKH
#define SNACKH

#include "Actor.hpp"

class Snack : public Actor {
    bool eaten;
    public:
        Snack(int x, int y);
        void eat();
        bool isEaten();
        std::string getAssetKey();
};

#endif