#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    getline(cin,s);
    long long sum = 0 ; 
    string k = "";
    for (int j = 0 ; j < s.length() ; j++){
        if (s[j] != '[' && s[j] != ']' && s[j] != ' ' && s[j] != ','){
            k += s[j] ;
        }
        else {
            if (k != ""){
                for (int i = 0 ; i < k.length() ; i++){
                    sum += (k[i] - '0') * pow(10,k.length()-1-i) ;
                }
                k = "";
            }
        }
    }
    if (k != ""){
        for (int i = 0 ; i < k.length() ; i++){
            sum += (k[i] - '0') * pow(10,k.length()-1-i) ;
        }
        k = "";
    }
    cout << sum << "\n" ;
    return 0 ;
}