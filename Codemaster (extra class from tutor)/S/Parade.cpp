#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    int n  ;
    cin >> n ;
    vector<int>v ;
    v.push_back(1) ;
    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        v.push_back(x) ;
    }
    int st , en ; 
    for (int i = 0 ; i < v.size() - 1 ; i++){
        st = v[i] ;
        en = v[i+1] ;
        if (abs(en - st) > 5){
            if (st < en){
                cout << st << " " << st + 1 << " " << st + 2 ;
                cout << " . . . " ;
                cout << en - 2 << " " << en - 1 << " " << en ;
            }
            else {
                cout << st << " " << st - 1 << " " << st - 2 ;
                cout << " . . . " ;
                cout << en + 2 << " " << en + 1 << " " << en ;
            }
        }
        else {
            if (st < en){
                for (int j = st ; j <= en ; j++){
                    cout << j << " " ;
                }
            }
            else {
                for (int j = st ; j >= en ; j--){
                    cout << j << " " ;
                }
            }
        }
        cout << "\n" ;
    }
    return 0 ;
}