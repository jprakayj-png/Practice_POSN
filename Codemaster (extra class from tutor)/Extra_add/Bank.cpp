#include <bits/stdc++.h>
using namespace std ;

int n ;
int a[105] ;

void recursive(int now , int b) ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    recursive(1,0) ;
}

void recursive(int now , int b) {

    if (now == n+1){
        for (int i = 1 ; i <= n ; i++){
            cout << a[i] ;
        }
        cout << "\n" ;
        return ;
    }

    a[now] = 0 ;
    recursive( now+1 , 0) ;

    if (b == 0){
        a[now] = 1 ;
        recursive( now + 1 , 1) ;
    }
}