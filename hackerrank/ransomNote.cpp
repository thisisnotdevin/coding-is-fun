
// CPP program to demonstrate working of string
// find to search a string
#include <iostream>
#include <string>
  
using namespace std;
  
int main()
{
    string ransomNote = "aa";
    string magazine = "ab";

       char c = ransomNote.at(0);
     ransomNote.erase(ransomNote.begin() + 0);
    magazine.erase(magazine.begin() + magazine.find(c));

     cout << ransomNote << endl;
      cout << magazine << endl;
    return 0;
}