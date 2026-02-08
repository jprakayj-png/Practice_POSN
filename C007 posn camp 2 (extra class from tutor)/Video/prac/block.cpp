// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n, h, c;
    cin >> h;
    cin >> n;
    cin >> c;
    char block[h];
    for (int i = 0; i < h; i++)
    {
        block[i] = 'A' + i;
    }
    int r = (c % n) - 1;
    for (int j = r; j < h; j++)
    {
        cout << block[j] << " ";
    }
    for (int j = 0; j <= h - r; j++)
    {
        cout << block[j] << " ";
    }
    return 0;
}