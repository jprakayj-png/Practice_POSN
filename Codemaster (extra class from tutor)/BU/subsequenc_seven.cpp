#include <bits/stdc++.h>
using namespace std ;

vector<int>R(7,-1) ; 
vector<long long>Pf ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n ;
    cin >> n ;
    Pf.resize(n+1) ;
    Pf[0] = 0 ;
    long long best = 0 ;
    for (int i = 1 ; i <= n ; i++){
        long long x ;
        cin >> x ;
        Pf[i] = Pf[i-1] + x ;
        int r = Pf[i] % 7 ;
        if (R[r] == -1){
            R[r] = i ;
        }
        else {
           best = max(int(best) , i - R[r]) ;
        }
    }
    cout << best << "\n" ;
    return 0 ;
}