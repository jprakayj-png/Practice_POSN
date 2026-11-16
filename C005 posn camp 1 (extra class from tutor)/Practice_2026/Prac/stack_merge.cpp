#include <bits/stdc++.h>
using namespace std ;

stack<int>st1 ;
stack<int>st2 ;
stack<int>k ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int a , b ;
    cin >> a >> b ;
    while(a--){
        int x ;
        cin >> x ;
        st1.push(x) ;
    }
    while(b--){
        int x ;
        cin >> x ;
        st2.push(x) ;
    }
    while(!st2.empty()){
        k.push(st2.top()) ;
        st2.pop() ;
    }
    while(!st1.empty()){
        k.push(st1.top()) ;
        st1.pop() ;
    }
    while(!k.empty()){
        cout << k.top() << " " ;
        k.pop() ;
    }
    return 0 ;
}