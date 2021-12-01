#ifndef FINDCHORD_H
#define FINDCHORD_H
#include "chord.h"
#include <random>
#include <time.h>

class findChord{

    private:
        std::vector <Note> Notes; // Vector of notes of the input chord

    public:
        /// @brief Constructor to initialize a findChord object
        /// @details The method creates an empty instance of the findChord object with attributes to be initialized later
        /// @author Terry Ju
        findChord();

        /// @brief Method returns a vector of major chords given an input chord
        /// @details The method takes in parameters of an input chord and generates three major chords using the input chord as a basis, and returns
        /// A vector of the chords
        /// @param Chord inputChord, chord that the algorithm will generate major chords based on
        /// @author Terry Ju
        std::vector<Chord> findMajor(Chord inputChord);
        
        /// @brief Method returns a vector of minor chords given an input chord
        /// @details The method takes in parameters of an input chord and generates three minor chords using the input chord as a basis, and returns
        /// vectors of the chords
        /// @param Chord inputChord, chord that the algorithm will generate major chords based on
        /// @author Terry Ju

        std::vector<Chord> findMinor(Chord inputChord);

        /// @brief Method returns a major chord given an input chord and inversion
        /// @details The method takes in parameters of an input chord and inversion and generates one of three major chords using the input chord as a basis, and returns the chord
        /// @param Chord inputChord, chord that the algorithm will generate major chords based on, int inversion, inversion of the triad
        /// @author Terry Ju
        Chord majorKey(Note inputNote, int inversion);

        /// @brief Method returns a minor chord given an input note and inversion for the output chord
        /// @details The method takes in parameters of an input note and inversion and generates a minor chord using the note and inversion, and returns
        /// the chord by calculating and adding the corresponding minor notes
        /// @param Note inputNote, note that the algorithm will use as a base, int inversion, inversion of the triad
        /// @author Terry Ju 
        Chord minorKey(Note inputNote, int inversion);

        /// @brief Method makes a song given an input note, key (major or minor), and length
        /// @details The method takes in parameters of an input note, key (major or minor), and length and generates a song
        /// using the parameters. A chord is then returned after calculating and adding the corresponding notes
        /// @param Note inputNote, note that the algorithm will the minor chord based on, string key, key of the song, int length, length of the song
        /// @author Terry Ju 
        Chord makeSong(Note inputNote, std::string key, int length);

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

        /// @brief Method returns a major chord given an input note and specified inversion
        /// @details The method takes in parameters of an input note and inversion and generates a major chord in the form of a triad, and returns
        /// the chord
        /// @param Note inputNote, Note that the chord is based on, int inversion, inversion of the triad
        /// @author Terry Ju 
        Chord blowInstrumentsMajor(Note inputNote, int inversion);

        /// @brief Method returns a minor chord given an input note and specified inversion
        /// @details The method takes in parameters of an input note and inversion and generates a minor chord in the form of a triad, and returns
        /// the chord
        /// @param Note inputNote, Note that the chord is based on, int inversion, inversion of the triad
        /// @author Terry Ju 
        Chord blowInstrumentsMinor(Note inputNote, int inversion);

        /// @brief Method returns a vector of major chords given an input chord
        /// @details The method takes in parameters of an input chord and generates three major chords using the input chord as a basis, and returns
        /// vectors of the chords. This method is for wind and brass instruments, as the theory is different for piano.
        /// @param Chord inputChord, chord that the algorithm will generate major chords based on
        /// @author Terry Ju
        std::vector<Chord> blowMajor(Chord inputChord);

        /// @brief Method returns a vector of minor chords given an input chord
        /// @details The method takes in parameters of an input chord and generates three minor chords using the input chord as a basis, and returns
        /// vectors of the chords. This method is for wind and brass instruments, as the theory is different for piano.
        /// @param Chord inputChord, chord that the algorithm will generate minor chords based on
        /// @author Terry Ju
        std::vector<Chord> blowMinor(Chord inputChord);
};

#endif // FINDCHORD_H
