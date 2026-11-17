#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m ;

    vector<vector<char>> v(n, vector<char>(m, '.'));

    // Dynamic boundaries that shrink as we spiral inward
    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;

    int dir = 0; // 0: Right, 1: Down, 2: Left, 3: Up

    while (top <= bottom && left <= right) {
        if (dir % 4 == 0) {
            // Move Right across the top row
            for (int j = left; j <= right; j++) {
                v[top][j] = '#';
            }
            // Prepare boundaries for the next loops
            top += 2; 
        } 
        else if (dir % 4 == 1) {
            // Move Down along the right column
            for (int i = top - 2; i <= bottom; i++) {
                v[i][right] = '#';
            }
            right -= 2;
        } 
        else if (dir % 4 == 2) {
            // Move Left across the bottom row
            for (int j = right + 2; j >= left; j--) {
                v[bottom][j] = '#';
            }
            bottom -= 2;
        } 
        else {
            // Move Up along the left column (stopping 2 short of 'top' to leave an opening)
            for (int i = bottom + 2; i >= top; i--) {
                v[i][left] = '#';
            }
            left += 2;
        }
        dir++;
    }

    // Print output
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j];
        }
        cout << "\n";
    }

    return 0;
}