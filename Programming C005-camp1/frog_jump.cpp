#include <iostream>
using namespace std;

int main()
{
    long long d, s;
    cin >> s >> d;
    if (s > d)
    {
        cout << 2 << endl;
    }
    else
    {
        if (d % s == 0)
        {
            cout << d / s << endl;
        }
        else
        {
            cout << d / s + 1 << endl;
        }
    }
    return 0;
}