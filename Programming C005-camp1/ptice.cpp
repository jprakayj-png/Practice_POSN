#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a = "ABC";
    string b = "BABC";
    string c = "CCAABB";
    string o;
    int n, na = 0, nb = 0, nc = 0;
    cin >> n;
    cin >> o;
    for (int i = 0; i < n; i++)
    {
        if (o[i] == a[i % 3])
        {
            na++;
        }
        if (o[i] == b[i % 4])
        {
            nb++;
        }
        if (o[i] == c[i % 6])
        {
            nc++;
        }
    }
    int m = max({na, nb, nc});
    cout << m << endl;
    if (m == na)
        cout << "Adrian" << endl;
    if (m == nb)
        cout << "Bruno" << endl;
    if (m == nc)
        cout << "Goran" << endl;
    return 0;
}
