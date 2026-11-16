#include <bits/stdc++.h>
using namespace std ;

int n ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    int q1 = 0 , q2 = 0 , q3 = 0 , q4 = 0 , axis = 0 ;
    while(n--){
        int x , y ;
        cin >> x >> y ;
        if (x == 0 || y == 0){
            axis++ ;
        }
        else if (x > 0 && y > 0){
            q1++ ;
        }
        else if (x < 0 && y > 0){
            q2++ ;
        }
        else if (x < 0 && y < 0){
            q3++ ;
        }
        else if (x > 0 && y < 0){
            q4++ ;
        }
    }
    cout << q1 << " " << q2 << " " << q3 << " " << q4 << " " << axis << "\n" ;
    return 0 ;
}