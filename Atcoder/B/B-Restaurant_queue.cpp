#include <bits/stdc++.h>
using namespace std ;

queue<int>q ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    while(n--){
        int o ;
        cin >> o ;
        if (o == 1){
            int x ;
            cin >> x ;
            q.push(x) ;
        }
        else if (o == 2){
            cout << q.front() << "\n" ;
            q.pop() ;
        }
    }
    return 0 ;
}