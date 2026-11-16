#include <bits/stdc++.h>
using namespace std ;

bool isPalindrome(string s){
    int mid = s.length() / 2 ;
    for (int i = 0 ; i < mid ; i++){
        if (s[i] != s[s.length()-1-i]){
            return 0 ;
        }
    }
    return 1 ;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    string s1 , s2 ;
    
    cin >> s ;
    for (int i = 1 ; i < s.length() ; i++){
        if (s[i] == s[0]){
            s1 = s.substr(0,i+1) ;
            s2 = s.substr(i+1) ;
            if (!s1.empty() && !s2.empty() && isPalindrome(s1) && isPalindrome(s2)){
                cout << "YES" ;
                return 0 ;
            }
            
        }
    }
    cout << "NO" ;
    return 0 ;
}