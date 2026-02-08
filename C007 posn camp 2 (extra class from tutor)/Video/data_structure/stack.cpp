#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    stack<int> s;
    s.push(3);
    cout << s.size() << " " << s.top() << "\n";
    s.push(2);
    cout << s.size() << " " << s.top() << "\n";
    s.push(1);
    cout << s.size() << " " << s.top() << "\n";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}