#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    while(n--){
        int o ;
        cin >> o ;
        if (o == 1){
            int x ;
            cin >> x ;
            v.push_back(x) ;
        }
        else if (o == 2){
            sort(v.begin(),v.end()) ;
            cout << v[0] << "\n" ;
            v.erase(v.begin()) ; 
        }
    }
    return 0 ;
}