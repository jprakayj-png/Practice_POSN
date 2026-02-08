#include <iostream>
using namespace std;

int add_function(int m, int n);

int main()
{
    int a, b;
    cin >> a >> b;
    add_function(a, b);
}

int add_function(int m, int n)
{
    int sum = m + n;
    cout << sum;
    return 0;
}