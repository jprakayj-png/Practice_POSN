#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> light;

bool coversPath(int A, int d) {
    vector<pair<int,int>> intervals;
    for (auto l : light) {
        int st = l.first - A * l.second;
        int en = l.first + A * l.second;
        intervals.push_back({st, en});
    }

    sort(intervals.begin(), intervals.end());

    int covered = 0;
    for (auto [st, en] : intervals) {
        if (st <= covered) {
            covered = max(covered, en);
            if (covered >= d){
                return true; // path fully covered
            } 
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d;
    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        int p, r;
        cin >> p >> r;
        light.push_back({p, r});
    }

    int A = 1;
    while (!coversPath(A, d)) {
        A++;
    }

    cout << A << "\n";
    return 0;
}
