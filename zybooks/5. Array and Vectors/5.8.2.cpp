#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int SCORES_SIZE = 4;
    vector<int> oldScores(SCORES_SIZE);
    vector<int> newScores(SCORES_SIZE);
    unsigned int i;

    for (i = 0; i < oldScores.size(); ++i)
    {
        cin >> oldScores.at(i);
    }

    for (i = 0; i <= oldScores.size() - 1; i++)
    {
        if (i > 0)
        {
            newScores.at(i - 1) = oldScores.at(i);
        }
        else
        {
            newScores.at(newScores.size() - 1) = oldScores.at(i);
        }
    }

    for (i = 0; i < newScores.size(); ++i)
    {
        cout << newScores.at(i) << " ";
    }
    cout << endl;

    return 0;
}