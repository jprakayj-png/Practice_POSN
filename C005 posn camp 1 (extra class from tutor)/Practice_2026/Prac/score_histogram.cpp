#include <bits/stdc++.h>
using namespace std ;

map<int,int>mp ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int q ;
    cin >> q ;
    while(q--){
        int x ;
        cin >> x ;
        if (x == 100){
            mp[9]++ ;
        }
        else {
            mp[x/10]++ ;
        }
    }
    for (int i = 0 ; i <= 9 ; i++){
        if (i == 0){
            cout << "00-09:" ;
        }
        else if (i == 9){
            cout << i * 10 << "-" << (i+1) * 10 << ":" ;
        }
        else {
            cout << i * 10 << "-" << ((i+1) * 10) - 1 << ":" ;
        }
        if (mp[i] == 0){
            cout << "-" ;
        }
        else {
            for (int j = 0 ; j < mp[i] ; j++){
                cout << "*" ;
            }
        }
        cout << "\n" ;
    }
    return 0 ;
}