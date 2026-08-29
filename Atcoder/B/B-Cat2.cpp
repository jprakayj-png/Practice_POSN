#include <bits/stdc++.h>
using namespace std ;

set<string>s ;
vector<string>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    for (int i = 0 ; i < n ; i++){
        string st ;
        cin >> st ;
        v.push_back(st) ;
    }
    for (int i = 0 ; i < n - 1 ; i++){
        for (int j = i + 1 ; j < n ; j++){
            string a = v[i] + v[j] ;
            string b = v[j] + v[i] ;
            s.insert(a) ;
            s.insert(b) ;
        }
    }
    cout << s.size() << "\n" ;
    return 0 ;
}