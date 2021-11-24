#include "header.h"

// Chnge name of header file

int main(){
    // Creates a chord and note 
    Chord testChord("Major");
    Note middleC("C", 4);
    Note middleE("E", 4);
    Note middleF("F", 4);
    testChord.insertNote(middleC);
    testChord.insertNote(middleE);
    
    findChord tryMajor(testChord);

    vector<Chord> majorChord = tryMajor.findMajor(testChord);



    // std::vector<Note> noteList = majorChord.at(0).returnNoteVector();

    // for (unsigned i=0; i< Notes.size(); i++)
    //     std:: cout << Notes.at(i).returnNoteName() << std::endl;


    for (int i=0; i< majorChord.size(); i++){
        vector<Note> thisGay = majorChord.at(i).returnNoteVector();
        for (unsigned x=0; x < thisGay.size(); x++){
            Note thisThing = thisGay.at(x);
            std::cout << "Chord " + i + thisThing.returnNoteName() << std::endl;
        }
        
    }
        
    return 0;
}