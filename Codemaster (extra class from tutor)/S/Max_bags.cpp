#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int water = 0 , bread = 0 , egg = 0 ;
    cin >> water >> bread >> egg ;
    int pw = water / 3 ;
    int pb = bread / 4 ;
    int pe = egg / 2 ;
    int mn = min( pw , min( pb , pe) ) ;
    cout << mn << " " ;
    cout << water - (3 * mn) << " " ;
    cout << bread - (4 * mn) << " " ;
    cout << egg - (2 * mn) << " " ;
    return 0 ;
}