#include <bits/stdc++.h>
using namespace std ;

set<int>s ;
int n ;
string ans ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    string st ;
    cin >> st ;
    for (int i = 0 ; i < n ; i++){
        s.insert(st[i]-'0') ;
    }
    if (s.size() == 1){
        cout << 0 << "\n" ;
    }
    else {
    ans = st ;
    for (auto x : s){
        string t ;
        for (int j = 0 ; j < n ; j++){
            if (x != st[j] - '0'){
                t += st[j] ;
            }
        }
        if (t.length() < ans.length() || (t.length() == ans.length() && t < ans)) {
            ans = t ;
        }
    }
    cout << ans << "\n" ;
}
    return 0 ;
}