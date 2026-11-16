#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , c = 0 , s = 0 ;
    int more = 0 , want = 0 ;
    cin >> n >> c >> s ;
    while(n--){
        int x ;
        cin >> x ;
        s += x ;
        if (s > c){
            more += s - c ;
            s = c ;
        }
        else if (s < 0){
            want += 0 - (s) ;
            s = 0 ;
        }
    }
    cout << s << " " << more << " " << want << "\n" ;
    return 0 ; 
}