#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[0];
            arr[0] = temp;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}