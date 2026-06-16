#include <bits/stdc++.h>
using namespace std ;

void show (int n) ;

int main() {
    ios_base::sync_with_stdio(false) ;
    cin.tie(nullptr) ;
    int n ;
    cin >> n ;
    show(n) ;
    return 0 ;
}

void show(int n) {
    int s = 0 ; 
    // phrase 1
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= n ; j++){
            if (s < n){
                cout << " " ;
            }
        }
        for (int k = 1 ; k <= 3 * n ; k++){
            cout << "#" ;
        }
        cout << "\n" ;
    }
    // phrase 2
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= 2 * n ; j++){
            cout << "#" ;
        }
        cout << "\n" ;
    }
    // phrase 3
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= 4 * n ; j++){
            cout << "#" ;
        }
        cout << "\n" ;
    }
    // phrase 4 
    s = n ;
    int pos = n ;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 0 ; j < 4 * n ; j++){
            if (s > 0){
                if (j == pos){
                    cout << "#" ;
                    s-- ;
                    pos++ ;
                }
                else {
                    cout << " " ;
                }
            }
            else {
                break ;
            }
        }
        pos = 3 * n ;
        for (int k = 2 * n ; k <= (4 * n) - 1 ; k++){
            if (k < pos){
                cout << " " ;
            }
            else {
                cout << "#" ;
            }
        }
    cout << "\n" ;
    pos = n ;
    s = n ;
    }
    return ;
}