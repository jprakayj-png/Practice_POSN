#include <bits/stdc++.h>
using namespace std;

struct item
{
    int price;
    string name;
    item(int x, string s)
    {
        price = x;
        name = s;
    }
    bool operator<(const item &o) const
    {
        if (price == o.price)
        {
            return name < o.name;
        }
        else
        {
            return price > o.price;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    priority_queue<item> pq;
    pq.push(item(4, "Oreo"));
    pq.push(item(2, "KitKat"));
    pq.push(item(4, "Pocky"));
    pq.push(item(1, "Farmhouse"));
    pq.push(item(5, "Wayfer"));
    pq.push(item(3, "Twix"));
    while (!pq.empty())
    {
        item top = pq.top();
        cout << "Name : " << top.name << " " << "Price : " << top.price << "\n";
        pq.pop();
    }
    return 0;
}