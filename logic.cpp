#include <iostream>

using namespace std;

int main() {
  int n = 10;

  while (n>=10) {
    if(n>5) {
      cout << "n is " << n << endl;
    }
    else {
      cout << "n = " << n << endl;
      n--;
    }
    return 0;
  }
}
