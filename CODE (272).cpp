#include<bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int number_of_front_sprockets;
        int number_of_rear_sprockets;
        vector<int> front_sprockets;
        vector<int> rear_sprockets;
        cin >> number_of_front_sprockets;
        if (number_of_front_sprockets == 0)
        {
            break;
        }

        cin >> number_of_rear_sprockets;
        front_sprockets.resize(number_of_front_sprockets);
        rear_sprockets.resize(number_of_rear_sprockets);
        for (int f = 0; f < number_of_front_sprockets; f++)
        {
            int size;
            cin >> size;
            front_sprockets[f] = size;
        }
        for (int r = 0; r < number_of_rear_sprockets; r++)
        {
            int size;
            cin >> size;
            rear_sprockets[r] = size;
        }
        vector<double> drive_ratios;

        for (int f = 0; f < number_of_front_sprockets; f++)
        {
            for (int r = 0; r < number_of_rear_sprockets; r++)
            {
                double drive_ratio = ((double)rear_sprockets[r]) / front_sprockets[f];
                drive_ratios.push_back(drive_ratio);
            }
        }
        sort(drive_ratios.begin(), drive_ratios.end());

        bool first = true;
        double last;
        double maximum_spread = -1;
        for (vector<double>::iterator dri = drive_ratios.begin(); dri != drive_ratios.end(); dri++)
        {

            if (first)
            {
                first = false;
            }
            else
            {
                double spread = *dri / last;
                maximum_spread = max(spread, maximum_spread);
            }
            last = *dri;
        }
        cout << setprecision(2) << fixed << maximum_spread << endl;
    }
    return 0;
}
