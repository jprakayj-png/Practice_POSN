#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n >> m ;
    vector<vector<char>>v(n,vector<char>(m)) ;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            cin >> v[i][j] ;
        }
    }
    int o , r = 0 , c = 0 ;
    cin >> o ;
    while(o--){
        char c ;
        cin >> c ;
        if (c == 'R'){
            int r = m ;
            int c = n ;
            vector<vector<char>>temp(r,vector<char>(c)) ;
            for (int i = 0 ; i < r ; i++){
                for (int j = 0 ; j < c ; j++){
                    temp[i][j] = v[j][i] ;
                }
            }
            for (int i = 0 ; i < r ; i++){
                reverse(temp[i].begin(),temp[i].end()) ;
            }
            v = temp ;
            n = r ;
            m = c ;
        }
        else if (c == 'H'){
            for (int i = 0 ; i < n ; i++){
                for (int j = 0 ; j < m / 2 ; j++){
                    char temp = v[i][j] ;
                    v[i][j] = v[i][m-j-1] ;
                    v[i][m-j-1] = temp ;
                }
            }
        }
        else if (c == 'V'){
            for (int j = 0 ; j < m ; j++){
                for (int i = 0 ; i < n / 2 ; i++){
                    char temp = v[i][j] ;
                    v[i][j] = v[n-i-1][j] ;
                    v[n-i-1][j] = temp ;
                }
            }
        }
    }
    cout << n << " " << m << "\n" ;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            cout << v[i][j] ;
        }
        cout << "\n" ;
    }
    return 0 ;
}