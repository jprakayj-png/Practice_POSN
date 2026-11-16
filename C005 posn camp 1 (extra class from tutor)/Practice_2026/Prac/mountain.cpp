#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    v.resize(n) ;
    int mx = 0 ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
        if (v[i] > mx){
            mx = v[i] ;
        }
    }
    for (int row = 0 ; row < mx ; row++){
        for (int i = 0 ; i < n ; i++){
            int h = v[i] ;
            int empty_r = mx - h ;
            if (row < empty_r){
                for (int j = 0 ; j < 2 * h ; j++){
                    cout << ' ' ;
                }
            }
            else {
                int steep = row - empty_r ;
                int l = h - 1 - steep ;
                int r = h + steep ;
                for (int j = 0 ; j < 2 * h ; j++){
                    if (j == l){
                        cout << '/' ;
                    }
                    else if (j == r){
                        cout << '\\' ;
                    }
                    else {
                        cout << ' ' ;
                    }
                }
            }
            if (i != n-1){
                cout << ' ' ;
            }
        }
        cout << "\n" ;
    }
    return 0 ;
}