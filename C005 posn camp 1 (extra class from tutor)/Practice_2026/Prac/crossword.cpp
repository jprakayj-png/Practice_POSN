#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string a , b ;
    cin >> a ;
    cin >> b ;
    int pa = 0 , pb = 0 ;
    bool ch = 0 ;
    for (int i = 0 ; i < a.length() ; i++){
        for (int j = 0 ; j < b.length() ; j++){
            if (a[i] == b[j]){
                pa = i ;
                pb = j ;
                ch = 1 ;
                break ;
            }
        }
        if (ch){
            break ;
        }
    }
    for (int c = 0 ; c < pb ; c++){
        for (int i = 0  ; i < pa ; i++){
            cout << " " ;
        }
        cout << b[c] << "\n" ;
    }
    cout << a << "\n" ;
    for (int c = pb + 1 ; c < b.length() ; c++){
        for (int i = 0  ; i < pa ; i++){
            cout << " " ;
        }
        cout << b[c] << "\n" ;
    }
    return 0 ;
}