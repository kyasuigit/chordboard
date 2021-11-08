#ifndef BACKEND_H
#define BACKEND_H

#include <iostream>
#include <cstudio>
#include <csdlib>
#include "Genre.h"
#include "Chord.h"
#include "Database.h"

class Backend {

    // No private attributes for this class.

    public:
        Chord calculateChords(Chord newChord);
        void inputIntoChordList();
        Chord returnSelectChord();
};

#endif 