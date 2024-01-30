#include<bits/stdc++.h>
using namespace std;

int main()
{

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);


    int number_of_test_cases;
    cin >> number_of_test_cases;
    for (int c = 0; c < number_of_test_cases; c++)
    {
        int m;
        cin >> m;
        vector<pair<int, int> > intervals;
        while (true)
        {
            int from;
            int to;
            cin >> from;
            cin >> to;
            if (from == 0 && to == 0)
            {
                break;
            }
            intervals.push_back(pair<int, int>(from, to));
        }

        // Start greedy algorithm
        int uncovered_index = 0;

        sort(intervals.begin(), intervals.end());

        // Constructing max cover
        vector<pair<int, int> > max_cover;
        int required_min = 0;
        bool current_best_valid = false;
        pair<int, int> current_best;
        bool feasible = true;
        for (vector<pair<int, int> >::iterator ii = intervals.begin(); ii != intervals.end(); ii++)
        {
            pair<int, int> current = *ii;
            if (current.first <= required_min)
            {
                if (current.second > current_best.second)
                {
                    current_best.first = current.first;
                    current_best.second = current.second;
                    current_best_valid = true;
                }
            }
            else
            {
                if (current_best_valid)
                {
                    // Current best is the actual best - nothing beyond this will meet the requirement
                    max_cover.push_back(current_best);

                    // Now we require more!
                    required_min = current_best.second;
                    current_best_valid = false;

                    if (required_min >= m)
                    {
                        // I have already covered M, we can stop now
                        break;
                    }
                }

                if (current.first <= required_min)
                {
                    if (current.second > current_best.second)
                    {
                        current_best.first = current.first;
                        current_best.second = current.second;
                        current_best_valid = true;
                    }
                }
                else
                {
                    feasible = false;
                    break;
                }
            }
        }
        if (current_best_valid)
        {
            max_cover.push_back(current_best);
        }

        if (feasible)
        {
            cout << max_cover.size() << endl;
            for (vector<pair<int, int> >::iterator ii = max_cover.begin(); ii != max_cover.end(); ii++)
            {
                cout << ii->first << " " << ii->second << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }

        if (c != number_of_test_cases - 1)
        {
            cout << endl;
        }
    }
    return 0;
}
