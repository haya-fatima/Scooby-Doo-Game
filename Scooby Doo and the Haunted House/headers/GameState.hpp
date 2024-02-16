#ifndef GAMESTATEH
#define GAMESTATEH

#include <cstdlib>
#include <vector>
#include <string>

//singleton
class GameState {
    static GameState* instance;
    //for populating treasure boxes with clues
    int totalCluesLeftToPutInBoxes;
    int energy, fear, cluesFound, foundClueLetterIndex;

    std::string clue;
    bool* foundClueLetters;
    
    GameState();

    public:
        static GameState* getInstance();
        //used for populating treasure boxes
        void decrementTotalCluesLeftToPutInBoxes();
        int getTotalCluesLeftToPutInBoxes();
        //get current energy
        int getEnergy();
        //eating snack/opening treasure box
        void decrementEnergy();
        void incrementEnergy();
        //get current fear
        int getFear();
        //increase fear periodically (acts as a timer)
        void incrementFear();
        //when scooby finds a clue + render the clue
        void incrementCluesFound();
        //indicates which clue is found
        bool hasFoundClue(int clueNum);
        std::string getClue();
        //forced game over is when scooby falls in booby trap
        void forceGameOver();
        //game end
        bool isGameOver();
        //game lost
        bool gameFailed();
};
#endif