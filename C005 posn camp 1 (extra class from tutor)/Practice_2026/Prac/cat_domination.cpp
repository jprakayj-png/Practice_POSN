#include <bits/stdc++.h>
using namespace std ;

map<int,int>mp ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    while(n--){
        int  x ; 
        cin >> x ;
        mp[x]++ ;
    }
    for (auto m : mp){
        if (m.second != 1){
            cout << m.first << " " ;
        }
    }
    cout << "\n" ;
    return 0 ;
}