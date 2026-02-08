#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, add, data;
    vector<int> array;
    cin >> n >> add;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        array.push_back(data);
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[array.size() - 1 - i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i += add)
    {
        cout << array[i] << " ";
    }
    return 0;
}