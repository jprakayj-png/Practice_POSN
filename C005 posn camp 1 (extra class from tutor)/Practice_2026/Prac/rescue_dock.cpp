#include <bits/stdc++.h>
using namespace std ;

struct VIP {
    int critical ;
    int arrival ;
    int id ;
};

struct Compare {
    bool operator()(const VIP &a , const VIP &b){
        if (a.critical == b.critical){
            return a.arrival > b.arrival ;
        }
        return a.critical < b.critical ;
    }
};

queue<int>q ;
priority_queue<VIP , vector<VIP> , Compare> vip_q ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , arrival_count = 0 ;
    cin >> n ;
    while(n--){
        string status ;
        cin >> status ;
        if (status == "NORMAL"){
            int id ;
            cin >> id ;
            q.push(id) ;
        }
        else if (status == "VIP"){
            int d , id ;
            cin >> d >> id ;
            vip_q.push({d,arrival_count++,id}) ;
        }
        else if (status == "CALL"){
            if (!vip_q.empty()){
                cout << vip_q.top().id << "\n" ;
                vip_q.pop() ;
            }
            else if (!q.empty()){
                cout << q.front() << "\n" ;
                q.pop() ;
            }
            else {
                cout << "EMPTY\n" ;
            }
        }
    }
    return 0 ;
}