#include <iostream>
using namespace std;

string reverse_string(string s);

int main()
{
    string s;
    cin >> s;
    reverse_string(s);
    return 0;
}

string reverse_string(string s)
{
    int n = s.length();
    string a;
    for (int i = 0; i < n; i++)
    {
        a += s[n - i - 1];
    }
    cout << a;
    return a;
}