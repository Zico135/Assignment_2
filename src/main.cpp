#include "../include/mazeHeader.hpp"

//standard main definition
int main(void) {
    //First create the maze
    std::array<std::array<char, 12>, 12> maze = getMaze();
    //Then print the maze
    printMaze(maze);
    //Then find the start of the maze
    std::array<int,2> start = getStart(maze);
    //Define a starting direction, made left since it starts all the way on the right side
    Direction init_direction = Direction::Left;
    //Move through the maze
    traverseMaze(maze, start, init_direction);

    return 0;
}
