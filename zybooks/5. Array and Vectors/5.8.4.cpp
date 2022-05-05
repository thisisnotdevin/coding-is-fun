#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int maxVal;
    const int NUM_POINTS = 4;
    vector<int> dataPoints(NUM_POINTS);
    unsigned int i;

    cin >> maxVal;

    for (i = 0; i < dataPoints.size(); ++i)
    {
        cin >> dataPoints.at(i);
    }

    for (i = 0; i < NUM_POINTS; ++i)
    {
        if (dataPoints[i] > maxVal)
        {
            dataPoints[i] = dataPoints[i] - 4;
        }
        else
        {
            dataPoints[i] = dataPoints[i];
        }
    }

    for (i = 0; i < dataPoints.size(); ++i)
    {
        cout << dataPoints.at(i) << " ";
    }
    cout << endl;

    return 0;
}