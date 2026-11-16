#include <bits/stdc++.h>
using namespace std ;

int arr[3] ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n >> m ;
    while(n--){
        for (int i = 0 ; i < m ; i++){
            char c ;
            cin >> c ;
            if (c == 'R'){
                arr[0]++ ;
            }
            else if (c == 'G'){
                arr[1]++ ;
            }
            else if (c == 'B'){
                arr[2]++ ;
            }
        }
    }
    cout << "R " << arr[0] << "\n" ;
    cout << "G " << arr[1] << "\n" ;
    cout << "B " << arr[2] << "\n" ;
    int mx = 0 ;
    char p ;
    for (int i = 0 ; i <= 2 ; i++){
        if (arr[i] > mx){
            mx = arr[i] ;
            if (i == 0){
                p = 'R' ;
            }
            else if (i == 1){
                p = 'G' ;
            }
            else {
                p = 'B' ;
            }
        }
    }
    cout << "MOST " << p ;
    return 0 ;
}