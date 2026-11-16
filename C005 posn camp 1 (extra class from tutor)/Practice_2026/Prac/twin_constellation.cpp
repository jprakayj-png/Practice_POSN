#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n >> m ;
    v.resize(n) ;
    for (int i = 0 ; i < v.size() ; i++){
        cin >> v[i] ;
    }
    while(m--){
        int x , ct = 0 ;
        cin >> x ;
        auto f = lower_bound(v.begin(),v.end(),x) ;
        auto l = upper_bound(v.begin(),v.end(),x) ;
        cout << l-f << " " ;
        int ln = x , r = x  ;
        for (auto i : v){
            if (i > x){
                r = i ;
                break ;
            }
            if (i < x){
                ln = i ;
            } 
        }
        if (ln == x){
            cout << "NONE " ;
        }
        else {
            cout << ln << " " ;
        }

        if (r == x){
            cout << "NONE " ;
        }
        else {
            cout << r << " " ;
        }
        cout << "\n" ;
    }
    return 0 ;
}