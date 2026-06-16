#include <bits/stdc++.h>
using namespace std ;

int main() {
    // setting
    ios_base::sync_with_stdio(0) ;
    cin.tie(nullptr) ; 
    int n ;
    cin >> n ;
    vector<vector<int>> matrix(n , vector<int>(n)) ;
    // cin data || put data tio make it symmetric
    for (int i = 1 ; i < n ; i++){
        for (int j = 0 ; j < i ; j++){
            cin >> matrix[i][j] ;
            matrix[j][i] = matrix[i][j] ;
        }
    }   
    // display result
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cout << matrix[i][j] << " " ;
        }
        cout << "\n" ;
    }
    return 0 ;
}