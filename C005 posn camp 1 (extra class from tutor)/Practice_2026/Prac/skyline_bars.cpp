#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;
vector<bool>use ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    use.resize(n,0) ;
    int mx = 0 ;
    for (int i = 0 ;i < n ; i++){
        int x ;
        cin >> x ;
        v.push_back(x) ;
        if (x > mx){
            mx = x ;
        }
    }
    for (int i = mx ; i >= 1 ; i--){
        for (int j = 0 ; j < v.size() ; j++){
            if (use[j]){
                cout << "# " ;
            }
            else if (i == v[j]){
                cout << "# " ;
                use[j] = 1 ;
            }
            else {
                cout << ". " ;
            }
        }
        cout << "\n" ;
    }
    for (int i = 0 ; i < 2 * n - 1 ; i++){
        cout << "=" ;
    }
    return 0 ;
}