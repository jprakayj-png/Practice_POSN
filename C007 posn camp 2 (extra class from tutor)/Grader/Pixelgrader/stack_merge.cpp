#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int nua, nub;
    stack<int> sta;
    stack<int> stb;
    stack<int> sha;
    stack<int> shb;
    cin >> nua >> nub;
    for (int i = 0; i < nua; i++)
    {
        int x;
        cin >> x;
        sta.push(x);
    }
    for (int i = 0; i < nub; i++)
    {
        int x;
        cin >> x;
        stb.push(x);
    }
    while (!sta.empty())
    {
        sha.push(sta.top());
        sta.pop();
    }
    while (!stb.empty())
    {
        shb.push(stb.top());
        stb.pop();
    }
    while (!sha.empty())
    {
        cout << sha.top() << " ";
        sha.pop();
    }
    while (!shb.empty())
    {
        cout << shb.top() << " ";
        shb.pop();
    }
    return 0;
}