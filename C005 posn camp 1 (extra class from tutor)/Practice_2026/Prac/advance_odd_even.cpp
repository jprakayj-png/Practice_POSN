#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    if (s[0] == '0'){
        cout << "NULL" ;
        return 0 ;
    }
    reverse(s.begin(),s.end()) ;
    int o = 0 , e = 0 ;
    for (auto d : s){
        if (d % 2 == 0){
            cout << "Even " ;
            e++ ;
        }
        else {
            cout << "Odd " ;
            o++ ; 
        }
    }
    cout << "\n" ;
    cout << "Even: " << e << ", Odd: " << o << "\n" ;
    return 0 ;
}