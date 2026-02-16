#ifndef MAZEHEADER_HPP
#define MAZEHEADER_HPP

#include <array>

std::array<std::array<char, 12>, 12> getMaze();
void printMaze(const std::array<std::array<char, 12>, 12>& maze);
std::pair<int,int> getStart(const std::array<std::array<char, 12>, 12>& maze);

#endif
