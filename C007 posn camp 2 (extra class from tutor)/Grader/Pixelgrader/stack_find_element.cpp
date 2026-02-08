#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int num, find;
    stack<int> data;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        data.push(x);
    }
    cin >> find;
    // bool found = false;
    while (!data.empty())
    {
        if (data.top() == find && data.size() == num)
        {
            cout << "TOP" << "\n";
            break;
        }
        else if (data.size() == 1 && data.top() == find)
        {
            cout << "BOTTOM" << "\n";
            break;
        }
        else if (data.top() == find)
        {
            cout << num - data.size() << "\n";
            break;
        }
        else if (data.size() == 1 && data.top() != find)
        {
            cout << "NULL" << "\n";
            break;
        }
        data.pop();
    }
    return 0;
}