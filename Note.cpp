#include "Note.h"

Note::Note(){
    noteName = "C";
    octave = 4;
}

Note::Note(std::string name, int oct){
    noteName = name;
    octave = oct;
}

// Getter method for the notename
std::string Note::returnNoteName(){
    return noteName;
}

// Setter method for noteName
void Note::changeNoteName(std::string newName){
    noteName = newName;
}

// Getter method for the notes octave.
int Note::returnOctave(){
    return octave;
}

// Accessor method for the octave of the note.
void Note::changeOctave(int newOctave){
    octave = newOctave;
}
