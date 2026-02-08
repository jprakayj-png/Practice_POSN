#include <bits/stdc++.h>
using namespace std;

int Nc, Ns, x, r;
char op;
queue<int> room;
vector<queue<int>> student;
bool isRoominLine[11];                // 0: room is not queue, 1 room is in queue
vector<vector<int>> student_in_class; // advance : map

int find_room(int id)
{
    for (size_t i = 1; i <= Nc; i++)
    {
        for (auto x : student_in_class[i])
        {
            if (x == id)
            {
                return i;
            }
        }
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> Nc >> Ns;
    student_in_class.resize(Nc + 1);
    student.resize(Nc + 1);
    for (int i = 0; i < Ns; i++)
    {
        cin >> r >> x;
        student_in_class[r].push_back(x);
    }
    while (true)
    {
        cin >> op;
        if (op == 'X')
            break;
        if (op == 'E')
        {
            cin >> x;
            r = find_room(x);
            if (isRoominLine[r])
            {
                student[r].push(x);
            }
            else
            {
                room.push(r);
                student[r].push(x);
                isRoominLine[r] = r;
            }
        }
        if (op == 'D')
        {
            if (room.empty())
            {
                cout << "empty\n";
                continue;
            }
            r = room.front();
            cout << student[r].front() << "\n";
            student[r].pop();
            if (student[r].empty())
            {
                room.pop();
                isRoominLine[r] = 0;
            }
        }
    }
    cout << 0;
}
