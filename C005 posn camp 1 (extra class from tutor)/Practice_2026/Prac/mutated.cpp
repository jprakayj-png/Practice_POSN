#include <bits/stdc++.h>
using namespace std ;

long long n ;
bool ch = 0 ;
int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    for (size_t i = 0 ; i <= n / 3 ; i++){
        for (size_t j = 0 ; j <= n / 4 ; j++){
            for (size_t k = 0 ; k <= n / 5 ; k++){
                int l = n - ((3 * i) + (4 * j) + (5 * k)) ;
                if (l % 6 == 0 && l >= 0){
                    cout << i << " " << j << " " << k << " " << l / 6 << "\n" ;
                    ch = 1 ;
                }
            }
        }
    }
    if (!ch){
        cout << "IMPOSSIBLE" ;
    }  
    return 0 ;
}

