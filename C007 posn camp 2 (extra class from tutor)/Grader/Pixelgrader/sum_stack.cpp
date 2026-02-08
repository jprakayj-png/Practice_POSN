#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int num, add;
    stack<int> data;
    stack<int> plus;
    stack<int> ans;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        data.push(x);
    }
    cin >> add;
    for (int i = 0; i < add; i++)
    {
        int a;
        cin >> a;
        plus.push(a);
    }
    while (!plus.empty() && !data.empty())
    {
        ans.push(data.top() + plus.top());
        data.pop();
        plus.pop();
    }
    while (!ans.empty())
    {
        cout << ans.top() << " ";
        ans.pop();
    }
    return 0;
}