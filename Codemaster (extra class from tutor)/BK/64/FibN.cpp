#include <bits/stdc++.h>
using namespace std;

long long fib_pos(int pos) {
    if (pos <= 2) return 1;
    long long a = 1, b = 1, c;
    for (int i = 3; i <= pos; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int pos;
    cin >> pos;
    cout << fib_pos(pos);
    return 0;
}
