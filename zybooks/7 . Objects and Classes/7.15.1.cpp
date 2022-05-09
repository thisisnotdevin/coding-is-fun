#include <iostream>
#include <string>
using namespace std;

class Movie {
public:
   Movie(string movieTitle);
   void SetVotes(int numUpVotes, int numDownVotes) {
      upVotes = numUpVotes;
      downVotes = numDownVotes;
   }
   string GetTitle() const { return title; }
   int GetVoteDifference() const { return upVotes - downVotes; }

private:
   string title;
   int upVotes;
   int downVotes;
};

Movie::Movie(string movieTitle) {
   title = movieTitle;
   upVotes = 0;
   downVotes = 0;
}

bool operator==(const Movie& movie1, const Movie& movie2) {
   return movie1.GetVoteDifference() == movie2.GetVoteDifference();
}

bool operator!=(const Movie& movie1, const Movie& movie2) { 
   return !(movie1 == movie2); 
}

bool operator<(const Movie& movie1, const Movie& movie2) {
   return movie1.GetVoteDifference() < movie2.GetVoteDifference();
}

bool operator>(const Movie& movie1, const Movie& movie2) { 
   return movie2 < movie1; 
}

bool operator<=(const Movie& movie1, const Movie& movie2) { 
   return !(movie1 > movie2); 
}

bool operator>=(const Movie& movie1, const Movie& movie2) { 
   return !(movie1 < movie2); 
}

int main() {
   Movie movie1("Cars");
   Movie movie2("Up");
   Movie movie3("It");
   Movie movie4("Frozen");

   movie1.SetVotes(7, 2);
   movie2.SetVotes(13, 7);
   movie3.SetVotes(13, 3);
   movie4.SetVotes(13, 1);

   if (movie2 != movie3) {
      cout << movie2.GetTitle();
      cout << " is not equal to "; 
      cout << movie3.GetTitle() << endl;
   }

   if (movie3 >= movie4) {
      cout << movie3.GetTitle();
      cout << " is at least as good as ";
      cout << movie4.GetTitle() << endl;
   } 
   else if (movie4 > movie3) {
      cout << movie4.GetTitle();
      cout << " is better than ";
      cout << movie3.GetTitle() << endl;
   }

   return 0;
}