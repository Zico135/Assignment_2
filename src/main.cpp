#include "../include/mazeHeader.hpp"
#include <array>
#include <iostream>

int main(void) {
    std::array<std::array<char, 12>, 12> maze = getMaze();

    printMaze(maze);


    return 0;
}
