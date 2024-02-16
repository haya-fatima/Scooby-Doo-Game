#ifndef BOOBYTRAPH
#define BOOBYTRAPH

#include "Actor.hpp"
#include <string>

class BoobyTrap : public Actor {
    public:
        BoobyTrap(int x, int y);
        std::string getAssetKey();
};

#endif