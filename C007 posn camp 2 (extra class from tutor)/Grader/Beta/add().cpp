#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    stack<char> s1;
    string s;
    int ans = 0;
    cin >> s;
    for (auto c : s)
    {
        if (c == '(')
        {
            s1.push(c);
            continue;
        }
        if (s1.empty())
        {
            ans++;
            continue;
        }
        s1.pop();
    }
    if (!s1.empty())
    {
        ans += s1.size();
    }
    cout << ans;
    return 0;
}