#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    stack<int> s;
    stack<int> a;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        s.push(m);
    }
    for (int i = 0; i < n; i++)
    {
        a.push(s.top());
        s.pop();
    }
    while (!a.empty())
    {
        cout << a.top() << " ";
        a.pop();
    }
    return 0;
}