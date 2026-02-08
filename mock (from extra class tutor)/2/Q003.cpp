#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void cal_area(int n)
{
    int k1 = 0, k2 = 0;
    vector<vector<int>> area(n, vector<int>(n));

    // input
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> area[i][j];

    // try possible square size
    for (int k = 1; k <= n; k++)
    {
        // start top-left corner and find pos
        for (int i = 0; i + k <= n; i++)
        {
            for (int j = 0; j + k <= n; j++)
            {
                // sum to check area
                int sum = 0;
                for (int x = i; x < i + k; x++)
                {
                    for (int y = j; y < j + k; y++)
                    {
                        sum += area[x][y];
                    }
                }

                if (sum == k * k) // all 1
                    k2 = max(k2, k);
                else if (sum == 0) // all 0
                    k1 = max(k1, k);
            }
        }
    }

    cout << k1 << " " << k2;
}

int main()
{
    int n;
    cin >> n;
    cal_area(n);
    return 0;
}
