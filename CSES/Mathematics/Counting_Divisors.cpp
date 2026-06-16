#include <bits/stdc++.h>
using namespace std;

int count_d(int m) {
    int cnt = 0;
    for (int i = 1; i * i <= m; i++) {
        if (m % i == 0) {
            cnt++;
            if (i != m / i){
                cnt++; 
            } 
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cout << count_d(x) << "\n";
    }
    return 0;
}
