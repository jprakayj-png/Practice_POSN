#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    vector<int> v2;
    v2.push_back(3);
    v2.push_back(5);
    v2.push_back(9);
    for (auto &x : v2)
    {
        cout << x << " ";
        x = x * 2;
    }
    cout << "\n";
    for (auto &x : v2)
    {
        cout << x << " ";
    }
    cout << "\n";
    v2.insert(v2.begin(), 2);
    for (auto it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";
    v2.insert(v2.begin() + 1, 20);
    for (auto it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}