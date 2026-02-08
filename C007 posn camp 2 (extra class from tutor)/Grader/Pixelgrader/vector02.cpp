#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false) , cin.tie(nullptr) ;
    vector<int> v;
    int n, w, d;
    cin >> n >> w;
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 'p')
        {
            cin >> d;
            v.push_back(d);
        }
        else if (c == 'q')
        {
            if (v.size() != 0)
            {
                v.pop_back();
            }
        }
    }
    while (true)
    {
        auto it = find(v.begin(), v.end(), w);
        if (it == v.end())
        {
            break;
        }
        v.erase(it);
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}