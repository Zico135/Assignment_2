#include "../include/mazeHeader.hpp"

int main(void) {
    std::array<std::array<char, 12>, 12> maze = getMaze();

    printMaze(maze);
    std::pair<int,int> start = getStart(maze);
    Direction init_direction = Direction::Left;
    traverseMaze(maze, start, init_direction);

    return 0;
}
