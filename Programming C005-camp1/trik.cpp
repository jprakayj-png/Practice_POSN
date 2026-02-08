#include <iostream>
using namespace std;
int main()
{
    int p = 1;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            if (p == 1)
                p = 2;
            else if (p == 2)
                p = 1;
        }
        else if (s[i] == 'B')
        {
            if (p == 2)
                p = 3;
            else if (p == 3)
                p = 2;
        }
        else if (s[i] == 'C')
        {
            if (p == 1)
                p = 3;
            else if (p == 3)
                p = 1;
        }
    }
    cout << p << endl;
    return 0;
}