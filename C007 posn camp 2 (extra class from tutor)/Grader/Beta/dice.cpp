#include <bits/stdc++.h>
using namespace std;
map<char, int> m;
void setup()
{
    m['t'] = 1;
    m['f'] = 2;
    m['l'] = 3;
    m['b'] = 5;
    m['r'] = 4;
    m['u'] = 6;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    int N;
    cin >> N;
    while (N--)
    {
        string ss;
        cin >> ss;
        setup();
        for (auto s : ss)
        {
            int old_t = m['t'], old_f = m['f'], old_l = m['l'], old_b = m['b'], old_r = m['r'], old_u = m['u'];
            if (s == 'F')
            {
                m['t'] = old_b;
                m['f'] = old_t;
                m['b'] = old_u;
                m['u'] = old_f;
            }
            if (s == 'B')
            {
                m['t'] = old_f;
                m['f'] = old_u;
                m['b'] = old_t;
                m['u'] = old_b;
            }
            if (s == 'L')
            {
                m['t'] = old_r;
                m['l'] = old_t;
                m['r'] = old_u;
                m['u'] = old_l;
            }
            if (s == 'R')
            {
                m['t'] = old_l;
                m['l'] = old_u;
                m['r'] = old_t;
                m['u'] = old_r;
            }
            if (s == 'C')
            {
                m['f'] = old_r;
                m['l'] = old_f;
                m['b'] = old_l;
                m['r'] = old_b;
            }
            if (s == 'D')
            {
                m['f'] = old_l;
                m['l'] = old_b;
                m['b'] = old_r;
                m['r'] = old_f;
            }
        }
        cout << m['f'] << " ";
    }
}