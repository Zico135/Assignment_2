#include "../include/mazeHeader.hpp"

//Define the function with the maze as input. Notice the & symbol to call by reference
void printMaze(const std::array<std::array<char,12>,12>& maze) {
    for (const std::array<char, 12>& row : maze) {
        for (char cell : row) {
            std::cout << cell << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << "----------------------" << std::endl;
}