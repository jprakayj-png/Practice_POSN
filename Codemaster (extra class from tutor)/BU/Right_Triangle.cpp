#include <bits/stdc++.h>
using namespace std ;

vector<pair<int,int>>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    for (int i = 0 ; i < 3 ; i++){
        int x , y ;
        cin >> x >> y ;
        v.push_back({x,y}) ;
    }
    float a = sqrt((v[1].first - v[0].first) * (v[1].first - v[0].first) + (v[1].second - v[0].second) * (v[1].second - v[0].second)) ;
    float b = sqrt((v[2].first - v[0].first) * (v[2].first - v[0].first) + (v[2].second - v[0].second) * (v[2].second - v[0].second)) ;
    float c = sqrt((v[2].first - v[1].first) * (v[2].first - v[1].first) + (v[2].second - v[1].second) * (v[2].second - v[1].second)) ;

    if (((a*a) + (b*b) == (c*c)) || ((a*a) + (c*c) == (b*b)) || ((b*b) + (c*c) == (a*a))){
        cout << "Yes" ;
    }
    else {
        cout << "No" ;
    }
    return 0 ;
}