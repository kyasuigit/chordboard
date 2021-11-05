/** Kohei Yasui
 *  Command Class Implementation
 *  10/03/2021
 **/

#include <iostream>
#include "command.h"

/**
 * The constructor for the Command class. Initializes the variables, with a string to indicate the command text as the parameter. 
 * */
Command::Command(std::string command)
{
    commandText = command; //init vars
    resultText = "";
    returnCode = 0;
}

/**
 * This method executes the command found in this object in Unix and sets the result as a string. 
 * */
void Command::execute()
{
    using namespace boost::process; // uses namespace for boost
    ipstream pipe_stream;
    try {
        child c(commandText, (std_out & std_err) > pipe_stream); // call commandText and get the output and error into pipe stream
        std::string line;

        while (pipe_stream && std::getline(pipe_stream, line) && !line.empty()) // loop through the pipe stream until it is empty
            resultText = resultText + line + "\n"; // concatenated to string
        c.wait();
        }
    catch (process_error e) {
        resultText = "This command does not exist."; // if the command does not exist, the error is caught and the appropriate values are set. 
        returnCode = -1;
    }

}
/**
 * Setter method for commandText by using the std string item in the parameter. 
 * */
void Command::setText(std::string newCommand)
{
    commandText = newCommand;
}
/**
 *  Getter method for returning the commandText value. 
 * */
std::string Command::getCommand() 
{
    return commandText;
}
/**
 *  Getter method for returning the resultText value. 
 * */
std::string Command::getResult()
{
    return resultText;
}
/**
 * Getter method for returning the returnCode value. 
 * */
int Command::getReturnCode()
{
    return returnCode;
}
/**
 * Destructor
 * */
Command::~Command() {
}


