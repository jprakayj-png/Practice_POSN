#include <bits/stdc++.h>
using namespace std ;

vector<vector<long long>>v ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long r , c , l ;
    string s ;
    cin >> r >> c >> l ;
    cin >> s ;
    v.resize(r+1,vector<long long>(c+1)) ;
    for (long long i = 1 ; i <= r ; i++){
        for (long long j = 1 ; j <= c ; j++){
            cin >> v[i][j] ;
        }
    }
    long long mx = 0 ;
    for (long long i = 1 ; i <= r ; i++){
        for (long long j = 1 ; j <= c ; j++){
            long long y = i , x = j ;
            long long total = v[y][x] ;
            for (long long ch = 0 ; ch < l ; ch++){
                if (s[ch] == 'U'){
                    if (y-1 < 1){
                        break ;
                    }
                    else {
                        y-- ;
                    }
                }
                else if (s[ch] == 'D'){
                    if (y+1 > r){
                        break ;
                    }
                    else {
                        y++ ;
                    }
                }
                else if (s[ch] == 'R'){
                    if (x+1 > c){
                        break ;
                    }
                    else {
                        x++ ;
                    }
                }
                else {
                    if (x-1 < 1){
                        break ;
                    }
                    else {
                        x-- ;
                    }
                }
                total += v[y][x] ;
            }
            mx = max(mx,total) ;
        }
    }
    cout << mx << "\n" ;
    return 0 ;
}