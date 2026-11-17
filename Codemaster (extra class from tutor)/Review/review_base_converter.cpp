#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    int m = s.size() ; 
    long long num = 0 ;
    for (int i = 0 ; i < m ; i++){
        if (isdigit(s[i])){
            num += (s[i] - '0') * pow(16,m-i-1) ;
        }
        else {
            num += ((s[i] - 'A') + 10 ) * pow(16,m-i-1) ; 
        }
    }
    string two , eight ;
    long long n = num ;
    long long e = num ;
    while(n != 0){
        int r = n % 2 ;
        two += to_string(r) ;
        n = n / 2 ;
    }
    reverse(two.begin(),two.end()) ;
    while(e != 0){
        int r = e % 8 ;
        eight += to_string(r) ;
        e = e / 8 ;
    }
    reverse(eight.begin(),eight.end()) ;
    cout << two << "\n" ;
    cout << eight << "\n" ;
    return 0 ;
}