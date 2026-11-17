#include <bits/stdc++.h>
using namespace std ;

vector<string>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , r ;
    cin >> n >> r ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    vector<vector<string>>rule(r,vector<string>(3)) ;
    for (int i = 0 ; i < r ; i++){
        for (int j = 0 ; j < 3 ; j++){
            cin >> rule[i][j] ;
        }
    }
    bool change = 1 ;
    while(change){
        change = 0 ;
        for (int i = 0 ; i < v.size() - 1 ; i++){
            for (int j = 0 ; j < rule.size() ; j++){
                if (v[i] == rule[j][0] && v[i+1] == rule[j][1]){
                    change = 1 ;
                    v[i] = rule[j][2] ;
                    v.erase(v.begin() + (i+1)) ;
                    break ;
                }
            }
            if (change){
                break ;
            }
        }
    }

    for (int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " " ;
    }
    return 0 ;
}