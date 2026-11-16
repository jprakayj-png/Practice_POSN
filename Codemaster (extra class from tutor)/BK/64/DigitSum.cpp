#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string n ;
    cin >> n ;
    int s = 0 ;
    for (int i = 0 ; i < n.length() ; i++){
        s += n[i] - '0' ;
    }
    cout << s << "\n" ;
    return 0 ;
}