#include <iostream>
using namespace std;

int main()
{
    int d, m, k, s, w;
    cin >> d >> m;
    cin >> k >> s;
    if (m != s)
    {
        if (m == 2)
        {
            w += 29 - d;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            w += 30 - d;
        }
        else
        {
            w += 31 - d;
        }
        m++;
        for (int i = m; i < s; i++)
        {
            if (i == 2)
            {
                w += 29;
            }
            else if (i == 4 || i == 6 || i == 9 || i == 11)
            {
                w += 30;
            }
            else
            {
                w += 31;
            }
        }
        if (k != 1)
        {
            w += k;
        }
    }
    else
    {
        w += k - d;
    }
    cout << w;
}