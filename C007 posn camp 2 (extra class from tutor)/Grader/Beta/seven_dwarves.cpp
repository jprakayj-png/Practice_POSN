#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int height[9];
    int total = 0, diff = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> height[i];
        total += height[i];
    }
    diff = total - 100;
    bool check = false;
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 8; j++)
        {
            if (height[i] + height[j] == diff)
            {
                height[i] = 0;
                height[j] = 0;
                check = true;
                break;
            }
        }
        if (check)
        {
            break;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        if (height[i] != 0)
        {
            cout << height[i] << " \n";
        }
    }
    return 0;
}