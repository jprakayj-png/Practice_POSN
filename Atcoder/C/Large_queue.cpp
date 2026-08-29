#include <bits/stdc++.h>
using namespace std;

deque<pair<long long,long long>> q;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    while(n--){
        long long o;
        cin >> o;
        if (o == 1){
            long long c, d;
            cin >> c >> d;
            q.push_back({d, c}); // store value and count
        }
        else if (o == 2){
            long long r;
            cin >> r;
            long long sum = 0;
            while(r > 0 && !q.empty()){
                auto &front = q.front();
                long long take = min(r, front.second);
                sum += take * front.first;
                front.second -= take;
                r -= take;
                if (front.second == 0) q.pop_front();
            }
            cout << sum << "\n";
        }
    }
    return 0;
}
