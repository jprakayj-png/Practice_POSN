#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        v.push_back(x) ;
    }
    int m ;
    cin >> m ;
    while(m--){
        int o ;
        cin >> o ;
        if (o == 1){
            int y , d ;
            cin >> y >> d;
            v[y-1] = d ;
        }
        else if (o == 2){
            int x ;
            cin >> x ;
            cout << v[x-1] << "\n" ;
        }
    }
    return 0 ;
}