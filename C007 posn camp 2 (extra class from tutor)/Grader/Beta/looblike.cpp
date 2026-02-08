#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n, like, mx = 0;
    int comment[1000] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> like;
        comment[like]++;
    }
    for (int i = 0; i < 1000; i++)
    {
        if (mx < comment[i])
        {
            mx = comment[i];
        }
    }
    for (int i = 0; i < 1000; i++)
    {
        if (mx == comment[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}