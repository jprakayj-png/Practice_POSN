#include <iostream>
using namespace std;

int main()
{
    int ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0, ans5 = 0;
    int data = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> data;
            if (i == 0)
            {
                ans1 += data;
            }
            else if (i == 1)
            {
                ans2 += data;
            }
            else if (i == 2)
            {
                ans3 += data;
            }
            else if (i == 3)
            {
                ans4 += data;
            }
            else if (i == 4)
            {
                ans5 += data;
            }
        }
    }
    if (ans1 >= ans2 && ans1 >= ans3 && ans1 >= ans4 && ans1 >= ans5)
    {
        cout << 1 << " " << ans1 << endl;
    }
    else if (ans2 >= ans1 && ans2 >= ans3 && ans2 >= ans4 && ans2 >= ans5)
    {
        cout << 2 << " " << ans2 << endl;
    }
    else if (ans3 >= ans1 && ans3 >= ans2 && ans3 >= ans4 && ans3 >= ans5)
    {
        cout << 3 << " " << ans3 << endl;
    }
    else if (ans4 >= ans1 && ans4 >= ans2 && ans4 >= ans3 && ans4 >= ans5)
    {
        cout << 4 << " " << ans4 << endl;
    }
    else if (ans5 >= ans1 && ans5 >= ans2 && ans5 >= ans3 && ans5 >= ans4)
    {
        cout << 5 << " " << ans5 << endl;
    }
}