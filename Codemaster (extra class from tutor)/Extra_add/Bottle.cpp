#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    stack<int>bottle ;
    int n ;
    cin >> n ;
    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        if (bottle.empty()){
            bottle.push(x) ;
        }
        else {
            if ((bottle.top() % 2 == 0 && x % 2 != 0 ) || (bottle.top() % 2 != 0 && x % 2 == 0)){
                bottle.pop() ;
            }
            else {
                bottle.push(x) ;
            }
        }
    }
    stack<int>ans ;
    while(!bottle.empty()){
        ans.push(bottle.top()) ;
        bottle.pop() ;
    }
    while(!ans.empty()){
        cout << ans.top() << " " ;
        ans.pop() ;
    }
    return 0 ;
}