#include <bits/stdc++.h>
using namespace std ;

int n , ct = 0 ;
int stonk(int x) ;
vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    if (n == 1){
        int p ;
        cin >> p ;
        cout << 0 << "\n" ;
    }
    else {
        v.resize(n) ;
        cout << stonk(1) << "\n" ;
    }
    return 0 ;
}

int stonk(int x){
    int ls = 0 , p = 0 , g = 0 ;
    if (x > n){
        return ct ;
    }
    else {
        cin >> p ;
        if (x == 1){
            v[x-1] = p ;
            g = 0 ;
        }
        else {
            if (p > v[x-2]){
                g = 1 ;
            }
            else {
                g = 0 ;
            }
            v[x-1] = p ;
        }
        return ct = g + stonk(x+1) ;
    }
}
