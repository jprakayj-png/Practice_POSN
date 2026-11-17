#include <bits/stdc++.h>
using namespace std;

struct Grid {
    int R, C;
    vector<vector<int>> cells;
    int placed = 0;
    int cleared = 0;

    Grid(int r, int c) : R(r), C(c) {
        cells.assign(R, vector<int>(C, 0));
    }

    bool dropBlock(int S, int L) {
        int colStart = S - 1;
        int colEnd = colStart + L - 1;

        // find lowest row where block can fit
        for (int row = R - 1; row >= 0; --row) {
            bool canPlace = true;
            for (int c = colStart; c <= colEnd; ++c) {
                if (cells[row][c] == 1) {
                    canPlace = false;
                    break;
                }
            }
            if (canPlace) {
                for (int c = colStart; c <= colEnd; ++c) {
                    cells[row][c] = 1;
                }
                placed++;
                clearFullRows();
                return true;
            }
        }
        return false; // discarded
    }

    void clearFullRows() {
        for (int row = 0; row < R; ++row) {
            if (all_of(cells[row].begin(), cells[row].end(),
                       [](int x){ return x == 1; })) {
                cleared++;
                for (int r = row; r > 0; --r) {
                    cells[r] = cells[r-1];
                }
                cells[0].assign(C, 0);
            }
        }
    }

    void printResult() {
        cout << placed << " " << cleared << "\n";
        for (int r = 0; r < R; ++r) {
            for (int c = 0; c < C; ++c) {
                cout << cells[r][c];
            }
            cout << "\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int R, C, N;
    cin >> R >> C >> N;

    Grid g(R, C);

    for (int i = 0; i < N; i++) {
        int S, L;
        cin >> S >> L;
        g.dropBlock(S, L);
    }

    g.printResult();
    return 0;
}
