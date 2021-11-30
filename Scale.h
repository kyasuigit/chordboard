#ifndef SCALE_H
#define SCALE_H

#include <iostream>
#include <string>
#include "Note.h"

using namespace std;

class Scale {

    private:
        Note root;
        std::string type;
        Note scaleNotes[7];
        char orderOfSharps[7] = {'F', 'C', 'G', 'D', 'A', 'E', 'B'};
        //{"F", "C", "G", "D", "A", "E", "B"};
        //const int naturals = {-1, 0, 1, 2, 3, 4, 5};
        //const string* allFlats = {"C", "Db", "D", "Eb", "E", "F". "Gb", "G", "Ab", "A", "Bb", "B"};
        //const string* allSharps = {"C", "C#", "D", "D#", "E", "F". "F#", "G", "G#", "A", "A#", "B"};

    public:
        Scale(Note newRoot);
        Scale(Note newRoot, std::string newType);
        void setRoot(Note newRoot);
        void setType(std::string newType);
        Note getNote(int position);
        void fillScale();
        void addNotes(char note, int oct, int numberOfSharps);
        char flatNaturalSharp(char note, int numberOfSharps);
        int main();
};

#endif
