#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, password = "";
    getline(cin, s);

    char table[8][8];
    int p = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s[i] = '7';
        }
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (p < s.length())
                table[i][j] = s[p++];
            else
                table[i][j] = '\0';
        }
    }

    for (int j = 0; j < 8; j++)
    {
        for (int i = 0; i < 8; i++)
        {
            if (table[i][j] == '\0')
                break;
            password += table[i][j];
        }
    }

    cout << password << '\n';
    return 0;
}
