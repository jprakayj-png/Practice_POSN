#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> xx(N);
    for (int i = 0; i < N; i++)
        cin >> xx[i];

    vector<pair<int, pair<int, int>>> a;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            a.push_back({xx[i] + xx[j], {i, j}});
        }
    }

    sort(a.begin(), a.end());

    int l = 0, r = a.size() - 1;
    while (l < r)
    {
        int sum = a[l].first + a[r].first;

        if (sum == M)
        {
            int i = a[l].second.first;
            int j = a[l].second.second;
            int x = a[r].second.first;
            int y = a[r].second.second;

            if (i != x && i != y && j != x && j != y)
            {
                cout << i + 1 << " " << j + 1 << " "
                     << x + 1 << " " << y + 1;
                return 0;
            }
            l++;
        }
        else if (sum < M)
            l++;
        else
            r--;
    }

    cout << "Impossible to find";
}
