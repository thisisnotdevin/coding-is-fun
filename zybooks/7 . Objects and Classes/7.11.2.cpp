// // Write a second constructor as indicated. Sample output:
// // User1: Minutes: 0, Messages: 0
// // User2: Minutes: 1000, Messages: 5000
// #include <iostream>
// using namespace std;

// class PhonePlan{
//    public:
//       PhonePlan();
//       PhonePlan(int numMinutes, int numMessages);
//       void   Print() const;
//    private:
//       int    freeMinutes;
//       int    freeMessages;
// };

// PhonePlan::PhonePlan() {     // Default constructor
//    freeMinutes  = 0;
//    freeMessages = 0;
// }

// // FIXME: Create a second constructor with numMinutes and numMessages parameters.
// PhonePlan::PhonePlan(int numMinutes, int numMessages) {     // Default constructor
//    freeMinutes  = numMinutes;
//    freeMessages = numMessages;
// }


// void PhonePlan::Print() const {
//    cout << "Minutes: " << freeMinutes << ", Messages: " << freeMessages << endl;
// }

// int main() {
//    PhonePlan user1Plan;                // Calls default constructor
//    PhonePlan user2Plan(1000, 5000);    // Calls newly-created constructor

//    cout << "User1: ";
//    user1Plan.Print();

//    cout << "User2: ";
//    user2Plan.Print();

//    return 0;
// }


#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Tutor {
   public:
      Tutor(string, int);
      void Print() const;

   private:
      string name;
      vector<string> students;
};

Tutor::Tutor(string tutorName, int numStudents) : name(tutorName), students(numStudents) {}

void Tutor::Print() const {
   if (students.size() == 0){
      cout << name << " is alone" << endl;
   }
   else {
      cout << name << " tutors " << students.size() << " students" << endl;
   }
}

int main() {
   Tutor myTutor("May", 0);
   Tutor yourTutor("Eve", 8);

   yourTutor.Print();
   myTutor.Print();

   return 0;
}