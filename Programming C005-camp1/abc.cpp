#include <iostream>
using namespace std;

int main()
{
    int a, b, c, temp;
    string s;
    cin >> a >> b >> c;
    cin >> s;
    for (int i = 0; i < 3; i++)
    {
        if (a > b || a > c)
        {
            if (a > b)
            {
                temp = a;
                a = b;
                b = temp;
            }
            if (a > c)
            {
                temp = a;
                a = c;
                c = temp;
            }
        }
        else if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == 'A')
        {
            cout << a << " ";
        }
        else if (s[i] == 'B')
        {
            cout << b << " ";
        }
        else if (s[i] == 'C')
        {
            cout << c << " ";
        }
    }
    return 0;
}