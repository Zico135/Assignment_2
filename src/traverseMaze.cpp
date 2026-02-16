#include "../include/mazeHeader.hpp"

//Define function to move through the maze. Notice the & symbols again.
void traverseMaze(std::array<std::array<char,12>,12>& maze, std::array<int,2> position, Direction direction) {
    //For readability split position to seperate coordinates.
    int current_x = position[1];
    int current_y = position[0];
    //Create boolean to check if the maze is solved.
    bool reachedEnd = 0;
    //Depending on direction, check to the right, then forward, then left and otherwise go back. 
    //When direction in the maze is left, then up is to the right of the current direction.
    //This goes for all directions
    if (direction == Direction::Left) {
        //Check if the next spot has a dot(free) or an x(have been here before), to check if we can move there
        if (maze[current_y-1][current_x]=='.' || maze[current_y-1][current_x]=='x'){
            //Adjust coordinate to new spot
            current_y--;
            //Adjust direction to new direction
            direction = Direction::Up;
        } else if (maze[current_y][current_x-1]=='.' || maze[current_y][current_x-1]=='x'){
            current_x--;
            direction = Direction::Left;
        } else if (maze[current_y+1][current_x]=='.' || maze[current_y+1][current_x]=='x'){
            current_y++;
            direction = Direction::Down;
        } else {
            //If all other directions are invalid, go back
            current_x++;
            direction = Direction::Right;
        }
        //Change the maze to mark where I have been with an x
        maze[current_y][current_x] = 'x';
        //Print the new maze
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
        //If no direction, then show error
        std::cout << "ERROR, direction not found";
    }
    //If we are at the end (hardcoded), display solved
    if (current_x == 0 && current_y == 2) {
        std::cout << "The maze is solved!" << std::endl;    
    } else {
        //If not reached end, then define our new position
        //Wait a bit for readability of steps throught the maze
        //Do a new step from new position with new direction
        position = {current_y,current_x};
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        traverseMaze(maze,position,direction);
    }
}