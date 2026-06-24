#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;

        int p1 = s.find('*');
        int p2 = s.find('=');

        string h = s.substr(0, p1);
        string m = s.substr(p1 + 1, p2 - p1 - 1);
        string sum = s.substr(p2 + 1);

        long long x = stoll(h);
        long long y = stoll(m);
        long long ch = stoll(sum);

        if (x * y == ch){
            cout << "True \n" ;
        }
        else {
            cout << "False \n" ;
        }
    }
    return 0;
}
