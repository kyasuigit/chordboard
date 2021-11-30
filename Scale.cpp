#include "Scale.h"

Scale::Scale(Note newRoot) {
    root = newRoot;
    scaleNotes[0] = newRoot;
    type = "Major";

    Scale* self = this;
    self->fillScale();
}

Scale::Scale(Note newRoot, std::string newType) {
    root = newRoot;
    scaleNotes[0] = newRoot;
    type = newType;
            
    Scale* self = this;
    self->fillScale();
}

void Scale::setRoot(Note newRoot) {
    root = newRoot;
    scaleNotes[0] = newRoot;

    this->fillScale();
}

void Scale::setType(std::string newType) {
    type = newType;
}

Note Scale::getNote(int position) {
    Note returnNote = scaleNotes[(position-1) % 7];
    returnNote.changeOctave(returnNote.returnOctave() + (position-1)/7);
    return returnNote;
}

void Scale::fillScale() {
    int i;
    std::string rootName = root.returnNoteName();

    for(i = 0; orderOfSharps[i] != rootName[0]; i++);

    if(rootName[1] == '#'){
        i = i+6;
    }
    else if(rootName[1] == 'b'){
        i = i-8;
    }
    else {
        i = i-1;   
    }

    addNotes(rootName[0], root.returnOctave(), i);
}

void Scale::addNotes(char note, int oct, int numberOfSharps){
    char returned;
    std::string noteStr;
    for(int i = 1; i < 7; i++) {
        note++;
        if (note > 71){
            note -= 7;
            oct++;
        }
            
        noteStr = std::string("");
        returned = flatNaturalSharp(note, numberOfSharps);
        noteStr.append(1, note);
        noteStr.append(1, returned);
        scaleNotes[i] = Note(noteStr, oct);
    }
}

char Scale::flatNaturalSharp(char note, int numberOfSharps){
    if (type == "Major"){
        if(numberOfSharps < 0){
            for(int i = 6; i > 6 + numberOfSharps; i--){
                if(orderOfSharps[i] == note){
                    return 'b';
                }
            }
        }
        else{
            for(int i = 0; i < numberOfSharps; i++){
                if(orderOfSharps[i] == note){
                    return '#';
                }
            }
        }
    }

    return '\0';
}
