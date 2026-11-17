#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , mx = 0 ;
    cin >> n ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
        if (v[i] > mx){
            mx = v[i] ;
        }
    }
    for (int i = 1 ; i <= mx ; i++){
        for (int j = 0 ; j < n ; j++){
            if (v[j] == i){
                cout << "|_|" ;
            }
            else if (i > v[j]){
                cout << "   " ;
            }
            else {
                cout << "| |" ;
            }
        }
        cout << "\n" ;
    }
    return 0 ;
}