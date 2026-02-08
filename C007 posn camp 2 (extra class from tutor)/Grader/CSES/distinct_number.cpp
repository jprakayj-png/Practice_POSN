#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    set<int> s;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << "\n";
    return 0;
}