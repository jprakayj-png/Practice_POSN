#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string list;
    getline(cin, list);
    int sum = 0;
    string ln;
    for (int i = 1; i < list.length() - 1; i++)
    {
        if (list[i] != ',' && list[i] != ' ')
        {
            ln += list[i];
        }
        else
        {
            int p = ln.length() - 1;
            for (int j = 0; j < ln.length(); j++)
            {
                sum += (ln[j] - '0') * (pow(10, p));
                p--;
            }
            ln = "";
        }
    }
    int p = ln.length() - 1;
    for (int j = 0; j < ln.length(); j++)
    {
        sum += (ln[j] - '0') * (pow(10, p));
        p--;
    }
    cout << sum;
    return 0;
}