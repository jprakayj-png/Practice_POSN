#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        n--;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n / 2 && (i == 0 || i == n - 1))
                cout << '*';
            else if (i == (n / 2) && (j == 0 || j == n - 1))
                cout << '*';
            else if (i != 0 && i != n - 1 && ((j == abs(n / 2 - i)) || (j == n / 2 + abs(i - 2))))
                cout << '*';
            else
                cout << '-';
        }
        cout << endl;
    }
    return 0;
}
