#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n , q ;
    cin >> n >> q ;
    v.resize(n) ;
    for (size_t i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    sort(v.begin(),v.end()) ;
    if (n == 1){
        while(q--){
            long long t ;
            cin >> t ;
            cout << v[0] << "\n" ;
        }
    }
    else {
        while(q--){
            long long target ;
            cin >> target ;
            if (target < v[0]){
                cout << v[0] << "\n" ;
            }
            else if (target > v[n-1]){
                cout << v[n-1] << "\n" ;
            }
            else {
                long long l = 0 ; 
                long long r = n-1 ;
                bool f = 0 ;
                while(l <= r){
                    long long mid = (l + r) / 2 ;
                    if (target == v[mid]){
                        cout << v[mid] << "\n" ;
                        f = 1 ;
                        break ;
                    }
                    else if (target > v[mid]){
                        l = mid + 1 ;
                    }
                    else {
                        r = mid - 1 ;
                    }
                }
                if (!f){
                    if (l < n && r >= 0){
                        if (abs(target-v[l]) < abs(v[r]-target)){
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