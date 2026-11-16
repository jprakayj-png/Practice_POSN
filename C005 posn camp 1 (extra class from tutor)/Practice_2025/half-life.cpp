#include <iostream>
using namespace std;

int main()
{
    long long n, w, c = 0;
    cin >> n >> w;
    while (n <= w)
    {
        n = n * 2;
        c++;
    }
    cout << c << " " << n - w << endl;
    return 0;
}