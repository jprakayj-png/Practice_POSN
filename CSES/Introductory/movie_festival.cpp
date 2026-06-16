#include <bits/stdc++.h>
using namespace std;

struct Movie
{
    int start, end;
    Movie(int s, int e)
    {
        start = s;
        end = e;
    }
    bool operator<(const Movie &other) const
    {
        if (end == other.end)
        {
            return start > other.start;
        }
        return end > other.end;
    }
};

int n, ans = 0;
priority_queue<Movie> pq;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    while (n--)
    {
        int s, e;
        cin >> s >> e;
        pq.push(Movie(s, e));
    }
    while (!pq.empty())
    {
        Movie current = pq.top();
        pq.pop();
        ans++;
        while (!pq.empty() && pq.top().start < current.end)
        {
            pq.pop();
        }
    }
    cout << ans << "\n";
    return 0;
}