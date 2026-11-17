#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    int sum = 0 ;
    for (int i = 0 ; i < s.size() ; i++){
        if (isdigit(s[i])){
            sum += (s[i] - '0') * pow(16, s.size() - i - 1) ;
        }
        else {
            sum += (s[i] - 'A' + 10) * pow(16, s.size() - i - 1) ;
        }
    }
    int bi = sum ;
    string b , e ;
    int ei = sum ;
    while(bi != 0){
        b += to_string(bi % 2) ;
        bi /= 2 ;
    }
    reverse(b.begin() , b.end()) ;
    while(ei != 0){
        e += to_string(ei % 8) ;
        ei /= 8 ;
    }
    reverse(e.begin() , e.end()) ;
    cout << b << "\n" ;
    cout << e << "\n" ;
    return 0 ;
}