#include <bits/stdc++.h>
using namespace std ;

queue<int>q ;
int n ;

int main() {
    cin >> n ;
    while(n--){
        string s ;
        cin >> s ;
        if (s == "JOIN"){
            int id ;
            cin >> id ;
            q.push(id) ;
        }
        else if (s == "FRONT"){
            if (q.empty()){
                cout << "EMPTY\n" ; 
            }
            else {
                cout << q.front() << "\n" ;
            }
        }
        else if (s == "SERVE"){
            if (q.empty()){
                cout << "EMPTY\n" ;
            }
            else {
                cout << q.front() << "\n" ;
                q.pop() ;
            }
        }
        else if (s == "COUNT"){
            cout << q.size() << "\n" ;
        }
    }
    return 0 ;
}