#ifndef CHORD_h
#define CHORD_H

#include <iostream>
#include<cstdio>
#include <string>
// #include <csdlib>
#include <vector>
#include <algorithm>
#include "Note.h"

class Chord{
    private:
        string scale;
        vector <Note> noteList;
    
    public:
        Chord (string chordScale);
        void insertNode (Note newNote);
        void removeNote (Note selectNote);
        void setScale (string newScale);
};

#endif 