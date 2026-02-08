#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    set<string> s;
    cin >> n;
    while (n--)
    {
        string st;
        cin >> st;
        s.insert(st);
    }
    auto show = s.begin();
    while (show != s.end())
    {
        cout << *show << "\n";
        show++;
    }
    return 0;
}