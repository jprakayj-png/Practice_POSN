#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n ;

    vector<ull> a(n);
    ull total_cars = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_cars += a[i];
    }

    // 1. Find the optimal station index (0-based) using the weighted median
    ull target = (total_cars + 1) / 2;
    ull current_cars = 0;
    int p = 0;

    for (int i = 0; i < n; i++) {
        current_cars += a[i];
        if (current_cars >= target) {
            p = i;
            break;
        }
    }

    // 2. Compute D(0) using unsigned long long
    ull d_current = 0;
    for (int i = 0; i < n; i++) {
        d_current += (ull)i * a[i];
    }

    // 3. Incrementally move station from 0 up to optimal position p
    ull cars_left = 0;
    for (int i = 0; i < p; i++) {
        cars_left += a[i];
        ull cars_right = total_cars - cars_left;
        // D(i + 1) = D(i) + cars_left - cars_right
        d_current = d_current + cars_left - cars_right;
    }

    // Print 1-based index position and minimum total distance
    cout << p + 1 << " " << d_current << "\n";

    return 0;
}