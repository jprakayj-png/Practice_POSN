#include <iostream>
using namespace std;

int main()
{
    string a, b, o;
    cin >> a >> o >> b;
    int n1 = a.size();
    int n2 = b.size();
    if (o == "*")
    {
        cout << 1;
        for (int i = 0; i < n1 + n2 - 2; i++)
        {
            cout << 0;
        }
    }
    else
    {
        if (n1 == n2)
        {
            cout << 2;
            for (int i = 0; i < n1 - 1; i++)
            {
                cout << 0;
            }
        }
        else
        {
            if (n1 > n2)
            {
                cout << 1;
                for (int i = 0; i < n1 - n2 - 1; i++)
                {
                    cout << 0;
                }
                cout << 1;
                for (int i = 0; i < n2 - 1; i++)
                {
                    cout << 0;
                }
            }
            else
            {
                cout << 1;
                for (int i = 0; i < n2 - n1 - 1; i++)
                {
                    cout << 0;
                }
                cout << 1;
                for (int i = 0; i < n1 - 1; i++)
                {
                    cout << 0;
                }
            }
        }
    }
    return 0;
}
