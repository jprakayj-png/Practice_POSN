#include <bits/stdc++.h>
using namespace std ;

void show (int x , int n , vector<int>v) {
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
        vector<int>vv = v ;
        vv.push_back(i) ;
        show(i,n+1,vv) ;
    }
}
int main() {
    ios_base::sync_with_stdio(false) ;
    cin.tie(nullptr) ;
    vector<int>v ;   
    show(0,0,v) ;
}