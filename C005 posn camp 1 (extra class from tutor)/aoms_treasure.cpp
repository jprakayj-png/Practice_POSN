#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long rock, q;
    cin >> rock >> q;

    vector<long long> arr(rock + 1, 0);
    vector<long long> prefix(rock + 1, 0);

    for (int i = 1; i <= rock; i++)
    {
        cin >> arr[i];
        prefix[i] = prefix[i - 1] + arr[i]; // build prefix sum
    }

    while (q--)
    {
        long long s, e;
        cin >> s >> e;
        cout << prefix[e] - prefix[s - 1] << '\n';
    }

    return 0;
}
