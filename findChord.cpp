#include "findChord.h"
#include <algorithm>


using namespace std;

// Constructor for the class.
findChord::findChord (Chord inputChord){

    // Vector of notes.
    std::vector <Note> Notes = inputChord.returnNoteVector();
}

bool findChord::containsNote (Note inputNote, Chord inputChord){
    // We will loop through the note vector to see if the note exists. If it does
    // return the note and if not, return NULL
    auto it = std::find (inputChord.returnNoteVector().begin(), inputChord.returnNoteVector().end(), inputNote);

    // Found the item so return true.
    if (it != inputChord.returnNoteVector().end()){
        true;
    }

    // Otherwise, return false.
    else{
        false;
    }
}

// This needs to return a vector of chords not a chord itself.
std::vector<Chord> findChord::findMajor(Chord inputChord){
    int chordSize = inputChord.returnNoteVector().size();
    std::vector<Note> Notes = inputChord.returnNoteVector();
    // Chord existingNotes;

    std::vector <Chord> Chords;

    // For the inputchord we will loop through the notes in the chord and
    // find all of the new chords.
    for (int i = 0; i < Notes.size(); i++){
        // Push the new chords to the vector.
        Chords.push_back(majorKey (Notes[i]));
    }

    // For every note in the input chord
    // for(int i=0; i < Notes.size(); i++){
    //     Note newNote = majorKey(Notes[i], existingNotes);
    //     existingNotes.insertNote((Notes[i]));
    // }

    return Chords;

};

Chord findChord::majorKey(Note inputNote){

    int i;
    i = rand() % 3 + 1;

    // Just some random notes. These are the base notes that will be overrided later
    Note newNote ("C", 0);
    Note secondNote ("D", 0);

    int position = notePosition(inputNote);

    // Base form
    if (i == 1){
        //Major third
        position = position + 4;
        Note newNote = posToNote(position);
        position = position + 3;
        Note secondNote = posToNote(position);
    }

    // The following inversions need to be completed.

    // First Inversion
    else if (i == 2){

    }

    // Second Inversion
    else if (i == 3){

    }

    // Make a new chord and add the notes to the chord
    Chord newNotes;
    newNotes.insertNote(inputNote);
    newNotes.insertNote(newNote);
    newNotes.insertNote(secondNote);

    // We will return a chord with the given notes in it.
    return newNotes;

    //Create a contains method
    // if (existingNotes.returnNoteVector.contains(newNote())){
    //     return newNote();
    // }
};

Chord findChord::findMinor(Chord inputChord){
    int chordSize = inputChord.returnNoteVector().size();
    std::vector<Note> Notes = inputChord.returnNoteVector();

    // Make a new chord. Temporary chord for now...
    Chord newChord ("SCALE");

    for(int i=0; i < Notes.size(); i++){
        newChord.insertNote(minorKey(Notes[i]));
    }

    return newChord;
};

Note findChord::minorKey(Note inputNote){

    int i;
    i = rand() % 3 + 1;

    Note newNote("E", 0);

    int position = notePosition(inputNote);

    // Base form
    if (i == 1){
        //Minor third

        position = position + 3;
        Note newNote = posToNote(position);
    }

    // First Inversion
    else if (i == 2){

    }

    // Second Inversion
    else if (i == 3){

    }

    // Incomplete...
    return newNote;

};

int findChord::notePosition(Note inputNote){
    std::string noteName = inputNote.returnNoteName();
    int octave = inputNote.returnOctave();

    int ocativeMultiplier = octave - 1;
    ocativeMultiplier = ocativeMultiplier * 7;

    //Returns relative position, add equivalence classes for flats later
    if (noteName == "C"){
        return 1 + ocativeMultiplier;
    } else if (noteName == "C#"){
        return 2 + ocativeMultiplier;
    } else if (noteName == "D"){
        return 3 + ocativeMultiplier;
    } else if (noteName == "D#"){
        return 4 + ocativeMultiplier;
    } else if (noteName == "E"){
        return 5 + ocativeMultiplier;
    } else if (noteName == "F"){
        return 6 + ocativeMultiplier;
    } else if (noteName == "F#"){
        return 7 + ocativeMultiplier;
    } else if (noteName == "G"){
        return 8 + ocativeMultiplier;
    } else if (noteName == "G#"){
        return 9 + ocativeMultiplier;
    } else if (noteName == "A"){
        return 10 + ocativeMultiplier;
    } else if (noteName == "A#"){
        return 11 + ocativeMultiplier;
    } else if (noteName == "B"){
        return 12 + ocativeMultiplier;
    }

    // Need to return something at the end just return some 13 + octiveMultiplier
    return 13 + ocativeMultiplier;
};

Note findChord::posToNote(int position){

    int Octave = position % 13;
    std::string keyName;

    if (position == 1){
        Note returnedNote("C", Octave);
        return returnedNote;
    } else if (position == 2){
        Note returnedNote("C#", Octave);
        return returnedNote;
    }  else if (position == 3){
        Note returnedNote("D", Octave);
        return returnedNote;
    } else if (position == 4){
        Note returnedNote("D#", Octave);
        return returnedNote;
    } else if (position == 5){
        Note returnedNote("E", Octave);
        return returnedNote;
    } else if (position == 6){
        Note returnedNote("F", Octave);
        return returnedNote;
    } else if (position == 7){
        Note returnedNote("F#", Octave);
        return returnedNote;
    } else if (position == 8){
        Note returnedNote("G", Octave);
        return returnedNote;
    } else if (position == 9){
        Note returnedNote("G#", Octave);
        return returnedNote;
    } else if (position == 10){
        Note returnedNote("A", Octave);
        return returnedNote;
    } else if (position == 11){
        Note returnedNote("A#", Octave);
        return returnedNote;
    } else if (position == 12){
        Note returnedNote("B", Octave);
        return returnedNote;
    }

    Note returnedNote ("ED", Octave);
    return returnedNote;
};
