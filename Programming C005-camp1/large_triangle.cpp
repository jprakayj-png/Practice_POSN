#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double px[n], py[n];
    for (int i = 0; i < n; i++)
    {
        cin >> px[i] >> py[i];
    }
    float large = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                float area = abs((px[i] * py[j]) + (px[j] * py[k]) + (px[k] * py[i]) - (py[i] * px[j]) - (py[j] * px[k]) - (py[k] * px[i])) / 2;
                if (area > large)
                {
                    large = area;
                }
            }
        }
    }
    cout << fixed << setprecision(3) << large;
    return 0;
}