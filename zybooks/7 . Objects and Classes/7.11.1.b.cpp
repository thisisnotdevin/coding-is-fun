
#include <iostream>
#include <string>
using namespace std;

class Pet {
   public:
      Pet(string petName = "NoName", int yearsOld = -9999);
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
   Pet cat("Nala");
   Pet bird("Kiwi", 7);

   bird.Print();
   cat.Print();
   dog.Print();

   return 0;
}