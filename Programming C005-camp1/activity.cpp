#include <iostream>
using namespace std;

unsigned long long factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
int main()
{
    int n, m;
    unsigned long long result = 1;
    cin >> n;
    m = n / 2;
    for (int i = n; i > m; i--)
    {
        result *= i;
    }
    if (n % 2 == 0)
    {
        result /= factorial(m);
    }
    else
    {
        result = (result / factorial(m + 1)) * 2;
    }
    cout << result << endl;
    return 0;
}