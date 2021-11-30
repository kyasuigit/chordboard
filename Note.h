#ifndef NOTE_H
#define NOTE_H

#include <iostream>
#include <string.h>

class Note{
    private:
        std::string noteName;
        int octave;

    public:
        Note();
        Note(std::string name, int oct);
        std::string returnNoteName();
        void changeNoteName(std::string newName);
        int returnOctave();
        void changeOctave(int newOctave);
};

#endif // NOTE_H
