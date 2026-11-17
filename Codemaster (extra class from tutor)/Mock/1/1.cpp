#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> ans(n, 0);
    stack<int> st; // store indices

    for (int i = 0; i < n; i++) {
        while (!st.empty() && v[i] > v[st.top()]) {
            ans[st.top()] = i - st.top();
            st.pop();
        }
        st.push(i);
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}
