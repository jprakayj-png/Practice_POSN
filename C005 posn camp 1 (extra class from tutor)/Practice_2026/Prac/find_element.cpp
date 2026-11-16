#include <bits/stdc++.h>
using namespace std ;

stack<int>st ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        st.push(x) ;
    }
    int f ;
    cin >> f ;
    while(!st.empty()){
        if (st.top() == f && st.size() == n){
            cout << "TOP\n" ;
            return 0 ;
        }
        else if (st.top() == f && st.size() == 1){
            cout << "BOTTOM\n" ;
            return 0 ;
        }
        else if (st.top() == f){
            cout << st.size()-1 << "\n" ;
            return 0 ; 
        }
        st.pop() ;
    }
    cout << "NULL\n" ;
    return 0 ;
}