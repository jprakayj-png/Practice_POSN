#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int n , m ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n >> m ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    while(m--){
        int x ;
        cin >> x ;
        if (v.empty()){
            cout << "EMPTY\n" ;
        }
        else {
            auto cut = lower_bound(v.begin(),v.end(),x) ;
            v.erase(v.begin(),cut) ;
            if (!v.empty()){
                cout << v.size() << " " << v[0] << "\n" ;
            }
            else {
                cout << "EMPTY\n" ;
            }
        }
    }
    return 0 ;
}