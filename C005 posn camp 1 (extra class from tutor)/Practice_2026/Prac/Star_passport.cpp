#include <bits/stdc++.h>
using namespace std ;

map<string,string>id ;

void check(string c) ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    while(n--){
        string pss , name ;
        cin >> pss >> name ;
        id[pss] = name ;
    }
    int m ;
    cin >> m ;
    while(m--){
        string ch ;
        cin >> ch ;
        check(ch) ;
    }
    return 0 ;
}

void check(string c){
    for (auto p : id){
        if (p.first == c){
            cout << p.second << "\n" ;
            return ;
        }
    }
    cout << "UNKNOWN\n" ;
    return ;
}