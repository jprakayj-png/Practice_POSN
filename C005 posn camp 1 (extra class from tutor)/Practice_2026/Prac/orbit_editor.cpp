#include <bits/stdc++.h>
using namespace std ;

vector<int>s ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , q ;
    cin >> n >> q ;

    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        s.push_back(x) ;
    }
    sort(s.begin(),s.end()) ;
    while(q--){
        int f ;
        cin >> f ;
        auto it = lower_bound(s.begin(),s.end(),f) ;
        int pos = it - s.begin() + 1 ;
        if (f == s[pos-1]){
            cout << "EXISTS " << pos << "\n" ;
        }
        else {
            s.insert(it,f) ;
            cout << "ADDED " << pos << "\n" ;
        }
    }
    return 0 ;
}