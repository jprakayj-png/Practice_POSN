#include <bits/stdc++.h>
using namespace std ;

vector<char>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s , k ;
    cin >> s ; 
    for (int i = 0 ; i < s.size() ; i++){
        if (s[i] != '0'){
            v.push_back(s[i]) ;
        }
        else {
            k += '0' ;
        }
    }
    sort(v.begin(),v.end()) ;
    cout << v[0] ;
    v.erase(v.begin()) ;
    for (auto i : k){
        v.push_back(i) ;
    }
    sort(v.begin(),v.end()) ;
    for (auto x : v){
        cout << x ;
    }
    return 0 ;
}