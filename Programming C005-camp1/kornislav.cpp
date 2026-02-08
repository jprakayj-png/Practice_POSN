#include <iostream>
using namespace std;

int main()
{
    int move[4];
    cin >> move[0] >> move[1] >> move[2] >> move[3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (move[j] < move[i])
            {
                int temp = move[i];
                move[i] = move[j];
                move[j] = temp;
            }
        }
    }
    cout << move[0] * move[2] << endl;
    return 0;
}