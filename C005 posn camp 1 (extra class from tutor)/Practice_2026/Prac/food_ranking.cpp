#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int x ;
    cin >> x ;
    while(x != -1){
        v.push_back(x) ;
        cin >> x ;
    }
    sort(v.begin(),v.end()) ;
    cout << v[0] << " " << v[v.size()-1] << "\n" ;
    return 0 ;
}