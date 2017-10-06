#include <iostream>

using namespace std;

int main() {
  for(int i=1;i<=100;i++) { // For each i from 1 to 100,
    cout << "factors of " << i << ": "; // (formatting)
    for(int j=1;j<=i;j++) {
      if(i%j == 0) cout << j << " "; // Print the factors of i
    }
    cout << endl; // (formatting)
  }
}
