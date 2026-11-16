#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    // ------------
    vector<vector<string>>dice(7,vector<string>(3)) ;
    dice[0] = { "   " , "   " , "___"} ;
    dice[1] = { "   " , " * " , "   "} ;
    dice[2] = { " * " , "   " , " * "} ;
    dice[3] = { "*  " , " * " , "  *"} ;
    dice[4] = { "* *" , "   " , "* *"} ;
    dice[5] = { "* *" , " * " , "* *"} ;
    dice[6] = { "* *" , "* *" , "* *"} ;
    // ----------

    vector<vector<string>>pattern ;
    string s ;
    cin >> s ;
    // push pattern
    for (auto x : s){
        int dff = x - '0' ;
        if (dff < 0 || dff > 6){
            dff = 0 ;
        }
        pattern.push_back(dice[dff]) ;
    }
    // show pattern
    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < (int)pattern.size() ; j++){
            cout << pattern[j][i] ;
        }
        cout << "\n" ;
    }
    return 0 ;
}