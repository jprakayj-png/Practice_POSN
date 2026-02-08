#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int x;
    long long y;
    cin >> x;
    while (x != 0)
    {
        cin >> y;
        if (y % 2 == 0)
        {
            cout << "Y is even" << '\n';
        }
        else
        {
            cout << "Y is odd" << '\n';
        }
        x--;
    }
    return 0;
}