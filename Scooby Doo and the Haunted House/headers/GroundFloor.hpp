#ifndef GROUNDFLOORH
#define GROUNDFLOORH
#include "BaseFloor.hpp"

//derived ground floor class from basefloor
class GroundFloor : public BaseFloor {
    public:
        GroundFloor(int x, int y);
        std::string getAssetKey();
};

#endif