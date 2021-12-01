#ifndef MAKESONG_H
#define MAKESONG_H
#include <random>

class drum{

    private:

    public:
        /// @brief Constructor for a drum item
        /// @details The constructor initializes the drum object as an empty object
        /// @author Terry Ju
        drum();

        /// @brief Method returns a vector of integers representing the different notes of drums to be played
        /// @details The method takes in a int representing the length of the song to be played, and outputs a set of drum notes to the frontEnd
        /// @param int length, length of the song to be genereated
        /// @author Terry Ju        
        std::vector <int> returnNotes(int length);
        
};

#endif // MAKESONG_H
