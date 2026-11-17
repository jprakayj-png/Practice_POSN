#include <bits/stdc++.h>
using namespace std ;

vector<vector<char>>v ;
int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n >> m ;
    v.resize(n+1,vector<char>(m+1)) ;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cin >> v[i][j] ;
        }
    }
    int order ;
    cin >> order ;
    int r = n , c = m ;
    while(order--){
        char ch ;
        cin >> ch ;
        if (ch == 'R'){
            vector<vector<char>>temp(m+1,vector<char>(n+1)) ;
            r = m ;
            c = n ;
            for (int i = 1 ; i <= n ; i++){
                for (int j = 1 ; j <= m ; j++){
                    temp[j][i] = v[i][j] ;
                }
            }
            for (int j = 1 ; j <= r ; j++){
                for (int i = 1 ; i <= c / 2 ; i++){
                    swap(temp[j][i] , temp[j][n-i+1]) ;
                }
            }
            v = temp ;
        }
        if (ch == 'H'){
            for (int i = 1 ; i <= r ; i++){
                for (int j = 1 ; j <= c / 2 ; j++){
                    swap(v[i][j] , v[i][n-j+1]) ;
                }
            }
        }
        if (ch == 'V'){
            for (int j = 1 ; j <= c ; j++){
                for (int i = 1 ; i <= r / 2 ; i++){
                    swap(v[i][j] , v[n-i+1][j]) ;
                }
            }
        }
    }
    cout << r << " " << c << "\n" ;
    for (int i = 1 ; i <= r ; i++){
        for (int j = 1 ; j <= c ; j++){
            cout << v[i][j]  ;
        }
        cout << "\n" ;
    }
    return 0 ;
}