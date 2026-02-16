#include "../include/mazeHeader.hpp"

int main(void) {
    std::array<std::array<char, 12>, 12> maze = getMaze();

    printMaze(maze);
    std::pair<int,int> start = getStart(maze);

    int x_start = start.first;
    int y_start = start.second;

    return 0;
}
