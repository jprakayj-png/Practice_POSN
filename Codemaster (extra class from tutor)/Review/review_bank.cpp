#include <bits/stdc++.h>
using namespace std ;

string pat ;

void show(int x , int p) {
    if ( p == x){
        cout << pat << "\n" ;
        return ;
    }
    for (auto c : {'0', '1'}){
        if (c == '1' && p > 0 && pat[p-1] == '1'){
            continue ;
        }
        else {
            pat.push_back(c) ;
            show(x,p+1) ;
            pat.pop_back() ;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    show(n , 0) ;
    return 0 ;
}