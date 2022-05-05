// Read integers from input and store each integer into a vector until -1 is read. Do not store -1 into the vector. Then, output the last n values in the vector, each on a new line, where n is specified by the last value in the vector. Note that n will always be less than the number of values in the vector.

// Ex: If the input is -42 32 86 3 -1, the output is:

// 32
// 86
// 3

//1
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int number;
    vector<int> numbersList;

    do
    {
        cin >> number;

        numbersList.push_back(number);

    } while (number != -1);
    numbersList.pop_back();

    for (int i = 1; i < numbersList.size() - 1; i++)
    {
        cout << numbersList.at(i) << endl;
    }
    return 0;
}


//2
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int number;
    vector<int> numbersList;

    do
    {
        cin >> number;

        numbersList.push_back(number);

    } while (number != 0);
    numbersList.pop_back();

    cout << numbersList.back() << endl;
    numbersList.pop_back();
    cout << numbersList.back() << endl;

    return 0;
}


//3
#include <iostream>
#include <vector>
using namespace std;

int main() {

   int number;
    vector<int> numbersList;

    do
    {
        cin >> number;

        numbersList.push_back(number);

    } while (number != -1);
    numbersList.pop_back();
    
    if(numbersList.back() > 0){
        for (int i = 0; i < numbersList.size(); i++)
         {
           if(numbersList.at(i) > 0){
              cout << numbersList.at(i) << endl;
              }
         }
       }
       if(numbersList.back() < 0){
        for (int i = 0; i < numbersList.size() ; i++)
         {
           if(numbersList.at(i) < 0){
              cout << numbersList.at(i) << endl;
              }
         }
       }
   return 0;
}