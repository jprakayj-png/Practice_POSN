#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int a , b ;
    cin >> a >> b ;
    int sum  = a + b ;
    int diff = a - b ;
    int times = a * b ;
    int divide = a / b ;
    int r = a % b ;
    if (sum == 9 || diff == 9 || times == 9 || ((divide == 9) && (r == 0))){
        cout << "Nine" ;
    }
    else {
        cout << "Nein" ;
    } 
    return 0 ;
}