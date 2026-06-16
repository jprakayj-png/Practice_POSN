#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int s , e ;
    int sum = 0 ;
    cin >> s >> e ;
    for (int i = s ; i < e ; i++){
        if (i % 2 == 0 || i % 3 == 0){
            sum += i ;
        }
    }
    cout << sum << "\n" ;
    return 0 ;
}