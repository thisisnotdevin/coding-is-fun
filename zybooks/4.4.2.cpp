// First, read in an input value for variable numIn. Then, read numIn integers from input and output each on the same line wrapped in angle brackets. End with a newline.

// Ex: If the input is 2 60 -55, the output is:

// <60><-55>

// #include <iostream>
// using namespace std;

// int main() {
//    int numIn;

//    cin >> numIn; // Gets number of values in list
//    int currValue;

//    for (int i = 0; i < numIn; ++i) {
//           cin >> currValue; // Gets next value in list
//           cout << "<" << currValue<<">";
//    }
//    cout << endl;

//    return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// First, read in an input value for variable inCount. Then, read inCount integers from input and output each on the same line with the character " * " between each value. End with a newline.

// Note: " * " should not be at the beginning or end of the output.

// Ex: If the input is 4 -35 -90 -25 -5, the output is:

// -35 * -90 * -25 * -5

#include <iostream>
using namespace std;

int main() {
   int inCount;
   int numValues;
 cin >> numValues; // Gets number of values in list

   int currValue;

   for (int i = 0; i < numValues; ++i)
    {
        if (i != numValues-1)
        {
            cin >> currValue;
            cout << currValue << " * ";
        }
        if(i == numValues-1){
            cin >> currValue;
            cout << currValue;
        }
    }
   cout << endl;

   return 0;
}