#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 0;
    cin >> n;
    int code[n];
    for (int i = 0; i < n; i++)
    {
        cin >> code[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (code[i] == code[j] && a == 0)
            {
                a = code[j];
                break;
            }
            else if (code[i] == code[j] && a != 0)
            {
                b = code[j];
                break;
            }
        }
        if (a != 0 && b != 0)
        {
            break;
        }
    }
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    cout << a << " " << b;
    return 0;
}