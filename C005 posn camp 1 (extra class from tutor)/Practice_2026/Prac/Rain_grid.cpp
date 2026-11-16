#include <bits/stdc++.h>
using namespace std ;

int n , m ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n >> m ;

    int v[n+1][m+1] ;
    
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cin >> v[i][j] ;
        }
    }
    int sum_r = 0 , r ;
    for (int i = 1 ; i <= n ; i++){
        int k = 0 ; 
        for (int j = 1 ; j <= m ; j++){
            k += v[i][j] ;
        }
        if (k > sum_r){
            r = i ;
            sum_r = k ; 
        }
    }
    int sum_c = 0 ; 
    int c ;
    for (int i = 1 ; i <= m ; i++){
        int k = 0 ; 
        for (int j = 1 ; j <= n ; j++){
            k += v[j][i] ;
        }
        if (k > sum_c){
            c = i ;
            sum_c = k ;
        }
    }
    if (sum_r >= sum_c){
        cout << "ROW " << r << " " << sum_r << "\n" ;
    }
    else {
        cout << "COLUMN " << c << " " << sum_c << "\n" ;   
    }
    return 0 ;
}