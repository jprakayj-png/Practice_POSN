#include <bits/stdc++.h>
using namespace std ;

int find_pos(int p) ;

int main() {
    int n ;
    cin >> n ;
    find_pos(n) ;
    return 0 ;
}

int find_pos(int p){
    long long arr[p] ;
    for (int i = 0 ; i < p ; i++){
        if (i <= 1){
            arr[i] = 1 ;
        }
        else {
            arr[i] = arr[i-1] + arr[i-2] ;
        }
    }
    cout << arr[p-1] << "\n" ;
    return 0 ; 
}