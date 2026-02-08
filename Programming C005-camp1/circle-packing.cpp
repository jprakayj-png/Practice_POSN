#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float l;
    if (n % 2 == 0)
    {
        l = n;
    }
    else if (n == 1)
    {
        l = 2;
    }
    else if (n == 3)
    {
        l = 2 + sqrt(3);
    }
    else
    {
        l = 2 * sqrt(3) + (n - 3);
    }
    cout << fixed << setprecision(6) << l << '\n';
    return 0;
}