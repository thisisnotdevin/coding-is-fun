// Given numRows and numColumns, print a list of all seats in a theater. Rows are numbered, columns lettered, as in 1A or 3E. Print a space after each seat, including after the last. Ex: numRows = 2 and numColumns = 3 prints:
// 1A 1B 1C 2A 2B 2C 
#include <iostream>
using namespace std;

int main() {
   int numRows;
   int numColumns;
   int currentRow;
   int currentColumn;
   char currentColumnLetter;

   cin >> numRows;
   cin >> numColumns;
   
    for(int i = 1; i <= numRows; i++){
      currentColumnLetter = 'A';
      for(int j = 0; j < numColumns; j++){
       cout  << i << currentColumnLetter <<" ";
       currentColumnLetter = currentColumnLetter+1;
      }
      
      }

   cout << endl;

   return 0;
}