#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    string a, b, c, p;
    a = "ABC", b = "BABC", c = "CCAABB";
    int na = 0, nb = 0, nc = 0, mx = 0;
    int n;
    cin >> n;
    cin >> p;
    for (int i = 0; i < n; i++)
    {
        if (p[i] == a[i % 3])
        {
            na++;
        }
        if (p[i] == b[i % 4])
        {
            nb++;
        }
        if (p[i] == c[i % 6])
        {
            nc++;
        }
    }
    mx = max({na, nb, nc});
    cout << mx << '\n';
    if (mx == na)
    {
        cout << "Adrian \n";
    }
    if (mx == nb)
    {
        cout << "Bruno \n";
    }
    if (mx == nc)
    {
        cout << "Goran \n";
    }
    return 0;
}