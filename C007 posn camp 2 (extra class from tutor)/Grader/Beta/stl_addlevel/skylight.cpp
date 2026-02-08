#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false), cin.tie(nullptr);
    int n, m, k, l, c, x;
    cin >> n >> m;
    cin >> k >> l >> c;
    int light = 0 ;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            light += x;
        }
    }
    sum = light + (k * l * c);
    cout << ceil(sum / c) << "\n";
    return 0;
}