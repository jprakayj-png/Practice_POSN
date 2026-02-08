#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    stack<char> s1;
    string s;
    bool ans = 1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                s1.push(c);
            }
            if (c == ')')
            {
                if (s1.empty() || s1.top() != '(')
                {
                    ans = 0;
                    break;
                }
                else
                {
                    s1.pop();
                }
            }
            else if (c == '}')
            {
                if (s1.empty() || s1.top() != '{')
                {
                    ans = 0;
                    break;
                }
                else
                {
                    s1.pop();
                }
            }
            else if (c == ']')
            {
                if (s1.empty() || s1.top() != '[')
                {
                    ans = 0;
                    break;
                }
                else
                {
                    s1.pop();
                }
            }
        }
        if (!s1.empty())
        {
            ans = 0;
        }
        if (ans)
        {
            cout << "yes";
        }
        else
        {
            cout << "no";
        }
        cout << "\n";
        ans = 1;
        while (!s1.empty())
        {
            s1.pop();
        }
    }
    return 0;
}