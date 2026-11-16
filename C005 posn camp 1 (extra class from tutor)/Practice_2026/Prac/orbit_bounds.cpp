#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    // 1. Minimum of Row Maximums
    int min_of_max = INT_MAX;
    for (int i = 0; i < n; i++) {
        int row_max = INT_MIN; 
        for (int j = 0; j < m; j++) {
            row_max = max(row_max, v[i][j]);
        }
        min_of_max = min(min_of_max, row_max);
    }
    cout << "MIN_OF_MAX " << min_of_max << "\n";

    // 2. Maximum of Column Minimums
    int max_of_min = INT_MIN;
    for (int i = 0; i < m; i++) { 
        int col_min = INT_MAX; 
        for (int j = 0; j < n; j++) {
            col_min = min(col_min, v[j][i]); 
        }
        max_of_min = max(max_of_min, col_min); 
    }
    cout << "MAX_OF_MIN " << max_of_min << "\n";

    return 0;
}