#include <iostream>
#include <stdio.h>

using namespace std;

class Note{
    
    // Private attributes of the note class.
    private:
        char noteName;
        int octave = 0; // Octave default to zero. Not entirely sure if this is correct... C0 on a piano base
        
    // Public methods of the class.
    public:
        // Constructor for the class. Accepts 5 argumentsm
        // one for each attribute of the note.
        Note(name){
            noteName = name;
        }

        // Getter method for the notename
        char returnNoteName(){
            return noteName;
        }

        // Getter method for the notes octave.
        int returnOctave(){
            return octave;
        }

        // Accessor method for the octave of the note.
        void changeOctave(int newOctave){
            octave = newOctave;
        }
}