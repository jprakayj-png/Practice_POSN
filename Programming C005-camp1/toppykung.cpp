#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, e = 0;
    bool c = false;
    cin >> n;
    vector<string> name(n);
    for (int i = 0; i < n; i++)
    {
        cin >> name[i];
        if (e >= 1)
        {
            for (int j = 0; j < e; j++)
            {
                if (name[i] == name[j])
                {
                    c = true;
                    break;
                }
            }
            if (c)
            {
                name[i].erase();
            }
            c = false;
        }
        e++;
    }
    sort(name.begin(), name.end());
    for (int i = 0; i < n; i++)
    {
        if (name[i] != "")
        {
            cout << name[i] << endl;
        }
    }
    return 0;
}