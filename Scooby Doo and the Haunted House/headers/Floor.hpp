#ifndef FLOORH
#define FLOORH
#include "BaseFloor.hpp"

//derived floor class from basefloor
class Floor : public BaseFloor {
    public:
        Floor(int x, int y);
        std::string getAssetKey();
};

#endif