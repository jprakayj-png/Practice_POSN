#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = 0, k = 0, a = 0, l = 0, arr[n], data[n];
    for (int i = 0; i < n * 2; i++)
    {
        cin >> k;
        if (i % 2 != 0)
        {
            data[i / 2] = k;
            if (k > m)
                m = k;
        }
        else
        {
            arr[i / 2] = k;
            if (k > a)
                a = k;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i <= a; i++)
    {
        if (i == arr[l])
        {
            for (int j = 0; j < data[l]; j++)
            {
                cout << "*";
            }
            l++;
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                cout << "x";
            }
        }
        cout << endl;
    }
    return 0;
}