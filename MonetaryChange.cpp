
#include <iostream>
using namespace std;

struct MonetaryChange {
   int quarters;
   int cents;
};

MonetaryChange ComputeChange(int cents) {
   MonetaryChange change;

   // FIXME: Finish function
   change.quarters = 2; // FIXME
   change.cents = 0;

   return change;
}

int main(int argc, char* argv[]) {
   int userCents = 0;
   MonetaryChange change;

   cout << "Enter cents: " << endl;
   cin  >> userCents;

   change = ComputeChange(userCents);

   cout << "Quarters: " << change.quarters << endl;
   cout << "FIXME: Finish output." << endl; 

   return 0;
}