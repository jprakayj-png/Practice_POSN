#include <bits/stdc++.h>
using namespace std ;

stack<string>order ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    int x = 0 , y = 0 ;
    while(n--){
        string o ;
        cin >> o ;
        if (o == "UNDO" && !order.empty()){
            if (order.top() == "U"){
                y-- ;
            }
            else if (order.top() == "D"){
                y++ ;
            }
            else if (order.top() == "R"){
                x-- ;
            }
            else if (order.top() == "L"){
                x++ ;
            }
            order.pop() ;
        }
        else {
            if (o == "U"){
                y++ ;
            }
            else if (o == "D"){
                y-- ;
            }
            else if (o == "R"){
                x++ ;
            }
            else if (o == "L"){
                x-- ;
            }
            order.push(o) ;
        }
    }
    cout << x << " " << y << "\n" ;
    return 0 ;
}