#include <iostream>
#include <string>
using namespace std;

string mod3(string s);

string mod11(string s);

int main()
{
    string n;
    cin >> n;
    cout << mod3(n) << " " << mod11(n) << endl;
    return 0;
}

string mod3(string s)
{
    int m = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int dg = s[i] - '0';
        m = (m * 10 + dg) % 3;
    }
    return to_string(m);
}

string mod11(string s)
{
    int m = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int dg = s[i] - '0';
        m = (m * 10 + dg) % 11;
    }
    return to_string(m);
}
