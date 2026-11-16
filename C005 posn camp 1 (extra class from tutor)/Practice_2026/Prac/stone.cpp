#include <bits/stdc++.h>
using namespace std ;

int n ;
string cur ;

void show(int s) ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    if (n == 1){
        cout << "A\n" ;
    }
    else if (n == 2){
        cout << "AA\n" ;
    }
    else {
        show(0) ;
    }
    return 0 ;
}

void show(int s){
    if (s == n){
        cout << cur << "\n" ;
        return ;
    }
    for (auto c : {'A' , 'B'}){
        if (c == 'B' && s > 0 && cur[s-1] == 'B'){
            continue ;
        }
        else if (c == 'B' && s == n-1){
            continue ;
        }
        else if (c == 'B' && cur == ""){
            continue ;
        }
        else {
            cur.push_back(c) ;
            show(s+1) ;
            cur.pop_back() ;
        }
    }
}