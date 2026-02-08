#include <bits/stdc++.h>
using namespace std;

void sort_descending(int arr[], int n);
void sort_ascending(int arr[], int n);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n > 20)
    {
        cout << "Out of Range (input must <= 20)" << endl;
        return 0;
    }
    int Num[n];
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        Num[i] = rand() % 99 + 1;
        // cout << Num[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        cout << Num[i] << " ";
    }
    cout << endl;

    int half1 = (n + 1) / 2;
    int half2 = n / 2;
    int f_half[half1], s_half[half2];

    for (int i = 0; i < half1; i++)
    {
        f_half[i] = Num[i];
    }

    for (int i = 0; i < half2; i++)
    {
        s_half[i] = Num[i + half1];
    }

    sort_descending(f_half, half1);
    sort_ascending(s_half, half2);

    for (int i = 0; i < half1; i++)
    {
        cout << f_half[i] << " ";
    }
    cout << "| ";
    for (int i = 0; i < half2; i++)
    {
        cout << s_half[i] << " ";
    }
    cout << endl;
    return 0;
}

void sort_descending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sort_ascending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}