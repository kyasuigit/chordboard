#include "Note.h"

using namespace std;

class Note{
    // Constructor for the class. Accepts 5 argumentsm
    // one for each attribute of the note.
    Note::Note(char name){
        noteName = name;
    }

    // Getter method for the notename
    char Note::returnNoteName(){
        return noteName;
    }

    // Getter method for the notes octave.
    int Note::returnOctave(){
        return octave;
    }

    // Accessor method for the octave of the note.
    void Note::changeOctave(int newOctave){
        octave = newOctave;
    }
}