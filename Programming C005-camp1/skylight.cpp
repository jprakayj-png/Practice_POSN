#include <iostream>
using namespace std;

int main()
{
    int n, m, l, k, c;
    cin >> n >> m;
    cin >> l >> k;
    cin >> c;
    int total_cost = 0, electric_cost = 0, fuel_cost = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int cost;
            cin >> cost;
            electric_cost += cost;
        }
    }
    fuel_cost = l * k * c;
    total_cost = electric_cost + fuel_cost;
    int rent = (total_cost + c - 1) / c;
    cout << rent << endl;
    return 0;
}