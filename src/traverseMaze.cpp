#include "../include/mazeHeader.hpp"
#include <iostream>

std::pair<int,int> traverseMaze(const std::array<std::array<char,12>,12>& maze) {
    for (int row = 0; row < 12; row++) {
        for (int col = 0; col < 12; col++) {
            if (maze[row][col] == 'x') {
                std::cout << "start position is: " << row << ' ' << col;
                return {row,col};
            }
        }
    }
    return {-1,-1};
}