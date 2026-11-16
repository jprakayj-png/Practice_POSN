#include <bits/stdc++.h>
using namespace std ;

priority_queue<int>pq ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    while(n--){
        string order ;
        cin >> order ;
        if (order == "ADD"){
            int x ;
            cin >> x ;
            pq.push(x) ;
        }
        else if (order == "TOP"){
            if (pq.empty()){
                cout << "EMPTY\n" ;
            }
            else {
                cout << pq.top() << "\n" ;
            }
        }
        else if (order == "TAKE"){
            if (pq.empty()){
                cout << "EMPTY\n" ;
            }
            else {
                cout << pq.top() << "\n" ;
                pq.pop() ;
            }
        }
        else if (order == "COUNT"){
            cout << pq.size() << "\n" ;
        }
    }
    return 0 ;
}