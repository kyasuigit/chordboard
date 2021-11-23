#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include "Genre.h"
#include "Chord.h"

class Database {

    // This class will not need to have any private attributes according to the UML diagram.

    public: 

        // Generating a vector for all relevant chords.
        std::vector<Chord> findRelevantChords(); 
        
        // Generating a vector for all possible genres.
        // std::vector<Genre> generateGenreList();
};

#endif