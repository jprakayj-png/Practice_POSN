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
            int empty = mx - h ;
            if (row < empty){
                for (int j = 0 ; j < 2 * h ; j++){
                    cout << " " ;
                }
            }
            else {
                int level = row - empty ;
                int l = h - level - 1 ;
                int r = h + level ;
                for (int j = 0 ; j < 2 * h ; j++){
                    if (j == l){
                        cout << "/" ;
                    }
                    else if (j == r){
                        cout << "\\" ;
                    }
                    else {
                        cout << " " ;
                    }
                }
            }
            cout << " " ;
        }
        cout << "\n" ;
    }
    return 0 ;
}