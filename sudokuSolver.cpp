#include <bits/stdc++.h>
using namespace std;

bool isSafe(int arr[9][9], int row, int col, int val)
{
    // Row check
    for (int i = 0; i < 9; i++)
    {
        if (arr[row][i] == val)
        {
            return false;
        }
    }

    // Column check
    for (int i = 0; i < 9; i++)
    {
        if (arr[i][col] == val)
        {
            return false;
        }
    }

    // 3x3 Subgrid check
    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[startRow + i][startCol + j] == val)
            {
                return false;
            }
        }
    }

    return true;
}

bool solve(int arr[9][9], int row, int col)
{
    // Base case: if we reached the end (row = 9)
    if (row == 9)
    {
        return true;
    }

    // If column ends, move to next row
    if (col == 9)
    {
        return solve(arr, row + 1, 0);
    }

    // If current cell is already filled, move to next column
    if (arr[row][col] != 0)
    {
        return solve(arr, row, col + 1);
    }

    // Try placing values 1 to 9
    for (int val = 1; val <= 9; val++)
    {
        if (isSafe(arr, row, col, val))
        {
            arr[row][col] = val; // Place value

            if (solve(arr, row, col + 1)) // Recur for next cell
            {
                return true;
            }

            arr[row][col] = 0; // Backtrack
        }
    }

    return false; // If no valid number found
}

void printSudoku(int arr[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[9][9] =
    {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solve(arr, 0, 0))
    {
        cout << "Solved Sudoku:\n";
        printSudoku(arr);
    }
    else
    {
        cout << "No solution exists.";
    }

    return 0;
}
