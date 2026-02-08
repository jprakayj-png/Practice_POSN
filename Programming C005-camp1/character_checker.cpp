#include <iostream>
using namespace std;

int main()
{
    string s;
    bool upper = false;
    bool lower = false;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper = true;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            lower = true;
        }
    }
    if (upper && lower)
    {
        cout << "Mix" << endl;
    }
    else if (upper)
    {
        cout << "All Capital Letter" << endl;
    }
    else
    {
        cout << "All Small Letter" << endl;
    }
    return 0;
}