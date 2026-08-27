#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    int a = 0 , b = 0 ;
    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        v.push_back(x) ;
    }
    sort(v.begin(),v.end(),greater<int>()) ;
    for (int i = 0 ; i < v.size() ; i++){
        if (i % 2 == 0){
            a += v[i] ;
        }
        else {
            b += v[i] ;
        }
    }
    cout << a - b << "\n" ;
    return 0 ;
}