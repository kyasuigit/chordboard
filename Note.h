#ifndef NOTE_H
#define NOTE_H

#include <iostream>

class Note{
    private:
        char noteName;
        int octave;

    public:
        Note (char Name);
        char returnNoteName();
        int returnOctave();
        void changeOctave(int newOctave);
};

#endif