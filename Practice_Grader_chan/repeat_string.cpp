#include <bits/stdc++.h>
using namespace std ;

set<char>s ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string a , b ;
    cin >> a >> b ;
    int mn = min(a.length(),b.length()) ;
    if (a.length() > b.length()){
        for (int i  = 0 ; i < b.length() ; i++){
            for (int j = 0 ; j < a.length() ; j++){
                if (b[i] == a[j]){
                    s.insert(b[i]) ;
                }
            }
        }
    }
    else {
        for (int i  = 0 ; i < a.length() ; i++){
            for (int j = 0 ; j < b.length() ; j++){
                if (a[i] == b[j]){
                    s.insert(a[i]) ;
                }
            }
        }
    }
    for (auto x : s){
        cout << x << " " ;
    }
    return 0 ;
}