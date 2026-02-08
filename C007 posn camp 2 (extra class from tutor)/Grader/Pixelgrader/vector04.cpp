#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, age;
    string name;
    vector<pair<int, string>> id;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> age >> name;
        id.push_back({age, name});
    }
    sort(id.begin(), id.end(), greater<pair<int, string>>());
    cout << id[0].second << "\n";
    cout << id[n - 1].second << "\n";
    return 0;
}