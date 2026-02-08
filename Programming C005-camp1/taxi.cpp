#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double n;
    cin >> n;
    cout << fixed << setprecision(6) << M_PI * n * n << endl;
    cout << fixed << setprecision(6) << 2 * n * n << endl;
    return 0;
}