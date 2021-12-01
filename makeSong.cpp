#include "makeSong.h"
#include <algorithm>

// Constructor
makeSong::makeSong(){

}

// Method for returning vector of major chords given a chord
std::vector<Chord> makeSong::makeMajor(Chord inputChord){
    
    // Initializes variables
    int chordSize = inputChord.returnNoteVector().size();
    std::vector<Note> Notes = inputChord.returnNoteVector();
    std::vector <Chord> Chords;
    
    // For the inputchord we will loop through the notes in the chord and
    // find all of the new chords.
    for (int i = 0; i < Notes.size(); i++){
        // Push the new chords to the vector, three chords per note
        for (int x = 1; x <= 3; x++){
            Chords.push_back(majorKey (Notes[i], x));
        }
    }

    // Returns chords
    return Chords;
};

// Method for returning a major chord given an input note and inversion
Chord makeSong::majorKey(Note inputNote, int inversion){

    // Just some random notes. These are the base notes that will be overrided later
    Note firstNote = inputNote;
    Note secondNote ("C", 0);
    Note thirdNote ("D", 0);

    // Initializes left hand and position of notes
    int position = notePosition(inputNote);
    int leftPosition = position;

    Note firstLeft = inputNote;
    Note secondLeft("C", 0);

    // Returns accompanying left hand notes
    if (inputNote.returnOctave() >= 3){
        leftPosition = leftPosition - 12;
        firstLeft = posToNote(leftPosition);
        leftPosition = leftPosition - 12;
        secondLeft = posToNote(leftPosition);
    }

    // Base position of a major triad, notes added to first chord to be returned 
    if (inversion == 1){
    position = position + 4;
    secondNote = posToNote(position);
    position = position + 3;
    thirdNote = posToNote(position);
    }

    // First Inversion of the major triad, notes added to second chord to be returned
    else if (inversion == 2){
        position = position + 4;
        firstNote = posToNote(position);
        position = position + 3;
        secondNote = posToNote(position);
        position = position + 5; 
        thirdNote = posToNote(position);
    }

    // Second inversion of the major triad, notes added to the third chord to be returned
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
    newNotes.insertNote(firstLeft);
    newNotes.insertNote(secondLeft);

    // We will return a chord with the given notes in it.
    return newNotes;

};

// Method for returning a vector of minor chords given an input chord
std::vector<Chord> makeSong::makeMinor(Chord inputChord){
    
    // Initializes variables
    int chordSize = inputChord.returnNoteVector().size();
    std::vector<Note> Notes = inputChord.returnNoteVector();
    std::vector <Chord> Chords;
    
    // For the inputchord we will loop through the notes in the chord and
    // find all of the new chords.    
    for (int i = 0; i < Notes.size(); i++){
        // Push the new chords to the vector, three chords per note
        for (int x = 1; x <= 3; x++){
            Chords.push_back(minorKey (Notes[i], x));
        }
    }

    // Returns chord
    return Chords;
};

// Method for returning a minor chord given an input note and inversion
Chord makeSong::minorKey(Note inputNote, int inversion){

    // Just some random notes. These are the base notes that will be overrided later
    Note firstNote = inputNote;
    Note secondNote ("C", 0);
    Note thirdNote ("D", 0);

    //For left hand
    Note firstLeft = inputNote;
    Note secondLeft("C", 0);

    // Initializes integer representation of positions
    int position = notePosition(inputNote);
    int leftPosition = position;

    // Creates accompanying left hand notes
    if (inputNote.returnOctave() >= 3){
        leftPosition = leftPosition - 12;
        firstLeft = posToNote(leftPosition);
        leftPosition = leftPosition - 12;
        secondLeft = posToNote(leftPosition);
    }

    // Base position of a minor triad, notes added to first chord to be returned 
    if (inversion == 1){
        position = position + 3;
        secondNote = posToNote(position);
        position = position + 4; 
        thirdNote = posToNote(position);
    }

    // First Inversion of the minor triad, notes added to second chord to be returned
    else if (inversion == 2){
        position = position + 3;
        firstNote = posToNote(position);
        position = position + 4;
        secondNote = posToNote(position);
        position = position + 5; 
        thirdNote = posToNote(position);
    }

    // Second inversion of the minor triad, notes added to the third chord to be returned
    else if (inversion == 3){
        position = position + 7;
        firstNote = posToNote(position);
        position = position + 5;
        secondNote = posToNote(position);
        position = position + 3;
        thirdNote = posToNote(position);
    }

    // Make a new chord and add the notes to the chord
    Chord newNotes;
    newNotes.insertNote(firstNote);
    newNotes.insertNote(secondNote);
    newNotes.insertNote(thirdNote);
    newNotes.insertNote(firstLeft);
    newNotes.insertNote(secondLeft);

    // We will return a chord with the given notes in it.
    return newNotes;
};

// Method for returning an integer representation of an input note
int makeSong::notePosition(Note inputNote){
    // Initializes variables
    std::string noteName = inputNote.returnNoteName();
    int octave = inputNote.returnOctave();

    // Since each octave has 12 different notes, we will increase the position by 12 for each octave
    int ocativeMultiplier = octave;
    ocativeMultiplier = ocativeMultiplier * 12;

    // Returns position of note based on the name of the note
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

    // Need to return something at the end, so we just return some 13 + octiveMultiplier
    return 13 + ocativeMultiplier;
};

// Method for returning a Note representation of an input integer
Note makeSong::posToNote(int position){

    // Initializes variables and calcaultes octave and mod of position
    int Octave = position / 12;
    position = position % 12;
    std::string keyName;
    Note returnedNote ("Init", Octave);

    // Returns the note name given it's position
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
    // Returns note
    return returnedNote;
};
