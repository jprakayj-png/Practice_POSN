#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    map<int, string> mp;
    mp[5] = "five";
    mp[3] = "three";
    mp.insert({4, "four"});
    auto it = mp.begin();
    while (it != mp.end())
    {
        cout << it->first << " " << it->second << "\n";
        it++;
    }
    // auto u = mp.upper_bound(3);
    auto u = mp.lower_bound(3);
    if (u != mp.end())
    {
        cout << u->first << " " << u->second << "\n";
    }
    return 0;
}