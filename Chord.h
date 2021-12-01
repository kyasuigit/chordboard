#ifndef CHORD_H
#define CHORD_H
#include "note.h"
#include <iostream>
#include <vector>

class Chord{
    private:
        std::string scale; // Stores the scale of the chord
        std::vector <Note> noteList; // Stores the notes in the chord

    public:
        // @brief Constructor to make a chord of notes
        // @details The constructor can be made empty to initialize or change values later
        // @author Terry Ju
        Chord();

        // @brief Constructor to make a chord of notes
        // @details The constructor takes in parameters of a chord scale, which it stores as a string object
        // @param string chordScale, represents the scale to be stored
        // @author Terry Ju       
        Chord(std::string chordScale);

        // @brief Method inserts notes into the chord
        // @details The method takes in parameters of a note and pushes it to the end of the list storing the notes
        // @param Note newNote, represents the note to be stored
        // @author Terry Ju       
        void insertNote (Note newNote);

        // @brief Method sets the scale stored in the chord to an specified input
        // @details The method takes in parameters of a scale, which it stores as a string object and replaces the previous string object
        // @param string newScale, represents the scale to be stored/changed
        // @author Terry Ju        
        void setScale (std::string newScale);

        // @brief Method returns the vector of notes stored in the chord
        // @details The method returns the vector of notes stored in the chord and takes no input, as it is a getter method
        // @author Terry Ju        
        std::vector<Note> returnNoteVector();

        // @brief Method returns the key of the chord given an note
        // @details The method takes in parameters of the input note and a boolean defining if the scale is a major or not
        // and returns a string of the key that the chord is in
        // @param Note inputNote, representing the note to be input and bool Major, to define if the key is a major or minor
        // @author Terry Ju       
        std::string returnKey(Note inputNote, bool major);

};

#endif // CHORD_H