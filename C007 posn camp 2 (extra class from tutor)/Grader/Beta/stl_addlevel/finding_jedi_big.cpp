#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum;
    cin >> n >> sum;

    map<int, long long> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }

    long long c = 0;

    for (auto [a, cntA] : m)
    {
        int b = sum - a;

        if (m.find(b) == m.end()) continue;

        if (a < b)
        {
            c += cntA * m[b];
        }
        else if (a == b)
        {
            c += cntA * (cntA - 1) / 2;
        }
    }

    cout << c << "\n";
    return 0;
}
