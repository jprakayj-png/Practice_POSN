#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    vector<vector<string>>v = {
        { "   " , "   " , "___" } , 
        { "   " , " * " , "   " } , 
        { " * " , "   " , " * " } ,
        { "*  " , " * " , "  *" } , 
        { "* *" , "   " , "* *" } , 
        { "* *" , " * " , "* *" } , 
        { "* *" , "* *" , "* *" } ,   
    };
    string p ;
    cin >> p ;
    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < 3 ; j++){
            int d = p[j] - '0' ;
            if (d >= 1 && d <= 6){
                cout << v[d][i] ;
            }
            else {
                cout << v[0][i] ;
            }
        }
        cout << "\n" ;
    }
    return 0 ;
}