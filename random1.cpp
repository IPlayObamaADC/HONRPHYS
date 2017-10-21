#include <iostream> //#include <stdio.h>
#include <stdlib.h> /* srand, rand */
#include <time.h>

using namespace std;

int main() {
  cout << "Random Number " << rand()%100 << endl; /* This will print a random number in [0,100).*/
  // No it doesn't, on my computer it always prints 83 for some reason... -L.
  return 0;
}
