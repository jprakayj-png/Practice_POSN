#include <bits/stdc++.h>
using namespace std ;

stack<long long>st ;
vector<long long>ans ;
vector<long long>v ;


int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n ;
    cin >> n ;
    v.resize(n) ;
    ans.resize(n,0) ;

    for (size_t i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }

    for (size_t i = 0 ; i < n ; i++){
        while(!st.empty() && v[i] > v[st.top()]){
            ans[st.top()] = i + 1 ;
            st.pop() ;
        }
        st.push(i) ;
    }

    for (auto p : ans){
        cout << p << " " ;
    }
    return 0 ;
}