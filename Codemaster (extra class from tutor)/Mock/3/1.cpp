#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<string> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    } 

    vector<vector<string>> ch(m, vector<string>(3));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < 3; j++){
            cin >> ch[i][j];       
        }
    }

    bool changed = true;
    while (changed) {
        changed = false;
        for (int i = 0; i < (int)v.size() - 1; i++) {
            for (int r = 0; r < (int)ch.size(); r++) {
                if (v[i] == ch[r][0] && v[i+1] == ch[r][1]) {
                    v[i] = ch[r][2];                  // replace
                    v.erase(v.begin() + (i+1));       // remove next
                    changed = true;
                    break; // restart scanning
                }
            }
            if (changed){
                break;
            } 
        }
    }

    for (auto &s : v){
        cout << s << " " ;
    } 
    cout << "\n";
    return 0;
}
