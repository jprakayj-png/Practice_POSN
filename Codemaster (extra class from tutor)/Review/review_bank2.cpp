#include <bits/stdc++.h>
using namespace std ;

int n ;
vector<string>v ;
string pat ;

void show(int x){
    if (x == n){
        cout << pat << "\n" ;
        return ;
    }
    else {
        for (auto c : v[x]){
            pat.push_back(c) ;
            show(x+1) ;
            pat.pop_back() ;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
        sort(v[i].begin() , v[i].end()) ;
    }
    show(0) ;
    return 0 ;
}