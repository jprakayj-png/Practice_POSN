#include <bits/stdc++.h>
using namespace std;
int main()
{

    int k, m;
    cin >> k >> m;
    deque<int> line;
    for (int i = 0; i < k; i++)
    {
        int n;
        cin >> n;
        line.push_back(n);
    }
    for (int i = 0; i < m; i++)
    {
        int n = line.front();
        line.pop_front();
        line.push_back(n);
    }
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            sum += line[i];
        }
    }
    cout << sum;
    return 0;
}
