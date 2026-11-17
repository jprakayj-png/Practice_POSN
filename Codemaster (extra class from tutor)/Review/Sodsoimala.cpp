#include <bits/stdc++.h>
using namespace std ;

stack<char>st ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    while(n--){
        char c ;
        cin >> c ;
        if (!st.empty() && c == st.top()){
            st.pop() ;
        }
        else {
            st.push(c) ;
        }
    }
    if (st.empty()){
        cout << "EMPTY\n" ;
    }
    else {
        stack<char>ans ;
        while(!st.empty()){
            ans.push(st.top());
            st.pop() ;
        }
        while(!ans.empty()){
            cout << ans.top() ;
            ans.pop() ;
        }
    }
    return 0 ;
}