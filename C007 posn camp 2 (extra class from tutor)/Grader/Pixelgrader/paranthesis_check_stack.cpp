#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stack<int> s1;
    bool ans = 1 ;
    string s;
    cin >> s;
    for (char c : s)
    {
        if (c == '(')
        {
            s1.push(c);
            continue ;
        }
        if (s1.empty()){
            ans = 0 ;
            continue ;
        }
        s1.pop() ;
    }
    if (!s1.empty()){
        ans = 0 ;
    }
    if (ans){
        cout << 1 << endl ;
    }
    else {
        cout << 0 << endl ;
    } 
    return 0 ;
}