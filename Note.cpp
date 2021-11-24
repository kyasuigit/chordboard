#include "Note.h"

Note::Note(std::string name, int oct){
    noteName = name;
    octave = oct;
}

// Getter method for the notename
std::string Note::returnNoteName(){
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

void Note::changeNote(std::string Note){
    noteName = Note;
}

