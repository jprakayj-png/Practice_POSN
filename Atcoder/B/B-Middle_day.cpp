#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int m ;
    cin >> m ;
    int df[m+1] ;
    df[0] = 0 ;
    for (int i = 1 ; i <= m ; i++){
        int d ;
        cin >> d ;
        df[i] = df[i-1] + d ;
    }

    int mid = (df[m] + 1) / 2 ;
    int p = 0 ;
    for (int i = m ; i >= 1 ; i--){
        if (df[i] < mid){
            p = i ;
            break ;
        }
    }
    cout << p + 1 << " " << mid - df[p] << "\n" ;
    return 0 ;
}