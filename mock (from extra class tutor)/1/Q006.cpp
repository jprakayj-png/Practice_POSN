#include <iostream>
using namespace std;

int main()
{
    int m, n, q, add, l;
    char o;
    cin >> m >> n;
    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> o >> l >> add;
        for (int j = 0; j < n; j++)
        {
            if (o == '1')
            {
                matrix[l - 1][j] += add;
            }
            else if (o == '2')
            {
                matrix[l - 1][j] -= add;
            }
            else if (o == '3')
            {
                matrix[l - 1][j] *= add;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}