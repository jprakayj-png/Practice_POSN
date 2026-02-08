#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, a;
    int c = 0;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
        }
        else
        {
            if (c >= 2)
            {
                a += s[i];
                c = 0;
            }
            else
            {
                for (int j = 0; j <= c; j++)
                {
                    a += s[i];
                }
                c = 0;
            }
        }
    }
    cout << a << endl;
    return 0;
}