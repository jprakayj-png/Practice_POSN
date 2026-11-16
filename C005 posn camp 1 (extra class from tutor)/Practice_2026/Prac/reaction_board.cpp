#include <bits/stdc++.h>
using namespace std ;

map<string,pair<int,int>>algo ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n ;
    while(n--){
        string x , c ;
        cin >> x >> c ;
        if (c == "LIKE"){
            algo[x].first++ ;
        }
        else if (c == "DISLIKE") {
            algo[x].second++ ;
        }
    }
    cin >> m ;
    while(m--){
        string x ;
        cin >> x ;
        cout << x << " " << algo[x].first << " " << algo[x].second << "\n" ;
    }
    return 0 ;
}