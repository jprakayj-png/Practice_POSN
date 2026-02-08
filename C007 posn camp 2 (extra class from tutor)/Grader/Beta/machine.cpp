#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    char op;
    priority_queue<int> pq;
    cin >> n;
    while (n--)
    {
        cin >> op;
        if (op == 'P')
        {
            cin >> x;
            pq.push(x);
        }
        else if (op == 'Q')
        {
            if (!pq.empty())
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
            else
            {
                cout << -1 << "\n";
            }
        }
    }
}