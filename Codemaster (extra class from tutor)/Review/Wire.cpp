#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int n , w , e ;
    cin >> n >> w >> e ;
    vector<int>v(n) ;
    int mx = 0 ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
        if (v[i] > mx){
            mx = v[i] ;
        }
    }
    int ans = 0 ;
    int left = 0 , right = mx ;

    while(left <= right){
        int mid = (left + right) / 2 ;
        int piece = 0 ;
        for (int i = 0 ; i < v.size() ; i++){
            piece += v[i] / (mid+e) ; 
        }
        if (piece >= w){
            ans = mid ;
            left = mid + 1 ;
        }
        else {
            right = mid-1 ;
        }
    }
    cout << ans << "\n" ;
    return 0 ;
}