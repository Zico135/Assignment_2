#ifndef MAZEHEADER_HPP
#define MAZEHEADER_HPP

#include <array>
#include <vector>
#include <iostream>
#include <thread>   // for std::this_thread::sleep_for
#include <chrono>   // for std::chrono::milliseconds

enum class Direction {
    Left,
    Right,
    Up,
    Down
};

std::array<std::array<char, 12>, 12> getMaze();
void printMaze(const std::array<std::array<char, 12>, 12>& maze);
std::pair<int,int> getStart(const std::array<std::array<char, 12>, 12>& maze);
void traverseMaze(std::array<std::array<char, 12>, 12>& maze, std::pair<int,int> position, Direction direction);

#endif
