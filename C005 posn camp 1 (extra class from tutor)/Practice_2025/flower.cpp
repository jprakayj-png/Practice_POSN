#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 3)
    {
        cout << "NULL";
        return 0;
    }

    // Upper part (including middle)
    for (int i = 0; i < n / 2 + 1; i++)
    {
        for (int s = 0; s < i; s++)
            cout << "  ";
        for (int j = 0; j < n - 2 * i; j++)
            cout << "* ";
        cout << endl;
    }

    // Lower part
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        for (int s = 0; s < i; s++)
            cout << "  ";
        for (int j = 0; j < n - 2 * i; j++)
            cout << "* ";
        cout << endl;
    }

    return 0;
}
