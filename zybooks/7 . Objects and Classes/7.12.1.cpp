
#include <iostream>
#include <string>
using namespace std;

class Tutor {
   public:
      Tutor();
      Tutor(string tutorName);
      void Print() const;

   private:
      string name;
      string topic;
};

Tutor::Tutor() : name("NeedsName"), topic("NeedsTopic") {}

Tutor::Tutor(string tutorName) : name(tutorName), topic("NeedsTopic") {}

void Tutor::Print() const {
   cout << topic << ", tutored by " << name << endl;
}

int main() {
   Tutor myTutor;
   Tutor yourTutor("Leo");

   myTutor.Print();
   yourTutor.Print();

   return 0;
}