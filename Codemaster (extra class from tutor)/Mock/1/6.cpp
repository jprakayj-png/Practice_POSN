#include <iostream>
#include <vector>

using namespace std;

// Direction vectors: Right, Down, Left, Up
const int dr[] = {0, 1, 0, -1};
const int dc[] = {1, 0, -1, 0};

bool isValid(int r, int c, int R, int C) {
    return r >= 0 && r < R && c >= 0 && c < C;
}

// Checks if placing '#' at (r, c) would collide with any adjacent '#' 
// other than the cell we just came from (prevR, prevC).
bool canPlace(int r, int c, int R, int C, int prevR, int prevC, const vector<string>& grid) {
    if (!isValid(r, c, R, C)) return false;
    if (grid[r][c] == '#') return false;

    // Check all 4 adjacent neighbors to ensure 1-unit spacing from existing paths
    for (int i = 0; i < 4; i++) {
        int nr = r + dr[i];
        int nc = c + dc[i];

        // Skip the cell we just came from
        if (nr == prevR && nc == prevC) continue;

        if (isValid(nr, nc, R, C) && grid[nr][nc] == '#') {
            return false;
        }
    }
    return true;
}

void solve() {
    int R, C;
    if (!(cin >> R >> C)) return;

    // Initialize grid filled with '.'
    vector<string> grid(R, string(C, '.'));

    int currR = 0, currC = 0;
    int dir = 0; // Starts moving Right
    
    grid[currR][currC] = '#';
    int prevR = -1, prevC = -1;

    while (true) {
        int nextR = currR + dr[dir];
        int nextC = currC + dc[dir];

        if (canPlace(nextR, nextC, R, C, currR, currC, grid)) {
            // Move forward in current direction
            prevR = currR;
            prevC = currC;
            currR = nextR;
            currC = nextC;
            grid[currR][currC] = '#';
        } else {
            // Try turning clockwise
            dir = (dir + 1) % 4;
            nextR = currR + dr[dir];
            nextC = currC + dc[dir];

            // If we can't move after turning, the spiral is finished
            if (canPlace(nextR, nextC, R, C, currR, currC, grid)) {
                prevR = currR;
                prevC = currC;
                currR = nextR;
                currC = nextC;
                grid[currR][currC] = '#';
            } else {
                break;
            }
        }
    }

    // Print the grid
    for (int i = 0; i < R; i++) {
        cout << grid[i] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}