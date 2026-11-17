#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    map<int,int>freq ;
    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        freq[x]++ ;
    }
    int p = 0 , mx = 0 ;
    for (auto x : freq){
        if ((x.second == mx) && (x.first > p)){
            p = x.first ;
        }
        else if (x.second > mx){
            mx = x.second ;
            p = x.first ;
        }
    }
    cout << p << "\n" << mx << "\n" ;
    return 0 ;
}