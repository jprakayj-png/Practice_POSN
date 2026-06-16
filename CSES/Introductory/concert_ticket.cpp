#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n, m, x;
    cin >> n >> m;
    multiset<int> ms;
    while (n--)
    {

        cin >> x;
        ms.insert(x);
    }
    while (m--)
    {
        cin >> x;
        auto it = ms.upper_bound(x);
        if (it == ms.begin())
        {
            cout << "-1\n";
            continue;
        }
        else
        {
            it--;
            cout << *it << "\n";
            ms.erase(it);
        }
    }
    return 0;
}