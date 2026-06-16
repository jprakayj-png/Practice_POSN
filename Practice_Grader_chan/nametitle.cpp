#include <bits/stdc++.h>
using namespace std ;

void show(string name , bool g , int n , bool m) ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    bool gender , marry ;
    int age ;
    getline(cin,s) ;
    cin >> gender ;
    cin >> age ;
    cin >> marry ;
    show(s , gender , age, marry) ; 
    return 0 ;
}

void show(string name , bool g , int n , bool m){
    if (g == 0){
        if (n <= 15){
            cout << "Miss " << name << "\n" ;
        }
        else {
            if (m == 0){
                cout << "Miss " << name << "\n" ;
            }
            else {
                cout << "Mrs. " << name << "\n" ;
            }
        }
    }
    else {
        if (n <= 15){
            cout << "Master " << name << "\n" ;
        }
        else {
            cout << "Mr. " << name << "\n" ;
        }
    }
    return ;
}