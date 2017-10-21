#include <iostream>

using namespace std;

/************************************************\
*                                                *
*                    Arrays                      *
*         This program demonstrates arrays       *
*                                                *
\************************************************/                                       
int main() {
  
  // a loop to demonstrate 1D arrays
  int ii[3] = {1,2,3};
  int j = 0;
  while (j<3) {
    cout << " ii of " << j << " is " << ii[j] << endl;
    j++;
  }

  // a loop to demonstrate 2D arrays
  int LL[2][3] = {1,2,3,4,5,6};
  j=0;
  int k;
  while (j<2) {
    k = 0;
    while (k<3) {
      cout << " LL of " << j << " " << k << " is " << LL[j][k] << endl;
      k++;
    }
    j++;
  }
  return 0;
}
