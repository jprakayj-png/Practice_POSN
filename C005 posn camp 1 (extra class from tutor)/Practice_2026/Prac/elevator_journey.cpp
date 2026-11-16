#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int n , st  , ct = 0 , s = 0 ;
    string k ;
    cin >> n >> st ;
    while(n--){
        int x ;
        cin >> x ;
        s += abs(x-st) ;
        if (st == x){
            k+= "S" ;
        }
        else if (x > st){
            k += "U" ;
        }
        else {
            k += "D" ;
        }
        st = x ;
    }
    cout << k ;
    cout << "\n" ;
    cout << s << " " ;
    char p ;
    for (auto g : k){
        if (g == 'S'){
            continue ;
        }
        else {
            p = g ;
            break ;
        }
    }
    for (int i = 1 ; i < k.length() ; i++){
        if (k[i] == 'S'){
            continue ;
        }
        if (k[i] != p){
            ct++ ;
            p = k[i] ;
        }
    }
    cout << ct ;
    return 0 ;
}