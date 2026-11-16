#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int n , s ;
    long long sum = 0 ;
    cin >> n >> s ;
    for (int i = n ; i <= s ; i++) {
        if (i % 6 == 0){
            sum += i ;
        }
        else if (i % 3 == 0){
            sum += i ;
        }
        else if (i % 2 == 0){
            sum += i ;
        }
    }
    cout << sum << "\n" ;
    return 0 ;
}