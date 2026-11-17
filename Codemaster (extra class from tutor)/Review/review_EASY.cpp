#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    string s ;
    cin >> n ;
    cin >> s ;
    unordered_map<int,int>ump ;
    ump[0] = -1 ;
    int mx = 0 , cur = 0 ;
    for (int i = 0 ; i < n ; i++){
        if (s[i] == 'U'){
            cur++ ;
        }
        else {
            cur-- ;
        }

        if (ump.find(cur) != ump.end()){
            mx = max(mx, i - ump[cur]) ;
        }
        else {
            ump[cur] = i ;
        }
    }
    cout << mx << "\n" ;
    return 0 ;
}