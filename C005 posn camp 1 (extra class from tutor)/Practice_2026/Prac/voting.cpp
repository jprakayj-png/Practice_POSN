#include <bits/stdc++.h>
using namespace std ;

map<int,int>mp ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    while(n--){
        int dir , x ;
        cin >> dir >> x ;
        mp[dir] += x ; 
    }
    for (auto m : mp){
        if (m.second != 0){
            cout << m.first << " " << m.second << "\n" ;
        }
    }
    return 0 ;
}