#include <iostream>

using namespace std;

int main() {
  int* p = new int(5);
  cout << "p points at address " << p << "\n";
  cout << "The data stored in address " << p << " is " << *p << "\n";
  
  *p = 10;
  cout << "Now the data stored in address " << p << " is " << *p << "\n";

  return 0;
}
