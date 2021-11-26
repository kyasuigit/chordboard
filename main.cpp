#include "header.h"

// Chnge name of header file

int main(){
    // Creates a chord and note 
    Chord testChord("Major");
    Note middleC("D", 4);
    Note middleE("E", 4);
    
    testChord.insertNote(middleC);
    testChord.insertNote(middleE);
    
    findChord tryMajor(testChord);

    vector<Chord> majorChord = tryMajor.findMajor(testChord);
    vector<Chord> minorChord = tryMajor.findMinor(testChord);

    // std::vector<Note> noteList = majorChord.at(0).returnNoteVector();

    // for (unsigned i=0; i< Notes.size(); i++)
    //     std:: cout << Notes.at(i).returnNoteName() << std::endl;


    for (int i=0; i< majorChord.size(); i++){
        vector<Note> thisGay = majorChord.at(i).returnNoteVector();
        
        for (unsigned x=0; x < thisGay.size(); x++){
            Note thisThing = thisGay.at(x);
            std::cout << "Chord " << i << thisThing.returnNoteName() << " " << thisThing.returnOctave() << std::endl;
        }    
    }

    for (int j=0; j< minorChord.size(); j++){
        vector<Note> secondGey = minorChord.at(j).returnNoteVector();
        Note keyName("A", 8);
        for (unsigned x=0; x < secondGey.size(); x++){
            if (x == 0){
                keyName.changeNote(secondGey.at(0).returnNoteName());
                keyName.changeOctave(secondGey.at(0).returnOctave());
            }
            Note thisThing = secondGey.at(x);
            std::cout << "Chord2 " << j << thisThing.returnNoteName() << minorChord.at(j).returnKey(keyName, false);
            std::cout << endl;
        }
    }
        
    return 0;
}