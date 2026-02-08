#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, char>> p;
    p.push_back(make_pair(5, 'A'));
    p.push_back({4, 'B'});
    for (auto [a, b] : p)
    {
        cout << a << " " << b << " || ";
    }
    return 0;
}