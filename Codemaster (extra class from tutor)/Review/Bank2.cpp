#include <bits/stdc++.h>
using namespace std ;

int n ;
vector<string>v ;
string cur ;

void solve(int s) ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
        sort(v[i].begin(),v[i].end()) ;
    }
    solve(0) ;
    return 0 ;
}

void solve(int s){
    if (s == n){
        cout << cur << "\n" ;
        return  ;
    }
    for (auto ch : v[s]){
        cur.push_back(ch) ;
        solve(s+1) ;
        cur.pop_back() ;
    }
}