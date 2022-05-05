#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int NUM_POINTS = 4;
    vector<int> oldData(NUM_POINTS);
    vector<int> newData(NUM_POINTS);
    unsigned int i;

    for (i = 0; i < oldData.size(); ++i)
    {
        cin >> oldData.at(i);
    }

    for (i = 0; i < newData.size(); ++i)
    {
        cin >> newData.at(i);
    }

    oldData.resize(newData.size());
    int matches = 0;

    for (i = 0; i <= newData.size() - 1; i++)
    {
        if (newData.at(i) == oldData.at(i))
        {
            matches++;
        }
        else
        {
            oldData.at(i) = newData.at(i);
        }
    }

    if (matches == newData.size())
    {
        cout << "Data matches!" << endl;
    }

    for (i = 0; i < oldData.size(); ++i)
    {
        cout << oldData.at(i) << " ";
    }
    cout << endl;

    return 0;
}