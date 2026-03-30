#include <bits/stdc++.h>
using namespace std ;

// Global var 
vector<int>v ;

void show (int x , int n) {
    // base case
    if (x > 5){
        return ;
    }
    if (n == 3){
        for (auto i : v){
            cout << i << " " ;
        }
        cout << endl ;
        return ;
    }
    // find element
    for (int i = x+1 ; i <= 5 ; i++){
        v.push_back(i) ;
        show(i,n+1) ;
        v.pop_back() ;
    }
}
int main() {
    ios_base::sync_with_stdio(false) ;
    cin.tie(nullptr) ;   
    show(0,0) ;
}