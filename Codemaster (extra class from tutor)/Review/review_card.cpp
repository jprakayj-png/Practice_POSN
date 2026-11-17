#include <bits/stdc++.h>
using namespace std ;

unordered_multiset<int>R ;
unordered_multiset<int>B ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int q ;
    cin >> q ;
    int  ct = 0 ;
    while(q--){
        char c ;
        int n ;
        cin >> n >> c ;
        if (c == 'R'){
            auto it = B.find(n) ;
            if (it != B.end()){
                ct++ ;
                B.erase(it) ;
            }
            else {
                R.insert(n) ;
            }
        }
        else {
            auto it = R.find(n) ;
            if (it != R.end()){
                ct++ ;
                R.erase(it) ;
            }
            else {
                B.insert(n) ;
            }
        }
    }
    cout << ct << " " << R.size() + B.size() << "\n" ;
    return 0 ;
}