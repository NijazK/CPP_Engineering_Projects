#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   const int M1_ROWS = 4;       // Matrix 1 rows
   const int M1_COLS = 2;       // Matrix 1 cols
   const int M2_ROWS = M1_COLS; // Matrix 2 rows (must have same value)
   const int M2_COLS = 3;       // Matrix 2 cols
   int i = 0;                   // Loop index
   int j = 0;                   // Loop index
   int k = 0;                   // Loop index
   int dotProd = 0;             // Dot product
   
   // Populate matrices
   int mtrx1[M1_ROWS][M1_COLS] = {{3, 4},
                                  {2, 3},
                                  {1, 5},
                                  {0, 2}};
   
   int mtrx2[M2_ROWS][M2_COLS] = {{5, 4, 4},
                                  {0, 2, 3}};
   
   int mtrx3[M1_ROWS][M2_COLS] = {{0, 0, 0},
                                  {0, 0, 0},
                                  {0, 0, 0},
                                  {0, 0, 0}};
   
   // mtrx3 = mtrx1 * mtrx2
   for (i = 0; i < M1_ROWS; ++i) {
      for (j = 0; j < M2_COLS; ++j) {
         // Compute dot product
         dotProd = 0;
         for (k = 0; k < M2_ROWS; ++k) {
            dotProd = dotProd + (mtrx1[i][k] * mtrx2[k][j]);
         }
         
         mtrx3[i][j] = dotProd;
      }
   }
   
   // Print m3 result
   for (i = 0; i < M1_ROWS; ++i) {
      for (j = 0; j < M2_COLS; ++j) {
         cout << setw(2) << mtrx3[i][j] << " ";
      }
      cout << endl;
   }
   
   return 0;
}