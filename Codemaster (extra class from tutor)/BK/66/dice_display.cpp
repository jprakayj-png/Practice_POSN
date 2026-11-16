#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    // ----------------------------

    vector<vector<string>>dice(7,vector<string>(3)) ;
    dice[0] = { "   ",
                "   ",
                "___" } ;
    dice[1] = { "   ",
                " * ",
                "   " } ;
    dice[2] = { " * ",
                "   ",
                " * " } ;
    dice[3] = { "*  ",
                " * ",
                "  *" } ;
    dice[4] = { "*  *",
                "   ",
                "*  *" } ;
    dice[5] = { "* *",
                " * ",
                "* *" } ;
    dice[6] = { "* *",
                "* *",
                "* *" } ;
    
    // ------------------------------            
    
    string s ;
    cin >> s ;
    vector<vector<string>>pattern ;
    for (auto x : s){
        int d = x - '0' ;
        if (d < 0 || d > 6){
            d = 0 ;
        }
        pattern.push_back(dice[d]) ;
    }
    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < (int)pattern.size() ; j++){
            cout << pattern[j][i] ;
        }
        cout << "\n" ;
    }
    return 0 ;
}