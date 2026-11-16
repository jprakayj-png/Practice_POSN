#include <bits/stdc++.h>
using namespace std ;

map<char,bool>use ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string aa , bb ;
    cin >> aa ;
    cin >> bb ;
    for (int i = 0 ; i < aa.length() ; i++){
        for (int j = 0 ; j < bb.length() ; j++){
            if (aa[i] == bb[j] && !use[bb[j]]){
                cout << bb[j] << " " ;
                use[bb[j]] = 1 ;
            }
        }
    }
    return 0 ;
}