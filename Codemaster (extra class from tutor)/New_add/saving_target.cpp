#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;
int n , target ;

int find_pos() ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n >> target ;
    v.resize(n+1) ;
    v[0] = 0 ;
    for  (int i = 1 ; i<= n ; i++){
        int x ;
        cin >> x ;
        v[i] = x + v[i-1] ;
    }
    cout << find_pos() << "\n" ;
    return 0 ;
}

int find_pos(){
    for (int i = 1 ; i <= n ; i++){
        if (v[i] >= target){
            return i ;
        }
    }
    return -1 ;
}