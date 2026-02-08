#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    queue<int> q;
    int n, m = 0;
    char o;
    cin >> n;
    while (n--)
    {
        cin >> o;
        if (o == 'q')
        {
            if (!q.empty())
            {
                q.pop();
            }
        }
        else if (o == 'p')
        {
            int x;
            cin >> x;
            q.push(x);
        }
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        m++;
        q.pop();
    }
    cout << "\n"
         << m << "\n";
    return 0;
}