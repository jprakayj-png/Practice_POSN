#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    map<char,int>mp;
    for (char c = 'A' ; c <= 'H' ; c++){
        mp[c] = 0 ;
    }
    string s ;
    cin >> s ;
    for (int i = 0 ; i < s.length() ; i++){
        if (s[i] >= 'A' && s[i] <= 'H'){
            mp[s[i]] += 1 ;
        }
    }
    for (char c = 'A' ; c <= 'H' ; c++){
        cout << mp[c] << " " ;
    }
    return 0 ;
}