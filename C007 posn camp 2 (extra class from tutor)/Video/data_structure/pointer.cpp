#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int x = 5;
    int *y, *z;
    int **w;
    y = &x;
    z = &x;
    w = &z;
    cout << x << " " << &x << "\n";
    // cout << y << " " << &y << " " << *y << "\n";
    cout << z << " " << &z << " " << *z << "\n";
    cout << w << " " << &w << " " << *w << " " << **w << "\n";
    cout << "---------------- \n";
    *z = 3;
    **w = 7;
    cout << x << " " << &x << "\n";
    // cout << y << " " << &y << " " << *y << "\n";
    cout << z << " " << &z << " " << *z << "\n";
    cout << w << " " << &w << " " << *w << " " << **w << "\n";
    cout << "---------------- \n";
    return 0;
}