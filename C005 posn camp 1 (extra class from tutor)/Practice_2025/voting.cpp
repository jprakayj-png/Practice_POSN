#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main()
{
    int N;

    if (!(cin >> N))
    {
        return 0;
    }

    map<int, int> vote_tally;

    for (int i = 0; i < N; ++i)
    {
        int key_a, vote_b;

        if (!(cin >> key_a >> vote_b))
        {
            break;
        }

        vote_tally[key_a] += vote_b;
    }

    for (const auto &pair : vote_tally)
    {
        if (pair.second != 0)
        {
            cout << pair.first << " : " << pair.second << endl;
        }
    }

    return 0;
}