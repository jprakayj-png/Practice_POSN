#include <iostream>
using namespace std;
int main()
{
    long long m, d, r, a, t = 0, s = 1;
    cin >> d >> m;
    if (m != 1)
    {
        while (s != m)
        {
            if (s == 1 || s == 3 || s == 5 || s == 7 || s == 8 || s == 10 || s == 12)
            {
                t += 31;
            }
            else if (s == 2)
            {
                t += 28;
            }
            else
            {
                t += 30;
            }
            s++;
        }
        t += d;
    }
    else
    {
        t = d;
    }
    // cout << t;
    a = t / 7;
    r = t - (a * 7);
    if (r == 1)
    {
        cout << "Thursday";
    }
    else if (r == 2)
    {
        cout << "Friday";
    }
    else if (r == 3)
    {
        cout << "Saturday";
    }
    else if (r == 4)
    {
        cout << "Sunday";
    }
    else if (r == 5)
    {
        cout << "Monday";
    }
    else if (r == 6)
    {
        cout << "Tuesday";
    }
    else if (r == 0)
    {
        cout << "Wednesday";
    }
    return 0;
}