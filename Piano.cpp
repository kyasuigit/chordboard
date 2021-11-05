#include <iostream>
using namespace std;
enum Note { C, Cflat, Csharp, D, Dflat, Dsharp, E, Eflat, Esharp, F, Fflat, Fsharp, G, Gflat, Gsharp, A, Aflat, Asharp, B, Bflat, Bsharp};

class Piano : public Instrument {
    public:
        void play(Note) const = 0;{
            
        }
        char* whatinstrument() const {
            return "Piano";
        }
};
