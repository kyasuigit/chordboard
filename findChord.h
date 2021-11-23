#ifndef FINDCHORD_H
#define FINDCHORD_H
#include "chord.h"
#include <random>

class findChord{

    private:
        std::vector <Note> Notes;

    public:
        findChord(Chord inputChord);
        std::vector<Chord> findMajor(Chord inputChord);
        Chord findMinor(Chord inputChord);
        Chord majorKey(Note inputNote);
        Note minorKey(Note inputNote);
        int notePosition(Note inputNote);
        bool containsNote (Note inputNote, Chord inputChord);
        Note posToNote (int position);

};

#endif // FINDCHORD_H
