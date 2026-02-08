#include <iostream>
using namespace std;

int main()
{
    int r[10], d, c = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> d;
        int x = d % 42;
        bool found = false;
        for (int j = 0; j < c; j++)
        {
            if (r[j] == x)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            r[c] = x;
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
