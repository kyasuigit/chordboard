#ifndef GENRE_H
#define GENRE_H

#include <iostream>
#include <cstudio>
#include <csdlib>
#include "Chords.h"

class Genre{

    private:
        string genreName; // Genre for the chord suggestions???
        Vector<Chord> preferredChords; // Vector to store the chords that sound good with the given input.

    public:
        Genre (string newGenre)
        // Assuming that this method is supposed to determine a vector of chords.
        Vector<Chords> findChords();
}