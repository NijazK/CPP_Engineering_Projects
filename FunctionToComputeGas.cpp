#include <iostream>
using namespace std;

const double GAS_CONST = 8.3144621;

double ComputeGasVolume(double gasPressure, double gasVolume, double gasMoles) {
   return (gasPressure * gasVolume) / (gasMoles * GAS_CONST);
}

int main() {
   double gasPressure = 0.0;
   double gasMoles = 0.0;
   double gasTemperature = 0.0;
   double gasVolume = 0.0;

   gasPressure = 100;
   gasMoles = 1 ;
   gasTemperature = 273;

   gasVolume = ComputeGasVolume(gasPressure, gasTemperature, gasMoles);
   cout << "Gas volume: " << gasVolume << " m^3" << endl;

   return 0;
}