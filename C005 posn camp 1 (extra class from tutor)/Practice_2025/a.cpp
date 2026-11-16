#include <bits/stdc++.h>
using namespace std ;

int main() {
  ios_base::sync_with_stdio(0) ;
  cin.tie(0) ;
  string s ;
  cin >> s ;
  for (int i = 0 ; i < s.size() ; i++){
    int diff = 0 ;
    char m ;
    if (s[i] - 'A' > 13){
      diff = 'Z' - s[i] ;
      m = char('A' + diff) ;
    }
    else {
      diff = s[i] - 'A' ;
      m = char('Z' - diff) ;
    }
    cout << m ;
  }
  return 0 ;
}