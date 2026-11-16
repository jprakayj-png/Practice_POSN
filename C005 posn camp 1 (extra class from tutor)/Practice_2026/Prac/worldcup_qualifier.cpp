#include <bits/stdc++.h>
using namespace std ;

int n , sum = 0 ;

int score(int x) ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    cout << score(1) << "\n" ;
    return 0 ;
}

int score(int x) {
    if (x > n){
        return sum ;
    }
    else {
        int w , g = 0 ;
        cin >> w ;
        if (w == 1){
            g = 3 ;
        }
        else if (w == 0){
            g = 1 ;
        }
        else if (w == -1){
            g = 0 ;
        }
        return sum = g + score(x+1) ;
    }
}