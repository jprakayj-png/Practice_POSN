#include <bits/stdc++.h>
using namespace std ;

long long A = 1 ;
long long n , d ;
vector<pair<long long , long long>>v ;

bool light(int a){
    vector<pair<long long,long long>>range ;
    for (auto r : v){
        int st = r.first - a * r.second ;
        int en = r.first + a * r.second ;
        range.push_back({st,en}) ;
    }
    sort(range.begin(),range.end()) ;
    long long cover = 0 ;
    for (auto r : range){
        if (r.first <= cover){
            cover = max(r.second,cover) ;
            if (cover >= d){
                return 1 ;
            }
        }
    }
    return 0 ;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n >> d ;
    for (int i = 0 ; i < n ; i++){
        long long p , r ;
        cin >> p >> r ;
        v.push_back({p,r}) ;
    }
    while(!light(A)){
        A++ ;
    }
    cout << A << "\n" ;
    return 0 ;
}