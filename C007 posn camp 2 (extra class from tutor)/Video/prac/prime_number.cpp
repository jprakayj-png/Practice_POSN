#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s = 2;
    cin >> n;
    bool prime = true;
    while (n != 0)
    {
        for (int i = 2; i < s; i++)
        {
            if (s % i == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            if (n == 1)
            {
                cout << s << endl;
            }
            else
            {
                cout << s << ", ";
            }
            n--;
        }
        s++;
        prime = true;
    }
    return 0;
}