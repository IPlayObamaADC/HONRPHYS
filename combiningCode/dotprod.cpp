/* DOTPROD.CPP */
#include <iostream>

using namespace std;

double dot_prod(double v1[3],double v2[3]) {
  double dotdot;
  dotdot = v1[0]*v2[0]+v1[1]*v2[1]+v1[2]*v2[2];
  cout << " The dot product is " << dotdot << endl;

  return 0;
}
