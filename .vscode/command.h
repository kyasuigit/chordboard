/** Kohei Yasui
 *  Command Class Header
 *  10/03/2021
 **/
#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include <boost/process.hpp> // include boost items
class Command
{
    private:
        std::string commandText; // privatge variables for command, result, and return code. 
        std::string resultText;
        int returnCode;
    public:
        Command(std::string cmdtext); // declare the methods used in the Command class.
        void execute();
        void setText(std::string newText);
        std::string getCommand();
        std::string getResult();
        int getReturnCode();
        ~Command();
};

#endif