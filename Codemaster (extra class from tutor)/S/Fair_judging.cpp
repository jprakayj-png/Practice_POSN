#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n ;
    cin >> n ;
    vector<int>v(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    int sum = 0 ;
    if (n == 3){
        for (int i = 0 ; i < 3 ; i++){
            sum += v[i] ;
        }
    }
    else if (n == 5 || n == 7 || n == 9){
        sort(v.begin() , v.end()) ;
        v.erase(v.begin()) ;
        v.erase(v.end()) ;
        for (int i = 0 ; i < n - 2 ; i++){
            sum += v[i] ;
        }
    }
    cout << sum << "\n" ;
    return 0 ;
}