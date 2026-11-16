#include <bits/stdc++.h>
using namespace std ;

vector<string>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    while(n--){
        string c ;
        cin >> c ;
        if (v.empty() || c != v[v.size()-1]){
            v.push_back(c) ;
        }
    }
    cout << v.size() << "\n" ;
    for (int i = 0 ; i < v.size() ; i++){
      if (i == v.size() - 1){
        cout << v[i] ;
      }
      else {
        cout << v[i] << " " ;
      }
    }
    return 0 ;    
}