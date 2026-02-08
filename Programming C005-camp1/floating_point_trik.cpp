#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n, p;
    cin >> n;
    while (n--)
    {
        cin >> p;
        cout << fixed << setprecision(0) << pow(2.0L, p) << '\n';
    }
    return 0;
}