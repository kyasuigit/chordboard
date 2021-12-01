#ifndef MAKESONG_H
#define MAKESONG_H
#include "chord.h"
#include <random>

class makeSong{

    private: // No private variables need to be stored

    public:
            
        /// @brief Constructor to initialize a makeSong object
        /// @details The method creates an empty instance of the makeSong object with attributes to be initialized later
        /// @author Terry Ju
        makeSong();

        /// @brief Method returns a vector of major chords given an input chord
        /// @details The method takes in parameters of an input chord and generates three major chords using the input chord as a basis, and returns
        /// A vector of the chords
        /// @param Chord inputChord, chord that the algorithm will generate major chords based on
        /// @author Terry Ju
        std::vector<Chord> makeMajor(Chord inputChord);

        /// @brief Method returns a vector of minor chords given an input chord
        /// @details The method takes in parameters of an input chord and generates three minor chords using the input chord as a basis, and returns
        /// vectors of the chords. 
        /// @param Chord inputChord, chord that the algorithm will generate minor chords based on
        /// @author Terry Ju
        std::vector<Chord> makeMinor(Chord inputChord);
    
        /// @brief Method returns a vector of major chords given an input chord and inversion
        /// @details The method takes in parameters of an input chord and generates three major chords using the input chord and inversion as a basis, and returns
        /// A vector of the chords
        /// @param Chord inputChord, chord that the algorithm will generate major chords based on, int inversion, inversion of the triad
        /// @author Terry Ju 
        Chord majorKey(Note inputNote, int inversion);

        /// @brief Method returns a minor chord given an input note and inversion for the output chord
        /// @details The method takes in parameters of an input note and inversion and generates a minor chord using the note and inversion, and returns
        /// the chord by calculating and adding the corresponding minor notes
        /// @param Note inputNote, note that the algorithm will use as a base, int inversion, inversion of the triad
        /// @author Terry Ju 
        Chord minorKey(Note inputNote, int inversion);
        
        /// @brief Method returns a note's position given an input note
        /// @details The method takes in parameters of an input note and generates a position for it on the piano. That way, the notes of a piano can be represented 
        /// numerically and arithmatic operations can be used to calculate major and minor chords and an int representation is represented
        /// @param Note inputNote, Note to convert to integer position
        /// @author Terry Ju         
        int notePosition(Note inputNote);

        /// @brief Method returns a note given it's position
        /// @details The method takes in parameters of an input position and generates a note on the piano. This will return a note after the position on the piano
        /// has been changed arithmatically
        /// @param int position, position to be converted to note
        /// @author Terry Ju 
        Note posToNote (int position);
};

#endif // MAKESONG_H
