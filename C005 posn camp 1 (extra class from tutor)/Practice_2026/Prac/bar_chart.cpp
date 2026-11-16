#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    int arr[51] ; 
    for (int i = 0 ; i < 51 ; i++){
        arr[i] = -1 ;
    }
    for (int i = 0 ; i < n ; i++){
        int a , b ;
        cin >> a >> b ;
        arr[a] = b ;
    }
    int cnt = 0  , find = 1 , mx = 1 , mn = 50 ;
    int gp[n] ;
    while(cnt < n && find <= 50){
        if (arr[find] > -1){
            gp[cnt] = arr[find] ;
            if (arr[find] > mx){
                mx = arr[find] ;
            }
            else if (arr[find] < mn){
                mn = arr[find] ;
            }
            cnt++ ;
        }
        find++ ;
    }
    for (int i = mx ; i > 0 ; i--){
        for (int j = 0 ; j < n ; j++){
            if (gp[j] == mx && i <= gp[j]){
                cout << "x" ;
            }
            else if (gp[j] == mn && i <= gp[j]){
                cout << "y" ;
            }
            else if (i <= gp[j]){
                cout << "*" ;
            }
            else {
                cout << " " ;
            }
        }
        cout << "\n" ;
    }
    return 0 ; 
}