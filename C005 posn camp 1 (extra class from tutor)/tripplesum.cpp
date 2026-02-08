#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int countPairs = 0;

    // For each pair (i, j), check if there is k > j
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            long long need = x - (a[i] + a[j]);

            // Binary search for need in range (j+1..n-1)
            if (binary_search(a.begin() + j + 1, a.end(), need))
            {
                countPairs++;
            }
        }
    }

    cout << countPairs;
    return 0;
}
