#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length();)
    {
        int count = 1;

        // count how many same letters in a row
        while (i + count < s.length() && s[i] == s[i + count])
            count++;

        // if 3 or more, keep only 2 of them
        if (count >= 3)
            cout << s[i];
        // otherwise, print as they are
        else
            for (int k = 0; k < count; k++)
                cout << s[i];

        i += count; // move to next different character
    }

    return 0;
}
