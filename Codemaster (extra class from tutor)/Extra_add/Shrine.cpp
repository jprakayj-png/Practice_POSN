#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n >> m ;
    while(m--){
        for (int i = 0 ; i < 2 * n + 1 ; i++){
            cout << "* " ;
        }
        cout << "\n" ;
        for (int i = 0 ; i < n ; i++){
            cout << "  *" ;
            for (int j = 0 ; j < 2 * n - 3 ; j++){
                cout << "  " ;
            }
            cout << " *  " ;
            cout << "\n" ;
        }
    }
    return 0 ;
}