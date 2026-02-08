#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    for (int a = 1; a <= 100; a++)
    {
        if (A % a == 0)
        {
            int c = A / a;
            for (int b = -10000; b <= 10000; b++)
            {
                if ((B - (b * c)) % a == 0)
                {
                    int d = (B - (b * c)) / a;
                    if (C == b * d)
                    {
                        cout << a << " " << b << " " << c << " " << d;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No Solution";
    return 0;
}