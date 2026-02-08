#include <iostream>
using namespace std;
int main()
{
    int hb = 0, hw = 0, wb, ww;
    bool play = true;
    cin >> hb >> hw;
    while (play)
    {
        if (hb == 0 || hw == 0)
        {
            play = false;
            break;
        }
        cin >> wb >> ww;
        if (wb == -1 && ww == -1)
        {
            play = false;
            break;
        }
        else
        {
            if (wb == 0)
            {
                if (ww == 2)
                {
                    hw--;
                }
                else if (ww == 5)
                {
                    hb--;
                }
            }
            else if (wb == 2)
            {
                if (ww == 0)
                {
                    hb--;
                }
                else if (ww == 5)
                {
                    hw--;
                }
            }
            else if (wb == 5)
            {
                if (ww == 0)
                {
                    hw--;
                }
                else if (ww == 2)
                {
                    hb--;
                }
            }
        }
    }
    if (hb == hw)
    {
        cout << "draw" << " " << hw;
    }
    else
    {
        if (hb > hw)
        {
            cout << "black" << " " << hb;
        }
        else
        {
            cout << "white" << " " << hw;
        }
    }
    return 0;
}