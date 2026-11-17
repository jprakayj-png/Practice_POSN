#include <bits/stdc++.h>
using namespace std ;

map<char,int>mp ;
vector<char>v ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string st ;
    cin >> st ;
    for (auto c : st){
        mp[c]++ ;
        auto f = find(v.begin(),v.end(),c) ;
        if (f != v.end() && *f == c){
            continue ;
        }
        else {
            v.push_back(c) ;
        }
    }
    
    for (auto ele : v){
        if (mp[ele] == 1){
            cout << ele << "\n" ;
            return 0 ;
        }
    }
    return 0 ;
}