#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Song {
   public:
      void SetDurationAndName(int songDuration, string songName) {
         duration = songDuration;
         name = songName;
      }
      void PrintSong() const {
         cout << duration << " - " << name << endl;
      }
      int GetDuration() const { return duration; }
      string GetName() const { return name; }

   private:
      int duration;
      string name;
};

int main() {
   vector<Song> playlist;
   Song newSong;
   int songDuration;
   string songName;
   unsigned int i;

   cin >> songDuration;
   while (songDuration >= 0) {
   getline(cin, songName);
      newSong.SetDurationAndName(songDuration, songName);
      playlist.push_back(newSong);

      cin >> songDuration;
   }

   for (i = 0; i < playlist.size(); ++i) {
      newSong = playlist.at(i);
      newSong.PrintSong();
   }

   return 0;
}