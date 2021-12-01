#include "findChord.h"
#include <algorithm>

// Constructor of findChord
findChord::findChord(){

}

// Method returns a vector of chords in a major scale given a chord input
std::vector<Chord> findChord::findMajor(Chord inputChord){
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

    // Returns the chord
    return Chords;
};

// Method returns a chord given an inpute note and inversion in a major scale
Chord findChord::majorKey(Note inputNote, int inversion){

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

    // Make a new chord and add the determined notes to the chord
    Chord newNotes;
    newNotes.insertNote(secondLeft);
    newNotes.insertNote(firstLeft);
    newNotes.insertNote(firstNote);
    newNotes.insertNote(secondNote);
    newNotes.insertNote(thirdNote);


    // We will return a chord with the given notes in it.
    return newNotes;

};

// Method returns a vector of chords in a major scale given an input chord for trumpet and flute
std::vector<Chord> findChord::blowMajor(Chord inputChord){
    int chordSize = inputChord.returnNoteVector().size();
    std::vector<Note> Notes = inputChord.returnNoteVector();
    std::vector <Chord> Chords;
    
    // For the inputchord we will loop through the notes in the chord and
    // find all of the new chords.
    for (int i = 0; i < Notes.size(); i++){
        // Push the new chords to the vector, three chords per note
        for (int x = 1; x <= 3; x++){
            Chords.push_back(blowInstrumentsMajor (Notes[i], x));
        }
    }

    // Returns chords
    return Chords;
}

// Method returns a vector of chords in a minor scale given an input chord for trumpet and flute
std::vector<Chord> findChord::blowMinor(Chord inputChord){
    
    // Initializes variables
    int chordSize = inputChord.returnNoteVector().size();
    std::vector<Note> Notes = inputChord.returnNoteVector();
    std::vector <Chord> Chords;
    
    // For the inputchord we will loop through the notes in the chord and
    // find all of the new chords.
    for (int i = 0; i < Notes.size(); i++){
        // Push the new chords to the vector, three chords per note
        for (int x = 1; x <= 3; x++){
            Chords.push_back(blowInstrumentsMinor (Notes[i], x));
        }
    }

    // Returns the chords
    return Chords;
}

// Method returns a vector of chords in a major scale given an input chord
std::vector<Chord> findChord::findMinor(Chord inputChord){
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

    // Returns chords
    return Chords;
};

// Method returns a chord in a minor scale given an input note and inversion
Chord findChord::minorKey(Note inputNote, int inversion){

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

    // Base position of a mionr triad, notes added to first chord to be returned 
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
    newNotes.insertNote(secondLeft);
    newNotes.insertNote(firstLeft);
    newNotes.insertNote(firstNote);
    newNotes.insertNote(secondNote);
    newNotes.insertNote(thirdNote);

    // We will return a chord with the given notes in it.
    return newNotes;

};

// Method returns a chord representing a song given an input note, key, and length
Chord findChord::makeSong(Note inputNote, std::string key, int length){
    Note startingNote = Note("C", 4);
    startingNote.changeNote(inputNote.returnNoteName());

    // Initializes variables
    Chord songNotes;
    std::vector <Note> scaleNotes;
    int notePos = notePosition(startingNote);

    // Initializes notes
    Note firstNote(startingNote);
    Note secondNote(startingNote);
    Note thirdNote(startingNote);
    Note fourthNote(startingNote);
    Note fifthNote(startingNote);
    Note sixthNote(startingNote);
    Note seventhNote(startingNote);

    // creates and adds major notes if major is input
    if (key == "major"){
        notePos = notePos + 2;
        secondNote.changeNote(posToNote(notePos).returnNoteName());
        notePos = notePos + 2;
        thirdNote.changeNote(posToNote(notePos).returnNoteName());
        notePos = notePos + 1;
        fourthNote.changeNote(posToNote(notePos).returnNoteName());
        notePos = notePos + 2;
        fifthNote.changeNote(posToNote(notePos).returnNoteName());
        notePos = notePos + 2;
        sixthNote.changeNote(posToNote(notePos).returnNoteName());
        notePos = notePos + 2;
        seventhNote.changeNote(posToNote(notePos).returnNoteName());
    }

    // creates and adds minor notes if minor is input
    else if (key == "minor"){
        notePos = notePos + 2;
        secondNote.changeNote(posToNote(notePos).returnNoteName());
        notePos = notePos + 1;
        thirdNote.changeNote(posToNote(notePos).returnNoteName());
        notePos = notePos + 2;
        fourthNote.changeNote(posToNote(notePos).returnNoteName());
        notePos = notePos + 2;
        fifthNote.changeNote(posToNote(notePos).returnNoteName());
        notePos = notePos + 2;
        sixthNote.changeNote(posToNote(notePos).returnNoteName());
        notePos = notePos + 1;
        seventhNote.changeNote(posToNote(notePos).returnNoteName());
    }

    // Pushes the notes to the scale to create either a major or minor scale based on input
    scaleNotes.push_back(firstNote);
    scaleNotes.push_back(secondNote);
    scaleNotes.push_back(thirdNote);
    scaleNotes.push_back(fourthNote);
    scaleNotes.push_back(fifthNote);
    scaleNotes.push_back(sixthNote);
    scaleNotes.push_back(seventhNote);

    // Ensures that the randomization will be different each time the program is run
    srand(time(NULL));

    // Randomly adds notes from the scale to the song for the specified length
    for (int x = 0; x < length; x++){
        int randomNote = rand() % 6;
        songNotes.insertNote(scaleNotes.at(randomNote));    
    }

    // Returns the chord of the song
    return songNotes;
}

