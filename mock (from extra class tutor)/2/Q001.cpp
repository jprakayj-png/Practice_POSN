#include <iostream>
using namespace std;

int food_eat(int x);

int main()
{
    int n, times;
    cin >> n;
    times = food_eat(n);
    cout << times;
    return 0;
}

int food_eat(int x)
{
    int t = 1;

    while (true)
    {
        int e;
        if (t % 2 == 0)
            e = 2 * t;
        else
            e = t + (x % t);

        if (x < e)
            break;

        x -= e;
        t++;
    }
    return t - 1;
}
