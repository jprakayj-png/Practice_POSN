#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, ct = 0;
    cin >> n;

    unordered_multiset<int> R, B;

    while (n--) {
        int m;
        char c;
        cin >> m >> c;

        if (c == 'R') {
            auto it = B.find(m);
            if (it != B.end()) {
                ct++;
                B.erase(it); 
            } 
            else {
                R.insert(m);
            }
        } 
        else if (c == 'B') {
            auto it = R.find(m);
            if (it != R.end()) {
                ct++;
                R.erase(it); 
            } 
            else {
                B.insert(m);
            }
        }
    }

    cout << ct << " " << (R.size() + B.size()) << "\n";
    return 0;
}
