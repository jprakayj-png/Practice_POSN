#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n, k, st = 0;
    vector<int> v;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
    while (v.size() != 1)
    {
        int e = (st + k - 1) % v.size();
        k = v[e];
        v.erase(v.begin() + e);
        st = e;
    }
    cout << v.front();
    return 0;
}