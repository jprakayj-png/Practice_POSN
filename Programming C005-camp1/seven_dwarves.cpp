#include <iostream>
using namespace std;

int main()
{
    int height[9];
    int total_height = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> height[i];
        total_height += height[i];
    }
    int diff = total_height - 100;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (height[i] + height[j] == diff)
            {
                height[i] = 0;
                height[j] = 0;
                break;
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
        if (height[i] != 0)
        {
            cout << height[i] << endl;
        }
    }
    return 0;
}