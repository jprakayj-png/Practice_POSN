#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int age , price ;
    cin >> age >> price ;
    if (age < 6){
        cout << 0 << "\n" ;
    }
    else if (age <= 12){
        cout << price / 2 << "\n" ;
    }
    else {
        cout << price << "\n" ;
    }
    return 0 ;
}