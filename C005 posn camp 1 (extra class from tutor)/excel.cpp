#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long sum = 0;
    string s;
    cin >> s;
    if (s.length() == 1)
    {
        sum = s[0] - 'A' + 1;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            sum += (s[i] - 'A' + 1) * pow(26, s.length() - i - 1);
        }
    }
    cout << sum << endl;
    return 0;
}