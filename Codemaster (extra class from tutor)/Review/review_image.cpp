#include <bits/stdc++.h>
using namespace std ;

vector<vector<char>>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n , m ;
    cin >> n >> m ;
    v.resize(n,vector<char>(m)) ;
    for (long long i = 0 ; i < n ; i++){
        for (long long j = 0 ; j < m ; j++){
            cin >> v[i][j] ;
        }
    }
    long long k ;
    cin >> k ;
    while(k--){
        char c ;
        cin >> c ;
        if (c == 'R'){
            vector<vector<char>>t(m,vector<char>(n)) ;
            for (long long i = 0 ; i < m ; i++){
                for (long long j = 0 ; j < n ; j++){
                    t[i][j] = v[j][i] ;
                }
            }
            for (long long i = 0 ; i < m ; i++){
                reverse(t[i].begin(),t[i].end()) ;
            }
            swap(n,m) ;
            v = t ;
        }
        else if (c == 'H'){
            for (int i = 0 ; i < n ; i++){
                for (int j = 0 ; j < m / 2 ; j++){
                   swap(v[i][j] , v[i][m-j-1]) ;
                }
            }
        }
        else if (c == 'V'){
            for (int j = 0 ; j < m ; j++){
                for (int i = 0 ; i < n / 2 ; i++){
                    swap(v[i][j] , v[n-i-1][j]) ;
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