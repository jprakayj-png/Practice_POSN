#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long m ;
    cin >> m ;
    for (size_t i = 1 ; i < 3000000 ; i++){
        if (pow(2,i)-1 > m * i){
            cout << i ;
            break ;
        }
    }
    return 0 ;
}