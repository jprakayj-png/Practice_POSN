#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    int arr1[n] , arr2[n] ;
    for (int i = 0 ; i < n ; i++){
        cin >> arr1[i] ;
    }
    for (int i = 0 ; i < n ; i++){
        cin >> arr2[i] ;
    }
    int c = 0 , p = 0 ;
    for (int i = 0 ; i < n ; i++){
        if (arr1[i] == arr2[i]){
            c++ ;
        }
    }
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            if (i == j){
                continue ;
            }
            else {
                if (arr1[i] == arr2[j]){
                    p++ ;
                }
            }
        }
    }
    cout << c << "\n" ;
    cout << p << "\n" ;
    return 0 ;
}