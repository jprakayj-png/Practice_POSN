#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s, ans = 999999, p = 0;
    cin >> n;
    // vector<int> size(n);
    // vector<int> diff(n);
    int size[n];
    int diff[n];
    for (int i = 0; i < n; i++)
    {
        cin >> size[i];
    }
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        diff[i] = abs(size[i] - s);
    }
    for (int i = 0; i < n; i++)
    {
        if (diff[i] < ans)
        {
            ans = diff[i];
            p = i;
        }
        else if (diff[i] == ans && size[i] > size[p])
        {
            p = i;
        }
    }
    cout << size[p] << endl;
    return 0;
}