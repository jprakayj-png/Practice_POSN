#include <bits/stdc++.h>
using namespace std ;

vector<vector<char>>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int r , c , k ;
    cin >> r >> c >> k ;
    v.resize(r,vector<char>(c)) ;
    for (int i = 0 ; i < r ; i++){
        for (int j = 0 ; j < c ; j++){
            cin >> v[i][j] ;
        }
    }
    bool ok = 1 ;
    while(k--){
        int rp , cp ;
        char dir ;
        string s ;
        cin >> rp >> cp >> dir >> s ;
        if (dir == 'H'){
            for (int j = cp - 1 ; j < cp - 1 + s.size() ; j++){
                if (j >= c ){
                    ok = 0 ;
                    cout << "INVALID" ;
                    return  0; 
                }
                int idx = j - (cp -1) ;
                if (v[rp-1][j] == '#' || ((s[j] != v[rp-1][j]) && (v[rp-1][j] != '.'))){
                    ok = 0 ;
                    cout << "INVALID" ;
                    return  0; 
                }
                else {
                    v[rp-1][j] = s[idx] ;
                }
            }
        }
        else {
            for (int i = rp - 1 ; i < rp - 1 + s.size() ; i++){
                if (i >= r ){
                    ok = 0 ;
                    cout << "INVALID" ;
                    return  0; 
                }
                int idx = i - (rp-1) ;
                if (v[i][cp-1] == '#' || ((s[idx] != v[i][cp-1]) && (v[i][cp-1] != '.'))){
                    ok = 0 ;
                    cout << "INVALID" ;
                    return  0; 
                }
                else {
                    v[i][cp-1] = s[idx] ;
                }
            }
        }
    }
    for (int i = 0 ; i < r ; i++){
        for (int j = 0 ; j < c ; j++){
            cout << v[i][j] ;
        }
        cout << "\n" ;
    }
    return 0 ;
}