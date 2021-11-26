#include "findChord.h"
#include <algorithm>


using namespace std;

// Constructor for the class.

findChord::findChord(){

}

// Constructor

findChord::findChord (Chord inputChord){

    // Vector of notes.
    // std::vector <Note> Notes = inputChord.returnNoteVector();
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
        // Push the new chords to the vector, three chords per note
        for (int x = 1; x <= 3; x++){
            Chords.push_back(majorKey (Notes[i], x));
        }
    }

    return Chords;
};

Chord findChord::majorKey(Note inputNote, int inversion){

    // Just some random notes. These are the base notes that will be overrided later
    Note firstNote = inputNote;
    Note secondNote ("C", 0);
    Note thirdNote ("D", 0);

    int position = notePosition(inputNote);

    // Base form
    if (inversion == 1){
    // Major third
    position = position + 4;
    secondNote = posToNote(position);
    position = position + 3;
    thirdNote = posToNote(position);
    }

    // The following inversions need to be completed.

    // First Inversion
    else if (inversion == 2){
        position = position + 4;
        firstNote = posToNote(position);
        position = position + 3;
        secondNote = posToNote(position);
        position = position + 5; 
        thirdNote = posToNote(position);
    }

    // // Second Inversion
    else if (inversion == 3){
        position = position + 7;
        firstNote = posToNote(position);
        position = position + 5;
        secondNote = posToNote(position);
        position = position + 4;
        thirdNote = posToNote(position);
    }

    // Make a new chord and add the notes to the chord
    Chord newNotes;
    newNotes.insertNote(firstNote);
  

    newNotes.insertNote(secondNote);
    newNotes.insertNote(thirdNote);

    // std::cout << newNote.returnNoteName() << endl;
    // std::cout << secondNote.returnNoteName() << endl;

    // We will return a chord with the given notes in it.
    return newNotes;

};

std::vector<Chord> findChord::findMinor(Chord inputChord){
  int chordSize = inputChord.returnNoteVector().size();
    std::vector<Note> Notes = inputChord.returnNoteVector();
    // Chord existingNotes;

    std::vector <Chord> Chords;
    
    // For the inputchord we will loop through the notes in the chord and
    // find all of the new chords.
    for (int i = 0; i < Notes.size(); i++){
        // Push the new chords to the vector, three chords per note
        for (int x = 1; x <= 3; x++){
            Chords.push_back(minorKey (Notes[i], x));
        }
    }

    return Chords;

};

Chord findChord::minorKey(Note inputNote, int inversion){

    // Just some random notes. These are the base notes that will be overrided later
    Note firstNote = inputNote;
    Note secondNote ("C", 0);
    Note thirdNote ("D", 0);

    int position = notePosition(inputNote);

    // Base form
    if (inversion == 1){
    // Major third
        position = position + 3;
        secondNote = posToNote(position);
        position = position + 4; 
        thirdNote = posToNote(position);
        // std::cout << firstNote.returnNoteName();
        // std::cout << secondNote.returnNoteName();
        // std::cout << thirdNote.returnNoteName();

    }

    // The following inversions need to be completed.

    // First Inversion
    else if (inversion == 2){
        position = position + 3;
        firstNote = posToNote(position);
        position = position + 4;
        secondNote = posToNote(position);
        position = position + 5; 
        thirdNote = posToNote(position);
        // std::cout << "second-inversion ";
    }

    // // Second Inversion
    else if (inversion == 3){
        position = position + 7;
        firstNote = posToNote(position);
        position = position + 5;
        secondNote = posToNote(position);
        position = position + 3;
        thirdNote = posToNote(position);
        // std::cout << "third-inversion ";
    }

    // Make a new chord and add the notes to the chord
    Chord newNotes;
    newNotes.insertNote(firstNote);
    newNotes.insertNote(secondNote);
    newNotes.insertNote(thirdNote);

    // std::cout << newNote.returnNoteName() << endl;
    // std::cout << secondNote.returnNoteName() << endl;

    // We will return a chord with the given notes in it.
    return newNotes;


};

int findChord::notePosition(Note inputNote){
    std::string noteName = inputNote.returnNoteName();
    int octave = inputNote.returnOctave();

    int ocativeMultiplier = octave;
    ocativeMultiplier = ocativeMultiplier * 12;
    // std:: cout << ocativeMultiplier;

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

    // std::cout << position << endl;
    int Octave = position / 12;
    position = position % 12;
    std::string keyName;
    Note returnedNote ("Init", Octave);

    if (position == 1){
        returnedNote.changeNote("C");

    } else if (position == 2){
        returnedNote.changeNote("C#");

    }  else if (position == 3){
        returnedNote.changeNote("D");

    } else if (position == 4){
        returnedNote.changeNote("D#");

    } else if (position == 5){
        returnedNote.changeNote("E");

    } else if (position == 6){
        returnedNote.changeNote("F");

    } else if (position == 7){
        returnedNote.changeNote("F#");

    } else if (position == 8){
        returnedNote.changeNote("G");
        
    } else if (position == 9){
        returnedNote.changeNote("G#");

    } else if (position == 10){
        returnedNote.changeNote("A");

    } else if (position == 11){
        returnedNote.changeNote("A#");

    } else if (position == 0){
        returnedNote.changeNote("B");

    }
    return returnedNote;
};
