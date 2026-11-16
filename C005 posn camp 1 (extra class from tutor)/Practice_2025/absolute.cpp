#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, c = 0, m;
    cin >> n >> m;
    int data[n];
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(data[i] - data[j]) < m && (i != j))
                c++;
        }
    }
    cout << c;
    return 0;
}