#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    int grid[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid[i][j];
        }
    }
    if (row == 1)
    {
        for (int j = 0; j < col; j++)
        {
            cout << grid[0][j] << " ";
        }
    }
    else if (col == 1)
    {
        for (int i = 0; i < row; i++)
        {
            cout << grid[i][0] << " ";
        }
    }
    else
    {
        for (int j = 0; j < col; j++)
        {
            cout << grid[0][j] << " ";
        }
        for (int i = 1; i < row; i++)
        {
            cout << grid[i][col - 1] << " ";
        }
        for (int j = col - 2; j >= 0; j--)
        {
            cout << grid[row - 1][j] << " ";
        }
        for (int i = row - 2; i > 0; i--)
        {
            cout << grid[i][0] << " ";
        }
    }
    return 0;
}