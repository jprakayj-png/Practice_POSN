#include <bits/stdc++.h>
using namespace std ;

map<char,int>mp ;
vector<char>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int mx = 0 ;
    string s ;
    cin >> s ;
    for (int i = 0 ; i < s.size() ; i++){
        mp[s[i]]++ ;
        mx = max(mx,mp[s[i]]) ;
    }
    for (auto x : mp){
        if (x.second == mx){
            v.push_back(x.first) ;
        }
    }
    bool ch ;
    for (int i = 0 ; i < s.size() ; i++){
        ch = true ;
        for (int j = 0 ; j < v.size() ; j++){
            if (s[i] == v[j]){
                ch = false ;
                break ;
            }
        }
        if (ch){
            cout << s[i] ;
        }
        ch = true ;
    }
    return 0 ;
}