#include <bits/stdc++.h>
using namespace std ;

// Global var
int c = 1 ;
vector<int>v ; // index char
bool use[4] ; // A B C D
string s = "ABCD" ;
void show() ;

int main() {
    ios_base::sync_with_stdio(false) ;
    cin.tie(nullptr) ;
    show() ;
}

void show() {

    if (v.size() == 4) {
        cout << c << " : " ;
        for (auto d : v){
            cout << s[d] ;
        }
        cout << endl ;
        c++ ;
        return ;
    }

    for (int i = 0 ; i < 4 ; i++){
        if (!use[i]){
            use[i] = 1 ;
            v.push_back(i) ;
            show() ;
            use[i] = 0 ;
            v.pop_back() ;
        }
    }
}