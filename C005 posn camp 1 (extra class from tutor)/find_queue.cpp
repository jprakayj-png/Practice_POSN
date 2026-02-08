#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int n, a, b;

    cin >> n >> a >> b;

    queue<int> input_queue;

    for (int i = 0; i < n; ++i)
    {
        int value;
        if (cin >> value)
        {
            input_queue.push(value);
        }
        else
        {
            break;
        }
    }
    vector<int> elements;
    while (!input_queue.empty())
    {
        elements.push_back(input_queue.front());
        input_queue.pop();
    }
    for (int i = a - 1; i < b; ++i)
    {
        if (i >= 0 && i < elements.size())
        {
            cout << elements[i];
            if (i < b - 1)
            {
                cout << " ";
            }
        }
    }

    cout << "\n";

    return 0;
}