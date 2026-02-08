#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        v.push_back(m);
    }
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << "\n";
    sort(v.begin(), v.end(), greater<int>());
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}