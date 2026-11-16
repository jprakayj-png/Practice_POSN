#include <bits/stdc++.h>
using namespace std ;

vector<pair<int,int>>plot ;

int count(int x , int y) ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    int x = 0 , y = 0 ;
    while(n--){
        cin >> x >> y ;
        plot.push_back({x,y}) ;
    }
    int m ;
    cin >> m ;
    while(m--){
        cin >> x >> y ;
        cout << count(x,y) << "\n" ;
    }
    return 0 ;
}

int count(int x , int y){
    int c = 0 ;
    for (auto p : plot){
        if (p.first == x && p.second == y){
            c++ ; 
        }
    }
    return c ;
}