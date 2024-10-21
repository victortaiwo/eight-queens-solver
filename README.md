# Eight Queens Problem Solver

## Description
This project implements a solution to the classic Eight Queens puzzle using C++. The goal is to place eight queens on an 8x8 chessboard such that no two queens are attacking each other. The program uses a recursive backtracking algorithm to find a valid solution.

## Features
- Recursive solution to the Eight Queens problem
- Visualization of the chessboard with queens' positions
- Efficient backtracking algorithm

## How to Run
1. Ensure you have a C++ compiler installed on your system.
2. Clone this repository:
   ```
   git clone https://github.com/yourusername/eight-queens-solver.git
   ```
3. Navigate to the project directory:
   ```
   cd eight-queens-solver
   ```
4. Compile the program:
   ```
   g++ -o queens queens.cpp
   ```
5. Run the executable:
   ```
   ./queens
   ```

## Output
The program will output the solution as an 8x8 grid, where:
- `1` represents a queen
- `0` represents an empty square

Example output:
```
1 0 0 0 0 0 0 0
0 0 0 0 1 0 0 0
0 0 0 0 0 0 0 1
0 0 0 0 0 1 0 0
0 0 1 0 0 0 0 0
0 0 0 0 0 0 1 0
0 1 0 0 0 0 0 0
0 0 0 1 0 0 0 0
```

## Implementation Details
The solution uses a `Queens` class that encapsulates the chessboard and the solving algorithm. Key methods include:
- `isSafe()`: Checks if it's safe to place a queen at a given position
- `placeQueens()`: Recursive method to place queens on the board
- `printBoard()`: Displays the final solution

## Author
[victor taiwo]

## Acknowledgments
This project was completed as part of the CSCI 241 course assignment.
