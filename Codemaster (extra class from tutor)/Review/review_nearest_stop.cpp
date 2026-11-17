#include <bits/stdc++.h>
using namespace std ;

vector<long long>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n , q ;
    cin >> n >> q ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    sort(v.begin(),v.end()) ;
    while(q--){
        long long pick ;
        cin >> pick ;
        if (n == 1){
            cout << v[0] << "\n" ;
        }
        else {
            if (pick < v[0]){
                cout << v[0] << "\n" ;
            }
            else if (pick > v[n-1]){
                cout << v[n-1] << "\n" ;
            }
            else {
                long long l = 0 ;
                long long r = n-1 ;
                bool ch = 0 ;
                while(l <= r){
                    long long mid = (l+r) / 2 ;
                    if (v[mid] == pick){
                        cout << v[mid] << "\n" ;
                        ch = 1 ;
                        break ;
                    }
                    else if (pick > v[mid]){
                        l = mid + 1 ; 
                    }
                    else {
                        r = mid - 1 ;
                    }
                }
                if (!ch){
                    if (l < n && r >= 0){
                       if (abs(pick - v[l]) < abs(pick - v[r])){
                        cout << v[l] << "\n" ;
                       }
                       else {
                        cout << v[r] << "\n" ;
                       }
                    }
                }
            }
        }
    }
    return 0 ;
}