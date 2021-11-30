#ifndef MAKESONG_H
#define MAKESONG_H
#include "Chord.h"
#include <random>

class makeSong{

    private:
        // std::vector <Note> Notes;

    public:
        makeSong();
        std::vector<Chord> makeMajor(Chord inputChord);
        std::vector<Chord> makeMinor(Chord inputChord);
        Chord majorKey(Note inputNote, int inversion);
        Chord minorKey(Note inputNote, int inversion);
        int notePosition(Note inputNote);
        bool containsNote (Note inputNote, Chord inputChord);
        Note posToNote (int position);

};

#endif // MAKESONG_H
