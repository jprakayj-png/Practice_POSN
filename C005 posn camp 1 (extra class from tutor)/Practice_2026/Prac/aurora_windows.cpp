#include <bits/stdc++.h>
using namespace std ;

int n , target ;
vector<int>v ;
int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n >> target ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    int c = 0 ;
    for (int i = 0 ; i < v.size()-1 ; i++){
        if (v[i] != v[i+1] && v[i] + v[i+1] == target){
            c++ ;
        }
    }
    cout << c << "\n" ;
    return 0 ;
}