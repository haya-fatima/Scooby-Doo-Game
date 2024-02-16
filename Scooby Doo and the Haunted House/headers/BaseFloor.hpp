#ifndef BASEFLOORH
#define BASEFLOORH
#include "Actor.hpp"
#include "TreasureBox.hpp"

//floor class derived from actor
class BaseFloor : public Actor {
    //every floor has three treasure boxes so memory created on heap
    TreasureBox** treasureBoxes = new TreasureBox*[3];
    public:
        BaseFloor(int x, int y, int w, int h);
        TreasureBox** getTreasureBoxes();
};
#endif