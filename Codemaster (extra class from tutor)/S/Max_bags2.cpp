#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int tw = 0 , tb = 0 , te = 0 , n ;
    cin >> n ;
    for (int i = 0 ; i < n ; i++){
        int w = 0 , b = 0  , e = 0 ;
        cin >> w >> b >> e ;
        tw += w ;
        tb += b ;
        te += e ;
        int bw = tw / 3 ;
        int bb = tb / 4 ;
        int be = te / 2 ;
        int mn = min(be , min(bw,bb)) ;
        tw = tw - (mn * 3) ;
        tb = tb - (mn * 4) ;
        te = te - (mn *2) ;
        cout << mn << " " << tw << " " << tb << " " << te << "\n" ;
    }
    return 0 ;
}