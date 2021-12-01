#include "Note.h"

// Constructor for note
Note::Note(std::string name, int oct){
    noteName = name;
    octave = oct;
}

// Getter method for note name
std::string Note::returnNoteName(){
    return noteName;
}

// Getter method for octave
int Note::returnOctave(){
    return octave;
}

// setter method for octave
void Note::changeOctave(int newOctave){
    octave = newOctave;
}

// setter method for note name
void Note::changeNote(std::string Note){
    noteName = Note;
}

