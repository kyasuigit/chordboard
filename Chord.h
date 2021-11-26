#ifndef CHORD_H
#define CHORD_H
#include "note.h"
#include <iostream>
#include <vector>

class Chord{
    private:
        std::string scale;
        std::vector <Note> noteList;

    public:
        Chord();
        Chord(std::string chordScale);
        void insertNote (Note newNote);
        void removeNote (Note selectNote);
        void setScale (std::string newScale);
        std::vector<Note> returnNoteVector();
        std::string returnKey(Note inputNote, bool major);

};

#endif // CHORD_H