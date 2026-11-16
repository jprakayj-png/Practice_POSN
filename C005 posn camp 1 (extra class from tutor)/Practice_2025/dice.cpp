#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    vector<vector<string>>dice(6,vector<string>(3)) ;
    dice[0] = { "   " , " * " , "   "} ;
    dice[1] = { "   " , "* *" , "   "} ;
    dice[2] = { " * " , " * " , " * "} ;
    dice[3] = { "* *" , "   " , "* *"} ;
    dice[4] = { "* *" , " * " , "* *"} ;
    dice[5] = { "* *" , "* *" , "* *"} ;

    vector<vector<string>>pat ;
    string s ;
    cin >> s ;
    for (int i = 0 ; i < 3 ; i++){
        int dff = s[i] - '0' ;
        pat.push_back(dice[dff-1]) ;
    }
    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < (int)pat.size() ; j++){
            cout << pat[j][i] ;
            if (j < 2){
                cout << "|" ;
            }
            else {
                cout << " " ;
            }
        }
        cout << "\n" ;
    }
    return 0 ;
}