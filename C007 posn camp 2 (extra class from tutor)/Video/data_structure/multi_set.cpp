#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(5);
    ms.insert(4);
    ms.insert(5);
    ms.insert(4);
    ms.insert(3);
    ms.erase(4);
    auto it = ms.begin();
    while (it != ms.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;
    auto l = ms.lower_bound(4);
    if (l != ms.end())
    {
        cout << *l << endl;
    }
    auto m = ms.upper_bound(4);
    if (m != ms.end())
    {
        cout << *m << endl;
    }
    return 0;
}