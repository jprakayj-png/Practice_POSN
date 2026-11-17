#include <bits/stdc++.h>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int R, C;
    cin >> R >> C ;

    vector<string> grid(R);
    for (int i = 0; i < R; i++) {
        cin >> grid[i];
    }

    // DP tables for the 4 diagonal directions
    vector<vector<int>> tl(R, vector<int>(C, 0)); // Top-Left
    vector<vector<int>> tr(R, vector<int>(C, 0)); // Top-Right
    vector<vector<int>> bl(R, vector<int>(C, 0)); // Bottom-Left
    vector<vector<int>> br(R, vector<int>(C, 0)); // Bottom-Right

    // 1. Fill Top-Left and Top-Right DP tables (Top to Bottom)
    for (int r = 0; r < R; r++) {
        for (int c = 0; c < C; c++) {
            if (grid[r][c] >= 'A' && grid[r][c] <= 'Z') {
                // Top-Left direction
                if (r > 0 && c > 0 && grid[r - 1][c - 1] == grid[r][c]) {
                    tl[r][c] = tl[r - 1][c - 1] + 1;
                } else {
                    tl[r][c] = 1;
                }

                // Top-Right direction
                if (r > 0 && c + 1 < C && grid[r - 1][c + 1] == grid[r][c]) {
                    tr[r][c] = tr[r - 1][c + 1] + 1;
                } else {
                    tr[r][c] = 1;
                }
            }
        }
    }

    // 2. Fill Bottom-Left and Bottom-Right DP tables (Bottom to Top)
    for (int r = R - 1; r >= 0; r--) {
        for (int c = 0; c < C; c++) {
            if (grid[r][c] >= 'A' && grid[r][c] <= 'Z') {
                // Bottom-Left direction
                if (r + 1 < R && c > 0 && grid[r + 1][c - 1] == grid[r][c]) {
                    bl[r][c] = bl[r + 1][c - 1] + 1;
                } else {
                    bl[r][c] = 1;
                }

                // Bottom-Right direction
                if (r + 1 < R && c + 1 < C && grid[r + 1][c + 1] == grid[r][c]) {
                    br[r][c] = br[r + 1][c + 1] + 1;
                } else {
                    br[r][c] = 1;
                }
            }
        }
    }

    // 3. Find the maximum size k among all valid centers
    int max_k = 0;
    for (int r = 0; r < R; r++) {
        for (int c = 0; c < C; c++) {
            if (grid[r][c] >= 'A' && grid[r][c] <= 'Z') {
                int k = min({tl[r][c], tr[r][c], bl[r][c], br[r][c]});
                max_k = max(max_k, k);
            }
        }
    }

    cout << max_k << "\n";

    return 0;
}