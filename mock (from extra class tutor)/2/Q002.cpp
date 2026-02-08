#include <iostream>
using namespace std;

int calculate_price(int x);

int main()
{
    int n;
    cin >> n;
    calculate_price(n);
}

int calculate_price(int x)
{
    int data[x];
    int sum = 0, price = 0, get = 0;
    for (int i = 0; i < x; i++)
    {
        cin >> data[i];
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (data[j] >= data[i])
            {
                get += data[i];
            }
        }
        if (get > sum)
        {
            sum = get;
            price = data[i];
        }
        else if (get == sum && data[i] < price)
        {
            price = data[i];
        }
        get = 0;
    }
    cout << price << " " << sum;
    return 0;
}
