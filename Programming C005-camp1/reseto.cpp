#include <iostream>
using namespace std;
int main()
{
    int n, k, e = 0;
    cin >> n >> k;
    bool pass[2000] = {false};
    for (int i = 2; i <= n; i++)
    {
        if (!pass[i])
        {
            for (int j = i; j <= n; j += i)
            {
                if (!pass[j])
                {
                    pass[j] = true;
                    e++;
                    if (e == k)
                    {
                        cout << j;
                        return 0;
                    }
                }
            }
        }
    }
}