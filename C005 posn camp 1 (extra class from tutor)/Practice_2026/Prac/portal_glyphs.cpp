#include <bits/stdc++.h>
using namespace std ;

stack<char>st ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    for (int i = 0 ; i < s.length() ; i++){
        if (st.empty()){
            cout << "INVALID" ;
            return 0 ;
        }
        else if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]) ;
        }
        else {
            if (s[i] == ')' && st.top() == '('){
                st.pop() ;
            }
            else if (s[i] == ']' && st.top() == '['){
                st.pop() ;
            }
            else if (s[i] == '}' && st.top() == '{'){
                st.pop() ;
            }
            else {
                cout << "INVALID" ;
                return 0 ;
            }
        }
    }
    if (st.empty()){
        cout << "VALID" ;
    }
    else {
        cout << "INVALID" ;
    }
    return 0 ;
}