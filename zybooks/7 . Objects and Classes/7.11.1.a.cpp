#include <iostream>
#include <string>
using namespace std;

class Pet {
   public:
      Pet(string petName = "Unnamed", int yearsOld = -1);
      void Print();

    private:
      string name;
      int age;
};

Pet::Pet(string petName, int yearsOld) {
   name = petName;
   age = yearsOld;
}

void Pet::Print() {
   cout << name << ", " << age << endl;
}

int main() {
   Pet dog;
   Pet cat("Nala", 6);

   dog.Print();
   cat.Print();

   return 0;
}