#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;

    unordered_map<int,int>ump ;
    ump[0] = -1 ;
    int cur_sum = 0 ;
    int mx = 0 ;

    for (int i = 0 ; i < s.length() ; i++){
        if (s[i] == 'U'){
            cur_sum += 1 ;
        }
        else if (s[i] == 'D'){
            cur_sum -= 1 ;
        }

        if (ump.find(cur_sum) != ump.end()){
            mx = max(mx , i - ump[cur_sum]) ;
        }
        else {
            ump[cur_sum] = i ;
        }
    }
    cout << mx << "\n" ;
    return 0 ;
}