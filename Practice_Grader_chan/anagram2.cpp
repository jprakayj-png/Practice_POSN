#include <bits/stdc++.h>
using namespace std ;

map<char,int>A ;
map<char,int>B ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    A['A'] = B['A'] = 0 ;
    A['B'] = B['B'] = 0 ;
    A['C'] = B['C'] = 0 ;
    A['D'] = B['D'] = 0 ;
    A['E'] = B['E'] = 0 ;
    A['F'] = B['F'] = 0 ;
    A['G'] = B['G'] = 0 ;
    A['H'] = B['H'] = 0 ;
    string a , b ;
    cin >> a ;
    cin >> b ;
    for (auto i : a){
        A[i]++ ;
    }
    for (auto i : b){
        B[i]++ ;
    }
    for (auto i : A){
        cout << i.second << " " ;
    }
    cout << "\n" ;
    for (auto i : B){
        cout << i.second << " " ;
    }
    cout << "\n" ;
    int diff = 0 ;
    for (char c = 'A' ; c <= 'H' ; c++){
        if (A[c] == B[c]){
            cout << 0 << " " ;
        }
        else {
            cout << 1 << " " ;
            diff++ ;
        }
    }
    if (diff <= 3){
        cout << "\nanagram\n" ;
    }
    else {
        cout << "\nno\n" ;
    }
    return 0 ;
}