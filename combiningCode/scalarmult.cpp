/* SCALARMULT.CPP */

#include <iostream>

using namespace std;

double scalar_mult(double v1[3],double x) {
  double v2[3];
  v2[0] = x*v1[0];
  v2[1] = x*v1[1];
  v2[2] = x*v1[2];
  cout << " The scalar multiple is (" << v2[0] << "," << v2[1] << "," <<v2[2] <<")" << endl;
  return 0;
}
