#include <bits/stdc++.h>
using namespace std ;

int n ;
string cur ;

void show(int s) ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    show(0) ;
    return 0 ;
}

void show(int s){
    if (s == n){
        cout << cur << "\n" ;
        return ;
    }
    for (auto ch : {'0' , '1'}){
        if (ch == '1' && s > 0 && cur[s-1] == '1'){
            continue ;
        }
        else {
            cur.push_back(ch) ;
            show(s+1) ;
            cur.pop_back() ;
        }
    }
}