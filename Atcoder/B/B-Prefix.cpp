#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    string a , b ;
    cin >> a >> b ;
    if (a == b){
        cout << "Yes\n" ;
    }
    else {
        int p = b.find(a) ;
        if (p == string::npos){
            cout << "No\n" ;
        }
        else {
            if (p == 0){
                cout << "Yes\n" ;
            }
            else {
                cout << "No\n" ;
            }
        }
    }
    return 0 ;
}