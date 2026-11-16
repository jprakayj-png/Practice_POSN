#include <iostream>
using namespace std;

int main()
{
    int t, n = 0;
    cin >> t;
    if (t == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if (t == 1)
        {
            cout << 4 << endl;
        }
        else
        {
            cout << t * (4 + (3 * (t - 1))) << endl;
        }
    }
    return 0;
}