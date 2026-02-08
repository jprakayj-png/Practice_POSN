#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int data[3];
    int a, b, c, ans1, ans2;
    cin >> a >> b >> c;
    data[0] = a, data[1] = b, data[2] = c;
    sort(data, data + 3);
    ans1 = data[1] - data[0] - 1;
    ans2 = data[2] - data[1] - 1;
    if (ans1 >= ans2)
        cout << ans1 << endl;
    else
        cout << ans2 << endl;
    return 0;
}