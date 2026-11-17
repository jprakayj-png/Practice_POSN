#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , q ;
    cin >> n >> q ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    int target = 0 ;
    sort(v.begin(),v.end()) ;
    while(q--){
        cin >> target ;
        if (n == 1){
            cout << v[0] << "\n" ;
        }
        else {
            if (target < v[0]){
                cout << v[0] << "\n" ;
            }
            else if (target > v[n-1]){
                cout << v[n-1] << "\n" ;
            }
            else {
                int l = 0 , r = n - 1 ;
                bool ch = 0 ;
                while(l <= r){
                    int mid = (l + r) / 2 ;
                    if (v[mid] == target){
                        cout << v[mid] << "\n" ;
                        ch = 1 ;
                        break ;
                    }
                    else if (v[mid] < target){
                        l = mid + 1 ;
                    }
                    else {
                        r = mid - 1 ;
                    }
                }
                if (!ch){
                    if (l < n && r >= 0){
                        if (abs(target - v[l]) < abs(v[r] - target)){
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