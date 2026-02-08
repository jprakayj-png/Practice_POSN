#include <bits/stdc++.h>
using namespace std ;

int main() {
    string bi ;
    cin >> bi ;
    int n = bi.length() ;
    int num = 0 ;
    for (int i = 0 ; i < n ; i++){
        if (bi[i] == '1'){
            num += pow(2,n-1-i) ;
        }
    }
    cout << num << endl ;
    return 0 ;
}