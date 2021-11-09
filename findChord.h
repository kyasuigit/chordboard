#ifndef FINDCHORD_H
#define FINDCHORD_H
#include "Chord.h"
#include <random>

class findChord{

    private:
        Chord findMajor(Chord inputChord){
            int chordSize;
            std::vector <Note> Notes;
        }
        Chord findMinor(Chord inputChord){
            int chordSize;
            std::vector <Note> Notes;
        }
        Note majorKey(Note inputNote){
            int i;
            int position;
        }

        Note minorKey(Note inputNote){
            int i;
            int position;   
        }

        int notePosition(Note inputNote){
            std::string noteName;
            int octave;
        }
        
        bool containsNote (Note inputNote, Chord inputChord){
            std::vector <Note> Notes;
        }

};

#endif // FINDCHORD_H