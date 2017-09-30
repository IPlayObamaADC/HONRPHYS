#include <iostream>

using namespace std;

int main() {
  int n=0, m=0;

  while(n<10) {
    cout << "n is " << n << ": ";
    m=0;

    while(m<=n) {
      cout << m;
      m++;
    }

    cout << endl;
    n++;
  }

  return 0;
}
