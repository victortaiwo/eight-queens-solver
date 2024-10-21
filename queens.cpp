//*******************************************************************
//
//  queens.cpp
//  CSCI 241 Assignment 5
//
//  Created by Victor Taiwo
//
//***************************************************************************
/**
 * @brief Solution for the Eight queens problem
 *
 * that places eight queens on a chessboard (8 x 8 board) such that no queen is “attacking” another
 *
 * goal is  to solve the puzzle.
*/

#include <iostream>
#include <vector>

using namespace std;
class Queens {
private:
    std::vector<std::vector<int>> board;//A 2D vector that shows the 8x8 chessboard.
public:
    Queens() : board(8, std::vector<int>(8, 0)) {} //Constructor that initializes the board with an 8x8 grid in which all values are set to 0.
    bool isSafe(int row, int col) { //Checksto see if its safe to put a queen at position
        for (int i = 0; i < row; ++i) {
            if (board[i][col] == 1) {
                return false;
            }
        }

        // Checking upper-left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
            if (board[i][j] == 1) {
                return false;
            }
        }

        // Checking upper-right diagonal
        for (int i = row, j = col; i >= 0 && j < 8; --i, ++j) {
            if (board[i][j] == 1) {
                return false;
            }
        }

        return true;
    }

    bool placeQueens(int row) { // attempts to drop queens row by row.
        if (row == 8) { // when all queens are placed successfully.
            return true; // All queens are placed successfully
        }

        for (int col = 0; col < 8; ++col) {
            if (isSafe(row, col)) {
                // Place queen
                board[row][col] = 1;

                // Recur for the next row
                if (placeQueens(row + 1)) {
                    return true; // If successful, return true
                }

                // backtrack if no solution
                board[row][col] = 0;
            }
        }

        return false; // No safe column found for this row
    }

    void printBoard() const { //gives what the board looks like.
        for (const auto& row : board) {
            for (int cell : row) {
                std::cout << cell << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Queens queens; //create intance of queens
    
    if (queens.placeQueens(0)) {
        queens.printBoard();
    } else {
        std::cout << "No solution found." << std::endl;
    }

    return 0; //end the code
}
