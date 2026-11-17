#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, w, e;
    cin >> n >> w >> e;
    vector<long long> v(n);
    long long mx = 0 ;
    for (int i = 0; i < n; i++){
        cin >> v[i] ;
        if (v[i] > mx){
            mx = v[i] ;
        }
    } 
    long long left = 0, right = mx ; 
    long long ans = 0;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long pieces = 0;
        for (int i = 0; i < n; i++) {
            pieces += v[i] / (mid + e);
        }

        if (pieces >= w) {
            ans = mid;         
            left = mid + 1;
        } 
        else {
            right = mid - 1;   
        }
    }

    cout << ans << "\n";
    return 0;
}
