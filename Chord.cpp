#include "Chord.h"

Chord::Chord(){
}

Chord::Chord(std::string chordScale){
    scale = chordScale;
}

// Method used to add a new note to the vector.
void Chord::insertNote (Note newNote){
    noteList.push_back(newNote);
}

// Method to remove a select note from the list. Uses erase-remove idiom.
void Chord::removeNote (Note selectNote){
}

// Method to change the scale of the given chord.
void Chord::setScale (std::string newScale){
    scale = newScale;
}

std::vector<Note> Chord::returnNoteVector() {
    return noteList;
}