// Method returns a major chord for trumpet and flute given an input note and inversion
Chord findChord::blowInstrumentsMajor(Note inputNote, int inversion){

    // Initializes notes and position of input note
    Note firstNote = inputNote;
    Note secondNote ("C", 0);
    Note thirdNote ("D", 0);
    int position = notePosition(inputNote);

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

    // We will return a chord with the given notes in it.
    return newNotes;
}

// Method returns a chord in a minor scale given an input note and inversion
Chord findChord::blowInstrumentsMinor(Note inputNote, int inversion){
   
    // Initializes notes and position of input note
    Note firstNote = inputNote;
    Note secondNote ("C", 0);
    Note thirdNote ("D", 0);
    int position = notePosition(inputNote);

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

    // We will return a chord with the given notes in it.
    return newNotes;
}

// Method returns an int given a note to represent its location on the piano
int findChord::notePosition(Note inputNote){

    // Initializes variables
    std::string noteName = inputNote.returnNoteName();
    int octave = inputNote.returnOctave();
    
    // Since each octave has 12 different notes, we will increase the position by 12 for each octave
    int ocativeMultiplier = octave;
    ocativeMultiplier = ocativeMultiplier * 12;

    // Returns position of note based on the name of the note
    if (noteName == "C"){
        return 12 + ocativeMultiplier;
    } else if (noteName == "C#"){
        return 1 + ocativeMultiplier;
    } else if (noteName == "D"){
        return 2 + ocativeMultiplier;
    } else if (noteName == "D#"){
        return 3 + ocativeMultiplier;
    } else if (noteName == "E"){
        return 4 + ocativeMultiplier;
    } else if (noteName == "F"){
        return 5 + ocativeMultiplier;
    } else if (noteName == "F#"){
        return 6 + ocativeMultiplier;
    } else if (noteName == "G"){
        return 7 + ocativeMultiplier;
    } else if (noteName == "G#"){
        return 8 + ocativeMultiplier;
    } else if (noteName == "A"){
        return 9 + ocativeMultiplier;
    } else if (noteName == "A#"){
        return 10 + ocativeMultiplier;
    } else if (noteName == "B"){
        return 11 + ocativeMultiplier;
    }

    // Need to return something at the end, so we just return some 13 + octiveMultiplier
    return 13 + ocativeMultiplier;
};

// Method returns a note given an int to represent the note on the piano
Note findChord::posToNote(int position){

    // Initializes variables and calcaultes octave and mod of position
    int Octave = position / 12;
    position = position % 12;
    std::string keyName;
    Note returnedNote ("Init", Octave);
    
    // Returns the note name given it's position
    if (position == 0){
        returnedNote.changeNote("C");
    }
    else if (position == 1){
        returnedNote.changeNote("C#");

    } else if (position == 2){
        returnedNote.changeNote("D");

    }  else if (position == 3){
        returnedNote.changeNote("D#");

    } else if (position == 4){
        returnedNote.changeNote("E");

    } else if (position == 5){
        returnedNote.changeNote("F");

    } else if (position == 6){
        returnedNote.changeNote("F#");

    } else if (position == 7){
        returnedNote.changeNote("G");

    } else if (position == 8){
        returnedNote.changeNote("G#");
        
    } else if (position == 9){
        returnedNote.changeNote("A");

    } else if (position == 10){
        returnedNote.changeNote("A#");

    } else if (position == 11){
        returnedNote.changeNote("B");
    }
 
    // Returns Note
    return returnedNote;
};
