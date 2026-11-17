#include <bits/stdc++.h>
using namespace std ;

vector<string>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , q ;
    cin >> n >> q ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    vector<vector<string>>rule(q,vector<string>(3)) ;
    for (int i = 0 ; i < q ; i++){
        for (int j = 0 ; j < 3 ; j++){
            cin >> rule[i][j] ;
        }
    }
    
    bool change = 1 ;
    while(change){
        change = 0 ;
        for (int i = 0 ; i < v.size() - 1 ; i++){
            for (int j = 0 ; j < q ; j++){
                if (v[i] == rule[j][0] && v[i+1] == rule[j][1]){
                    v[i] = rule[j][2] ;
                    v.erase(v.begin() + (i+1)) ;
                    change = 1 ;
                    break ;
                }
            }
            if (change){
                break ;
            }
        }
    }
    for (auto ele : v){
        cout << ele << " " ;
    }
    cout << "\n" ;
}