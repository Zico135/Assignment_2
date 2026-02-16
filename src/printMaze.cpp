#include "../include/mazeHeader.hpp"

//Define the function with the maze as input. Notice the & symbol to call by reference
void printMaze(const std::array<std::array<char,12>,12>& maze) {
    // for every cell in every row display its character and a space for readability
    for (const std::array<char, 12>& row : maze) {
        for (char cell : row) {
            std::cout << cell << ' ';
        }
        std::cout << std::endl;
    }
    //After each maze add a line to seperate the mazes when traversing
    std::cout << "----------------------" << std::endl;
}