#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, o;
    char s;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == 'p')
        {
            cin >> o;
            v.push_back(o);
        }
        else if (s == 'q')
        {
            if (v.size() != 0)
            {
                v.pop_back();
            }
        }
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << "\n"
         << v.size();
    return 0;
}
