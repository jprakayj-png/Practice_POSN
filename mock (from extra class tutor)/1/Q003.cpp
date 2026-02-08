#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x);
int main()
{
    int q;
    cin >> q;
    int data[q];
    for (int i = 0; i < q; i++)
    {
        cin >> data[i];
        if (isPrime(data[i]))
        {
            cout << data[i] << " ";
        }
    }
    return 0;
}

bool isPrime(int x)
{
    bool c = true;
    if (x == 1)
    {
        c = false;
    }
    else if (x == 2)
    {
        c = true;
    }
    else if (x % 2 == 0)
    {
        c = false;
    }
    else
    {
        for (int i = 3; i <= sqrt(x); i += 2)
        {
            if (x % i == 0)
            {
                c = false;
            }
        }
    }
    if (c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}