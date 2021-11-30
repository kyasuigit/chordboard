#include "drum.h"

drum::drum(){
}

std::vector<int> drum::returnNotes(int length){
    int randomNumber = rand() % 10 + 1;
    int steadyBeat = rand() % 10 + 1;
    std::vector<int> notesList;

    for (int i=0; i < length; i++){
        if (i % 2 == 0){
            notesList.push_back(steadyBeat);
        }
        else{
            notesList.push_back(randomNumber);
            randomNumber = rand() % 10 + 1;
        }
    }

    return notesList;
}