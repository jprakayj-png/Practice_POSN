#include <iostream>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    for (int i = 0; i < text.size(); i++)
    {
        cout << text[i];
        if (text[i] == 'a' or text[i] == 'e' or text[i] == 'i' or text[i] == 'o' or text[i] == 'u')
        {
            i += 2;
            continue;
        }
    }

    return 0;
}