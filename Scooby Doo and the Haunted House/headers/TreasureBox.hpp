#ifndef TREASUREBOXH
#define TREASUREBOXH
#include "../headers/Actor.hpp"
#include <cstdlib>

class TreasureBox : public Actor {
    static int currentBoxNum;
    bool opened, hasClue;
    public:
        TreasureBox(int x, int y);
        std::string getAssetKey();
        void open();
        void close();
        bool isOpened();
        bool containsClue();
};
#endif