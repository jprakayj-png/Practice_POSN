#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string order ;
    cin >> order ;
    int n ;
    cin >> n ;
    while(n--){
        int px ;
        cin >> px ;
        if (order[px] == '0'){
            order[px] = '1' ;
        }
        else {
            order[px] = '0' ;
        }
        int z = 0  , o = 0 , mx_z = 0 , mx_o = 0 ;
        char p = order[0] ;
        for (int i = 1 ; i < order.length() ; i++){
            if (p == order[i] && p == '0'){
                z++ ;
            }
            else if (p == order[i] && p == '1'){
                o++ ;
            }
            else if (p != order[i]){
                if (p == '0'){
                    mx_z = max(mx_z,z) ;
                }
                else if (p == '1'){
                    mx_o = max(mx_o,o) ;
                }
                p = order[i] ;
                z = 0 ;
                o = 0 ;
            }
        }
        if (p == '0'){
            mx_z = max(mx_z,z) ;
        }
        else if (p == '1'){
            mx_o = max(mx_o,o) ;
        }
        cout << mx_z + 1 << " " << mx_o + 1 << "\n" ;
    }
    return 0 ;
}