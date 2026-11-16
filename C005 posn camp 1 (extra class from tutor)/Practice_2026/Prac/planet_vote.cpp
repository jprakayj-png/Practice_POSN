#include <bits/stdc++.h>
using namespace std ;

int n ;
map<string,int>mp ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    while(n--){
        string c ;
        cin >> c ;
        mp[c]++ ;
    }
    int mx = 0 ;
    string win ;
    for (auto x : mp){
        if (x.second > mx){
            mx = x.second ;
            win = x.first ;
        }
        else if (x.second == mx){
            win = min(win,x.first) ;
        }
    }
    cout << win << " " << mx << "\n" ;
    return 0 ;
}