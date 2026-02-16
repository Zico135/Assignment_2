#ifndef MAZEHEADER_HPP
#define MAZEHEADER_HPP

#include <array>
#include <vector>
#include <iostream>
#include <thread>   // Used for waiting, so we can clearly see the steps without going to quick
#include <chrono>   

enum class Direction {
    Left,
    Right,
    Up,
    Down
}; // Define the enumerator class. 

//define the get maze function, it outputs a 12x12 character array, the maze and needs no input.
std::array<std::array<char, 12>, 12> getMaze(); 
//define the print maze function. It prints within the function, so returns nothing and it prints the maze, so it needs a 12x12 array (the maze) as input.
void printMaze(const std::array<std::array<char, 12>, 12>& maze);
//define the get start function. It needs the maze as input and outputs a 1x2 array of the start coordinates where 0,0 is left top.
std::array<int,2> getStart(const std::array<std::array<char, 12>, 12>& maze);
//define the traverse maze function. It returns nothing and needs the maze, a position and the last direction to determine the next step.
void traverseMaze(std::array<std::array<char, 12>, 12>& maze, std::array<int,2> position, Direction direction);

#endif
