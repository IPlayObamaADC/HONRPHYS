/*PROGRAM 2*/

#include <iostream>

using namespace std;

int main() {
  int i = 10;
  int* p = &i;
  cout << "i= " << i << " and *p= " << *p << "\n";

  i = 5;
  cout << "i= " << i << " and *p= " << *p << "\n";

  *p = 1;
  cout << "i= " << i << " and *p= " << *p << "\n";

  return 0;
}
