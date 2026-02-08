#include <iostream>
using namespace std;

int main()
{
    int q;
    string n;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> n;

        char last = n.back();
        int digit = last - '0';

        if (digit % 2 != 0 || n == "2")
        {
            cout << "T\n";
        }
        else
        {
            cout << "F\n";
        }
    }
    return 0;
}
