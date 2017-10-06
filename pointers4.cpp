#include <iostream>

using namespace std;

int main() {
  double* p1 = new double(3.14);
  double* p2 = p1;
  cout << "The data stored in address " << p1 << "is " << *p1 << endl;
  cout << "The data stored in address " << p2 << "is " << *p2 << endl;

  *p1 *= 2;
  cout << "The data stored in address " << p1 << "is " << *p1 << endl;
  cout << "The data stored in address " << p2 << "is " << *p2 << endl;

  return 0;
}
