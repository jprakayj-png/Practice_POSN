#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    string s;
    cin >> s;
    stack<char> in;
    stack<char> out;
    for (char c : s)
    {
        if (c == '(')
        {
            in.push(c);
        }
        else if (c == ')')
        {
            out.push(c);
        }
    }
    if (in.size() == out.size())
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}