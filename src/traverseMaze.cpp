#include "../include/mazeHeader.hpp"

//Define function to move through the maze. Notice the & symbols again.
void traverseMaze(std::array<std::array<char,12>,12>& maze, std::array<int,2> position, Direction direction) {
    //For readability split position to seperate coordinates.
    int current_x = position[1];
    int current_y = position[0];
    //Create boolean to check if the maze is solved.
    bool reachedEnd = 0;
    //Depending on the current direction, the relative directions are computed:
    Direction rightDir, forwardDir, leftDir, backDir;
    if (direction == Direction::Up) {
        rightDir   = Direction::Right; //Example, right with respect to up is right
        forwardDir = Direction::Up;
        leftDir    = Direction::Left;
        backDir    = Direction::Down;
    }
    else if (direction == Direction::Right) {
        rightDir   = Direction::Down; //Example, right with respect to right would be down
        forwardDir = Direction::Right;
        leftDir    = Direction::Up;
        backDir    = Direction::Left;
    }
    else if (direction == Direction::Down) {
        rightDir   = Direction::Left;
        forwardDir = Direction::Down;
        leftDir    = Direction::Right;
        backDir    = Direction::Up;
    }
    else if (direction == Direction::Left) {
        rightDir   = Direction::Up;
        forwardDir = Direction::Left;
        leftDir    = Direction::Down;
        backDir    = Direction::Right;
    } else {
        //If no direction, then show error
        std::cout << "ERROR, direction not found";
    }

    //Loop over all 4 possible directions and check if they are movable:
    //(in the order of right, forward, left and otherwise go back)
    Direction directions[4] = { rightDir, forwardDir, leftDir, backDir };
    for (int i = 0; i < 4; i++) {
        //Create new coordinate variables that we can freely change without changing current coordinates
        int newY = current_y;
        int newX = current_x;

        //Convert direction to movement
        //(0,0 is left top, so going up is negative y, going right is positive x etc.)
        if (directions[i] == Direction::Up) {
            newY--; //change the relevant coordinate by 1 in the correct direction
        }
        else if (directions[i] == Direction::Down) {
            newY++;
        }
        else if (directions[i] == Direction::Left) {
            newX--;
        }
        else if (directions[i] == Direction::Right) {
            newX++;
        }

        //Check if that spot is a movable spot (either . or x)
        if (maze[newY][newX] == '.' || maze[newY][newX] == 'x') {
            //If the spot is found, we move there, so the current coordinates are adjusted and the direction is adjusted.
            current_y = newY;
            current_x = newX;
            direction = directions[i];
            break; //And after the first spot we found we no longer have to look, so we break.
        }
    }
    //Now we change the character to show we have moved to this spot and we print the new maze
    maze[current_y][current_x] = 'x';
    printMaze(maze);

    //If we are at the end (hardcoded coordinates), display solved
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