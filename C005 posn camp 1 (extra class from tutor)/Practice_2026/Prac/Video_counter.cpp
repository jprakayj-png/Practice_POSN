#include <bits/stdc++.h>
using namespace std ;

vector<string>v ;
vector<int>k ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    while(n--){
        string st ;
        cin >> st ;
        if (v.empty()){
            v.push_back(st) ;
            k.push_back(1) ;
        }
        else {
            bool ch = 0 ;
            for (int i = 0 ; i < v.size() ; i++){
                if (v[i] == st){
                    k[i]++ ;
                    ch = 1 ;
                    break ;
                }
            }
            if (!ch){
                v.push_back(st) ;
                k.push_back(1) ;
            }
        }
    }
    for (int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " " << k[i] << "\n" ;
    }
    return 0 ;
}