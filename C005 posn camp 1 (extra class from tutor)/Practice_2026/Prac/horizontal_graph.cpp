#include <bits/stdc++.h>
using namespace std ;

vector<pair<int,int>>v ;
int n ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    int mx = 0 ;
    while(n--){
        int p , s ;
        cin >> p >> s ;
        mx = max(mx,s) ;
        v.push_back({p,s}) ;
    }
    int p = 0 ;
    for (int i = 0 ; i <= 9 ; i++){
        if (i == v[p].first){
            for (int j = 0 ; j < v[p].second ; j++){
                cout << "*" ;
            }
            p++ ;
        }
        else {
            for (int j = 0 ; j < mx ; j++){
                cout << "x" ; 
            }
        }
        cout << "\n" ;
    }
    return 0 ;
}