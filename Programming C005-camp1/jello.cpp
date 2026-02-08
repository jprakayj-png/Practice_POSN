#include <iostream>
using namespace std;
int main()
{
    int w, l, h, c = 0;
    cin >> w >> l >> h;
    while (w > 1 || l > 1 || h > 1)
    {
        if (w > 1)
        {
            w = w / 2;
            c++;
        }
        if (l > 1)
        {
            l = l / 2;
            c++;
        }
        if (h > 1)
        {
            h = h / 2;
            c++;
        }
    }
    cout << c << endl;
    return 0;
}