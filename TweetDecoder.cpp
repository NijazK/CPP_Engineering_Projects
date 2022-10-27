#include <iostream>
#include <string>

using namespace std;

int main() {
   string origTweet;
   
   cout << "Enter abbreviation from tweet: " << endl;
   cin >> origTweet;
   
   if (origTweet == "LOL") {
      cout << "LOL = laughing out loud" << endl;
   }
   else if (origTweet == "BFN") {
      cout << "BFN = bye for now" << endl;
   }
   else if (origTweet == "FTW") {
      cout << "FTW = for the win" << endl;
   }
   else if (origTweet == "IRL") {
      cout << "IRL = in real life" << endl;
   }
   else {
      cout << "Sorry, don't know that one." << endl;
   }
   
   return 0;
}
