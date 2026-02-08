#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int matrix1[n][m], matrix2[n][m], ans[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix1[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix2[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            ans[i][j] = matrix1[i][j] + matrix2[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}
