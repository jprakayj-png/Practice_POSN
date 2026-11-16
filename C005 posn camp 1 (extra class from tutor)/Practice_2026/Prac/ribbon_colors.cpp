#include <bits/stdc++.h>
using namespace std ;

vector<char>p ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n >> m ;
    for (int i = 0 ; i < n ; i++){
        char c ;
        cin >> c ;
        p.push_back(c) ; 
    }
    while(m--){
        int st , en ;
        cin >> st >> en ;
        int r = 0 , b = 0 , g = 0 ;
        for (int i = st ; i <= en ; i++){
            int l = (i-1) % n ;
            if (p[l] == 'R'){
                r++ ;
            }
            else if (p[l] == 'G'){
                g++ ;
            }
            else if (p[l] == 'B'){
                b++ ;
            }
        }
        cout << r << " " << g << " " << b << "\n" ;
    }
    return 0 ;
}