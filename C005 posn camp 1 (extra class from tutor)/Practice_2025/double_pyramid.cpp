#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // total rows = 2*n - 1
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars;
        if (i <= n)
            stars = 2 * i - 1; // increasing part
        else
            stars = 2 * (2 * n - i) - 1; // decreasing part

        int spaces = (2 * n - 1 - stars) / 2;

        // print spaces
        for (int s = 0; s < spaces; s++)
            cout << "  ";

        // print stars
        for (int j = 0; j < stars; j++)
            cout << "* ";

        cout << endl;
    }

    return 0;
}
