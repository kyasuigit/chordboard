#ifndef MAKESONG_H
#define MAKESONG_H
#include <random>

class drum{

    private:
        // std::vector <Note> Notes;

    public:
        drum();
        std::vector <int> returnNotes(int length);
        
};

#endif // MAKESONG_H
