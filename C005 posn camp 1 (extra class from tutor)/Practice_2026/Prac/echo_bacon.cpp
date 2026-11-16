#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    int mid = s.length() / 2 ;
    for (int i = 0 ; i < mid ; i++){
        if (s[i] != s[mid+i]){
            cout << "DESYNC" ;
            return 0 ;
        }
    }
    cout << "SYNC" ;
    return 0 ;
}