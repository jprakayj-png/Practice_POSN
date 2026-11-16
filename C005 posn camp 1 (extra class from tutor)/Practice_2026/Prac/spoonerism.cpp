#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string a , b ;
    cin >> a >> b ;
    int pa , pb ;
    for (int i = 0 ; i < a.length() ; i++){
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            pa = i ;
            break ;
        }
    }
    for (int i = 0 ; i < b.length() ; i++){
        if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u'){
            pb = i ;
            break ;
        }
    }
    char temp = a[pa] ;
    a[pa] = b[pb] ;
    b[pb] = temp ;
    if (pa+1 > b.length()){
        b += a[pa+1] ;
        a.erase(a.length()-1) ;
    }
    else if (pb+1 > a.length()){
        a += b[pb+1] ;
        b.erase(b.length()-1) ;
    }
    else {
        char temp = a[pa+1] ;
        a[pa+1] = b[pb+1] ;
        b[pb+1] = temp ;
    }
    cout << a << " " << b << "\n" ;
    return 0 ;
}