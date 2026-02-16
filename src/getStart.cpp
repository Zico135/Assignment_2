#include "../include/mazeHeader.hpp"

//The function is defined where the output is a 1x2 array containing the start coordinates.
//It takes the maze as input to find the x in the maze
std::array<int,2> getStart(const std::array<std::array<char,12>,12>& maze) {
    for (int row = 0; row < 12; row++) {
        //check for all rows
        for (int col = 0; col < 12; col++) {
            //within the rows check the columns
            if (maze[row][col] == 'x') { // if this point is equal to a x character, this is the start
                //output the start position to the terminal
                std::cout << "start position is: " << row << ' ' << col << std::endl;
                // and return the start coordinates to main
                return {row,col};
            }
        }
    }            
    // If no x/start is found, give an error and return error values -1,-1    
    std::cout << "ERROR: No start found" << std::endl;
    return {-1,-1};
}