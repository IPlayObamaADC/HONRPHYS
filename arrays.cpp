#include <iostream>

using namespace std;

int main() {
  int ii[3] = {1,2,3};
  int j = 0;
  while (j<3) {
    cout << " ii of " << j << " is " << ii[j] << endl;
    j++;
  }

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
