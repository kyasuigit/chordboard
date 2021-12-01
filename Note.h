#ifndef NOTE_H
#define NOTE_H

#include <iostream>
#include <string.h>

class Note{
    private:
        std::string noteName;         // Name of note to be stored
        int octave;         // Name of octave to be stored

    public:
    
        // @brief Constructor intiailizes note
        // @details The method takes in parameters of a note name and octave which it stores as part of the note. These attributes are used to create chords and scales
        // @param string name, represents the name of the note, int oct, represents the octave of the note
        // @author Terry Ju
        Note (std::string name, int oct);

        // @brief method returns the name of the note
        // @details The method fetches the name of the note stored in the note object
        // @author Terry Ju
        std::string returnNoteName();

        // @brief method returns the octave of the note
        // @details The method fetches the octave of the note stored in the note object
        // @author Terry Ju
        int returnOctave();

        // @brief method changes the octave of the note
        // @details The method changes the octave of the note stored in the note object to a specified octave in the input parameter
        // @param int newOctave, represents the octave to change the note to
        // @author Terry Ju
        void changeOctave(int newOctave);

        // @brief method changes the name of the note
        // @details The method changes the name of the note stored in the note object to a specified string name in the input parameter
        // @param string Note, represents the name to change the note to
        // @author Terry Ju
        void changeNote(std::string Note);
};

#endif // NOTE_H