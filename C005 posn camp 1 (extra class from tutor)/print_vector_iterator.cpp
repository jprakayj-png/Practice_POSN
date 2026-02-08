#include <iostream>
#include <vector>
#include <iterator>

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
    for (vector<int>::iterator it = array.begin(); it != array.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (vector<int>::reverse_iterator rit = array.rbegin(); rit != array.rend(); ++rit)
    {
        cout << *rit << " ";
    }
    cout << endl;
    for (vector<int>::iterator it = array.begin(); it < array.end(); it += add)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}