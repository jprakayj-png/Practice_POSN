#include <iostream>
using namespace std;

int main()
{
    int p;
    cin >> p;
    int sale[p];
    for (int i = 0; i < p; i++)
    {
        cin >> sale[i];
    }

    for (int i = 0; i < p - 1; i++)
    {
        for (int j = i + 1; j < p; j++)
        {
            if (sale[i] < sale[j])
            {
                int temp = sale[i];
                sale[i] = sale[j];
                sale[j] = temp;
            }
        }
    }

    for (int i = 0; i < p; i++)
    {
        if (sale[i] == sale[0])
        {
            for (int j = 1; j <= sale[0]; j++)
            {
                cout << "P";
            }
        }
        else if (sale[i] == sale[p - 1])
        {
            for (int j = 1; j <= sale[p - 1]; j++)
            {
                cout << "L";
            }
        }
        else
        {
            for (int j = 1; j <= sale[i]; j++)
            {
                cout << "X";
            }
        }
        cout << " (" << sale[i] << ")" << endl;
    }
    return 0;
}