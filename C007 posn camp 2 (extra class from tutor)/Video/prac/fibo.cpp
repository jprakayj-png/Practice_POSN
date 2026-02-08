#include <bits/stdc++.h>
using namespace std;

vector<int> fibo(int n)
{
    vector<int> pos(n + 1);
    pos[0] = 0;
    if (n >= 1)
        pos[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        pos[i] = pos[i - 1] + pos[i - 2];
    }
    return pos;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> pos = fibo(n);

    cout << pos[n - 2] << '\n';
    cout << pos[n - 1] << '\n';
    cout << pos[n] << '\n';
}
