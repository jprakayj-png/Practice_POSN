#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

vector<int> igs;
vector<int> igb;

int perket(int n, int s, int b)
{
    if (n == igs.size())
    {
        if (s == 1 && b == 0)
        {
            return INT_MAX;
        }
        else
        {
            return abs(s - b);
        }
    }
    return min(perket(n + 1, s * igs[n], b + igb[n]), perket(n + 1, s, b));
}
int main()
{
    int n, s, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> b;
        igs.push_back(s);
        igb.push_back(b);
    }
    cout << perket(0, 1, 0);
    return 0;
}