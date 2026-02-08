#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int like;
    int num[100000] = {0}; // allow index 1..n safely

    // Count frequency
    for (int i = 0; i < n; i++)
    {
        cin >> like;
        num[like]++;
    }

    // Find max frequency
    int mx = 0;
    for (int i = 0; i < 100000; i++)
    {
        if (num[i] > mx)
        {
            mx = num[i];
        }
    }

    // Print all values that have max frequency
    for (int i = 0; i < 100000; i++)
    {
        if (num[i] == mx)
        {
            cout << i << " ";
        }
    }

    return 0;
}
