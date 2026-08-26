#include <bits/stdc++.h>
using namespace std ; 

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string a , b ;
    cin >> a >> b ;
    int mn = min(a.size(),b.size()) ;
    for (int i  = 0 ; i < mn ; i++){
        if (a[i] != b[i]){
            cout << i + 1 << "\n" ;
            return 0 ;
        }
    }
    cout << mn + 1 << "\n" ;
    return 0 ;
}