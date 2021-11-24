#include "header.h"

// Chnge name of header file

int main(){
    // Creates a chord and note 
    Chord testChord("Major");
    Note middleC("C", 4);
    testChord.insertNote(middleC);
    findChord tryMajor(testChord);

    Chord majorChord = tryMajor.majorKey(middleC);

    vector<Note> Notes = majorChord.returnNoteVector();


    // std::vector<Note> noteList = majorChord.at(0).returnNoteVector();

    for (unsigned i=0; i< Notes.size(); i++)
        std:: cout << Notes.at(i).returnNoteName() << std::endl;
    return 0;
}