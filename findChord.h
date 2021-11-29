#ifndef FINDCHORD_H
#define FINDCHORD_H
#include "chord.h"
#include <random>
#include <time.h>

class findChord{

    private:
        std::vector <Note> Notes;

    public:
        findChord();
        findChord(Chord inputChord);
        std::vector<Chord> findMajor(Chord inputChord);
        std::vector<Chord> findMinor(Chord inputChord);
        Chord majorKey(Note inputNote, int inversion);
        Chord minorKey(Note inputNote, int inversion);
        Chord makeSong(Note inputNote, std::string key, int length);
        int notePosition(Note inputNote);
        bool containsNote (Note inputNote, Chord inputChord);
        Note posToNote (int position);

};

#endif // FINDCHORD_H
