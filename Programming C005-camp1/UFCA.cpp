#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct team
{
    string name = "";
    int points = 0;
    int diff_goal = 0;
    int goal_scored = 0;
    int goal_loose = 0;
};

// compare teams for sorting
bool compare(const team &a, const team &b)
{
    if (a.points != b.points)
        return a.points > b.points;
    else if (a.diff_goal != b.diff_goal)
        return a.diff_goal > b.diff_goal;
    else
        return a.goal_scored > b.goal_scored;
}

int main()
{
    team country[4];
    int result_match[4][4];

    // insert countries name
    for (int i = 0; i < 4; i++)
    {
        cin >> country[i].name;
    }

    // input result match
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> result_match[i][j];
            country[i].goal_scored += result_match[i][j]; // goal by country i
        }
    }

    // calculate score and diff goal
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                int goal_country1 = result_match[i][j]; // goal by country i vs country j
                int goal_country2 = result_match[j][i]; // goal by country j vs country i

                country[i].goal_loose += goal_country2; // goal can't save by country i

                if (i < j)
                {
                    if (goal_country1 > goal_country2)
                    {
                        country[i].points += 3;
                    }
                    else if (goal_country1 < goal_country2)
                    {
                        country[j].points += 3;
                    }
                    else
                    {
                        country[i].points++;
                        country[j].points++;
                    }
                }
            }
        }

        country[i].diff_goal =
            country[i].goal_scored - country[i].goal_loose; // calculate diff goal
    }

    sort(country, country + 4, compare);

    for (int i = 0; i < 4; i++)
    {
        cout << country[i].name << " " << country[i].points << endl;
    }

    return 0;
}
