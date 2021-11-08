#include "Chord.h"

using namespace std;

class Chord{
    // Constructor for the class.
    Chord::Chord(string chordScale){
        scale = chordScale;
    }

    // Method used to add a new note to the vector.
    void Chord::insertNote (Note newNote){
        noteList.push_back(newNote);
    }

    // Method to remove a select note from the list. Uses erase-remove idiom.
    void Chord::removeNote (Note selectNote){
        noteList.erase (std::remove (noteList.begin(), noteList.end(), selectNote), noteList.end());
    }

    // Method to change the scale of the given chord.
    void Chord::setScale (string newScale){
        scale = newScale;
    }
}
