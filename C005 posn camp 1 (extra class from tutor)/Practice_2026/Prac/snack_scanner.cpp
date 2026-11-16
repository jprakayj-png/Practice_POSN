#include <bits/stdc++.h>
using namespace std ;

map<string ,int>pp ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    while(n--){
        string product ;
        int p ;
        cin >> product >> p ;
        pp[product] = p ;
    }
    int m = 0 , pay = 0 ;
    cin >> m ;
    for (int i = 0 ; i < m ; i++){
        string order ;
        cin >> order ;
        for (auto l : pp){
            if (l.first == order){
                pay += l.second ;
            }
        }
    }
    cout << m << " " << pay ;
    return 0 ;
}