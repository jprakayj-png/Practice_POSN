#include <bits/stdc++.h>
using namespace std ;

map<int,int>mp ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , h , q ;
    cin >> n >> h >> q ;
    vector<int>choose(n+1,0) ;
    for (int i = 0 ; i < q ; i++){
        int a ;
        cin >> a ;
        choose[a]++ ;
    }
    for (int i = 1 ; i<= n ; i++){
        int not_choose = q - choose[i] ;
        int s = h - not_choose ;
        if (s > 0){
            cout << "Yes\n" ;
        }
        else {
            cout << "No\n" ;
        }
    }
    return 0 ;
}