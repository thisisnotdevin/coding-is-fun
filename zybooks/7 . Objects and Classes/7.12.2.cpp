#include <iostream>
using namespace std;

class GamePoints {
   public:
      GamePoints();
      void Start() const;

   private:
      int teamWhales;
      int teamLions;
};

GamePoints::GamePoints() {

   teamWhales = 1000;
   teamLions = 1000;

}

void GamePoints::Start() const {
   cout << "Game started: Whales " << teamWhales << " - " << teamLions << " Lions" << endl;
}

int main() {
   GamePoints myGame;

   myGame.Start();

   return 0;
}