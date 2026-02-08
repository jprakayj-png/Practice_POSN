#include <iostream>
using namespace std;

int main()
{
    int row, col = 0;
    cin >> row;
    if (row % 2 == 0)
    {
        col = row - 1;
    }
    else
    {
        col = row;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if ((i == 0 || i == row - 1) && (j == col / 2))
            {
                cout << "*";
            }
            else if (i == row / 2 && (j == 0 || j == col - 1))
            {
                cout << "*";
            }
            else if (i == (row / 2) - 1 && (j == 0 || j == col - 1) && row % 2 == 0)
            {
                cout << "*";
            }
            else if (i < row / 2 && i != 0)
            {
                if (j == (col / 2) - i || j == (col / 2) + i)
                {
                    cout << "*";
                }
                else
                {
                    cout << "-";
                }
            }
            else if (i > row / 2 && i != row - 1)
            {
                int c = i - (row / 2);
                if (j == c || j == col - c - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << "-";
                }
            }
            else
            {
                cout << "-";
            }
        }
        cout << endl;
    }
    return 0;
}