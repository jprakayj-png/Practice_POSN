#include <bits/stdc++.h>
using namespace std ;

stack<long long>st ;
vector<long long>v ;
vector<long long>ans ;

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
            ans[st.top()] = i - st.top() ;
            st.pop() ;
        }
        st.push(i) ;
    }

    for (auto a : ans){
        cout << a << " " ;
    }
    return 0 ;
}