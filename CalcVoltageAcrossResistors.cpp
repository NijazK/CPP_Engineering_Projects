#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   const int NUM_RES = 5;     // Number of resistors
   double resVals[NUM_RES];   // Ohms
   double circVolt = 0;       // Volts
   double vDrop[NUM_RES];     // Volts
   double currentVal = 0;     // Amps
   double sumRes = 0;         // Ohms
   int i = 0;                 // Loop index

   cout << "5 resistors are in series." << endl;
   cout << "Program calculates voltage drop "
        << "across each resistor." << endl;

   cout << "Input voltage applied to circuit: ";
   cin >> circVolt;

   cout << "Input ohms of " << NUM_RES << " resistors:";
   cout << endl;
   for (i = 0; i < NUM_RES; ++i) {
      cout << (i + 1) << ") ";
      cin >> resVals[i];
   }

   // Calculate current
   for (i = 0; i < NUM_RES; ++i) {
      sumRes = sumRes + resVals[i];
   }
   currentVal = circVolt / sumRes;    // I = V/R

   for (i = 0; i < NUM_RES; ++i) {
      vDrop[i] = currentVal * resVals[i]; // V = IR
   }

   cout << endl << "Voltage drop per resistor is:" << endl;
   for (i = 0; i < NUM_RES; ++i) {
      cout << (i + 1) << ") " << fixed << setprecision(1)
           << vDrop[i] << " V" << endl;
   }

   return 0;
}