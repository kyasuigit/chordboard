#include "drum.h"

drum::drum(){
}

std::vector<int> drum::returnNotes(){
    int randomNumber = rand() % 9 + 1;
    int steadyBeat = rand() % 9+ 1;
    std::vector<int> notesList;

    for (int i=0; i < 20; i++){
        if (i % 2 == 0){
            notesList.push_back(steadyBeat);
        }
        else{
            notesList.push_back(randomNumber);
            randomNumber = rand() % 9 + 1;
        }
    }

    return notesList;
}
