#include "../include/mazeHeader.hpp"

void traverseMaze(std::array<std::array<char,12>,12>& maze, std::pair<int,int> position, Direction direction) {
    int current_x = position.second;
    int current_y = position.first;
    bool reachedEnd = 0;
    if (direction == Direction::Left) {
        if (maze[current_y-1][current_x]=='.' || maze[current_y-1][current_x]=='x'){
            current_y--;
            direction = Direction::Up;
        } else if (maze[current_y][current_x-1]=='.' || maze[current_y][current_x-1]=='x'){
            current_x--;
            direction = Direction::Left;
        } else if (maze[current_y+1][current_x]=='.' || maze[current_y+1][current_x]=='x'){
            current_y++;
            direction = Direction::Down;
        } else {
            current_x++;
            direction = Direction::Right;
        }
        maze[current_y][current_x] = 'x';
        printMaze(maze);
    } else if (direction == Direction::Down) {
        if (maze[current_y][current_x-1]=='.' || maze[current_y][current_x-1]=='x'){
            current_x--;
            direction = Direction::Left;
        } else if (maze[current_y+1][current_x]=='.' || maze[current_y+1][current_x]=='x'){
            current_y++;
            direction = Direction::Down;
        } else if (maze[current_y][current_x+1]=='.' || maze[current_y][current_x+1]=='x'){
            current_x++;
            direction = Direction::Right;
        } else {
            current_y--;
            direction = Direction::Up;
        }
        maze[current_y][current_x] = 'x';
        printMaze(maze);
    } else if (direction == Direction::Right) {
        if (maze[current_y+1][current_x]=='.' || maze[current_y+1][current_x]=='x'){
            current_y++;
            direction = Direction::Down;
        } else if (maze[current_y][current_x+1]=='.' || maze[current_y][current_x+1]=='x'){
            current_x++;
            direction = Direction::Right;
        } else if (maze[current_y-1][current_x]=='.' || maze[current_y-1][current_x]=='x'){
            current_y--;
            direction = Direction::Up;
        } else {
            current_x--;
            direction = Direction::Left;
        }
        maze[current_y][current_x] = 'x';
        printMaze(maze);
    } else if (direction == Direction::Up) {
        if (maze[current_y][current_x+1]=='.' || maze[current_y][current_x+1]=='x'){
            current_x++;
            direction = Direction::Right;
        } else if (maze[current_y-1][current_x]=='.' || maze[current_y-1][current_x]=='x'){
            current_y--;
            direction = Direction::Up;
        } else if (maze[current_y][current_x-1]=='.' || maze[current_y][current_x-1]=='x'){
            current_x--;
            direction = Direction::Left;
        } else {
            current_y++;
            direction = Direction::Down;
        }
        maze[current_y][current_x] = 'x';
        printMaze(maze);
    } else {
        std::cout << "ERROR, direction not found";
    }
    if (current_x == 0 && current_y == 2) {
        reachedEnd = true;
    }
    if (reachedEnd) {
        std::cout << "The maze is solved!" << std::endl;
    } else {
        std::pair<int,int> current_position = {current_y,current_x};
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        traverseMaze(maze,current_position,direction);
    }
}