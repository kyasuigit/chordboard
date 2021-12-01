#include "drum.h"

// Constructor for drum class
drum::drum(){
}

// Method returns a vector of ints representing drum notes given a length of the song
std::vector<int> drum::returnNotes(int length){
    // Randomly generates a steady beat and a random note 
    int randomNumber = rand() % 10 + 1;
    int steadyBeat = rand() % 10 + 1;
    std::vector<int> notesList;

    // For the length of the song, add either a random note or steady beat depending on the position of the next note to be adedd
    for (int i=0; i < length; i++){
        if (i % 2 == 0){
            notesList.push_back(steadyBeat);
        }
        else{
            notesList.push_back(randomNumber);
            randomNumber = rand() % 10 + 1;
        }
    }

    // Returns list of notes generated
    return notesList;
}