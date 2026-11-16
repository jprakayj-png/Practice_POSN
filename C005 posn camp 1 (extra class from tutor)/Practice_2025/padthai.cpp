#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;

    vector<int> pos(n);
    for (int i = 0; i < n; i++)
        cin >> pos[i];

    vector<bool> visited(n, false);

    int cur = s;   // start at s
    int steps = 0; // steps until cycle starts

    while (!visited[cur - 1])
    {
        visited[cur - 1] = true;
        cur = pos[cur - 1];
        steps++;
    }

    cout << n - steps;
    return 0;
}