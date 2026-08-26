#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    string s ;
    cin >> n >> s ;
    for (int i = 0 ; i <= n-1 ;){
        if(s[i] == 'n' && s[i+1] == 'a'){
            cout << "nya" ;
            i += 2 ;
        }
        else {
            cout << s[i] ;
            i++ ;
        }
    }
    return 0 ;
}