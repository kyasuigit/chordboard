#include "header.h"

// Chnge name of header file

int main(){
    Chord testChord("Major");
    Note middleC("C", 4);
    testChord.insertNote(middleC);
    findChord tryMajor(testChord);

    std::vector<Chord> majorChord = tryMajor.findMajor(testChord);

  

    std::vector<Note> noteList = majorChord.at(0).returnNoteVector();

    for (unsigned i=0; i< noteList.size(); i++)
        std:: cout << noteList.at(i).returnNoteName() << std::endl;
    return 0;
}