#include <iostream>
using namespace std;
enum Note { C, Cflat, Csharp, D, Dflat, Dsharp, E, Eflat, Esharp, F, Fflat, Fsharp, G, Gflat, Gsharp, A, Aflat, Asharp, B, Bflat, Bsharp};

class Piano : public Instrument {
    public:
        void play(Chord chord) const = 0;{
            vector<Note> notelist = chord.getnotes();
            int notecount = chord.numofnotes();
            for (int i = 0; i<notecount; i++) {}
                    notelist.front() // code to play audio through API
            }
        }
        char* whatinstrument() const {
            return "Piano";
        }
};
