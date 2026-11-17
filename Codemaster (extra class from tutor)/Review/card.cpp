#include <bits/stdc++.h>
using namespace std ;

unordered_multiset<int>R ;
unordered_multiset<int>B ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int q ;
    cin >> q ;
    int k = 0 ;
    while(q--){
        int i ;
        char c ;
        cin >> i >> c ;
        if (c == 'R'){
            auto it = B.find(i) ;
            if (it != B.end()){
                k++ ;
                B.erase(it) ;
            }
            else {
                R.insert(i) ;
            }
        }
        else if (c == 'B'){
            auto it = R.find(i) ;
            if (it != R.end()){
                k++ ;
                R.erase(it) ;
            }
            else {
                B.insert(i) ;
            }
        }
    }
    cout << k << " " << R.size() + B.size() << "\n" ;
    return 0 ;
}