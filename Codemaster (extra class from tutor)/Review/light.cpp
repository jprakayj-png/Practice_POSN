#include <bits/stdc++.h>
using namespace std ;

int n , d ;
int A = 1 ;
vector<pair<int,int>>v ;

bool freq(int a) ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n >> d ;
    for (int i = 0 ; i < n ; i++){
        int p , r ;
        cin >> p >> r ;
        v.push_back({p,r}) ;
    }
    while(!freq(A)){
        A++ ;
    }

    cout << A << "\n" ;
    return 0 ;
}

bool freq(int a){
    vector<pair<int,int>>range ;
    for (auto n : v){
        int st = n.first - a * n.second ;
        int en = n.first + a * n.second ;
        range.push_back({st,en}) ;
    }
    sort(range.begin(),range.end()) ;
    int cover = 0 ;
    for (auto r : range){
        if (r.first <= cover){
            cover = max(cover,r.second) ;
            if (cover >= d){
                return 1 ;
            }
        }
    }
    return 0 ;
}