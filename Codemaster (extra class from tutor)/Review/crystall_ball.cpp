#include <bits/stdc++.h>
using namespace std ;

queue<long long>q ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    while(n--){
        long long x ;
        cin >> x ;
        if (x > 0){
            q.push(x) ;
        }
        else if (x < 0) {
            int r = -(x) ;
            while(r > 0 && !q.empty()){
                if (q .front() - r <= 0){
                    r = r - q.front() ;
                    q.pop() ;
                }
                else {
                    q.front() -= r ;
                    r = 0 ;
                }
            }
        }
    }
    while(!q.empty()){
        cout << q.front() << " " ;
        q.pop() ;
    }
    return 0 ;
}