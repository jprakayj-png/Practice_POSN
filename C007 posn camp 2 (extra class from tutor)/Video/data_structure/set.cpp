#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(8);
    s.insert(9);
    s.insert(1);
    s.erase(3);
    auto it = s.begin();
    while (it != s.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;
    auto l = s.lower_bound(5);
    if (l != s.end())
    {
        cout << *l << endl;
    }
    auto m = s.upper_bound(5);
    if (m != s.end())
    {
        cout << *m << endl;
    }
    return 0;
}