#include "../include/mazeHeader.hpp"
#include <iostream>

void printMaze(const std::array<std::array<char,12>,12>& maze) {
    for (const std::array<char, 12>& row : maze) {
        for (char cell : row) {
            std::cout << cell << ' ';
        }
        std::cout << std::endl;
    }
}