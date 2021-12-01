#include "Chord.h"

// Constructor for Chord class
Chord::Chord(){
}

// Constructor that takes in the scale as a parameter and stores it
Chord::Chord(std::string chordScale){
    scale = chordScale;
}

// Method that inserts a given note into the chord
void Chord::insertNote (Note newNote){
    noteList.push_back(newNote);
}

// Method that sets the scale of the chord with a new input scale
void Chord::setScale (std::string newScale){
    scale = newScale;
}

// Method that returns the list of notes stored in the chord
std::vector<Note> Chord::returnNoteVector() {
    return noteList;
}

// Method that returns the key of the chord given an input note and boolean variable
std::string Chord::returnKey(Note inputNote, bool major){
    std::string outputString = "";
    if (major == true){
        return (inputNote.returnNoteName() + " Major"); 
    } 
    else if (major == false){
        return (inputNote.returnNoteName() + " Minor");
    }
    return outputString;
}