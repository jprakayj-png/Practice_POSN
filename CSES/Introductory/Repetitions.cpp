#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string d ;
    cin >> d ;
    long long mx = 0 ;
    long long c = 1 ;
    for (int i = 0 ; i < d.length() - 1 ; i++){
        if (d[i] == d[i+1]){
            c++ ;
        }
        else {
            if (c > mx){
                mx = c ;
            }
            c = 1 ;
        }
    }
    if (c > mx){
        mx = c ;
        c = 1 ;
    }
    cout << mx << "\n" ;
    return 0 ;
}