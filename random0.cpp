#include <iostream>
#include <math.h>
using namespace std;

// this function is a pseudorandom number generator
// this code is stolen from the book "Numerial recipes for FORTRAN"
// its randomness comes from overflow of memory locations
const int a = 7141;
const int c = 52773;
const int mmod = 256200;
double getFlatRandom(int& inew) {
  double mranflat = 0.;
  inew = inew%mmod;
  double aa = double(inew)/double(mmod);
  mranflat = aa;
  inew = a*inew+c;
  return mranflat;
}

// fill and display a histogram
int main() {
  int num;
  cout << "Enter the number of loop iterations: ";
  cin >> num;
  int inew = 68183; // This is the "seed" for the random number generator

  // we will put the results from the call into a histogram
  // the histogram has 10 bins
  int histo[10] = {0,0,0,0,0,0,0,0,0,0};
  
  double atmp;
  // call the random number generator 1000 times and fill a histogram
  for(int i = 0; i < num; i++) {
    atmp = getFlatRandom(inew);
    // cout << atmp << endl;
    histo[int(atmp*10)]++; // increment the histogram bin within which the number falls
  }

  //print the histogram to the screen
  for(int i = 0; i < 10; i++) {
    cout << i << ": ";
    for(int j = 0; j < int((double(100*histo[i])/double(num))+0.5); j++){
      cout << "=";
    }
    cout << endl;
  }
  return 0;
}
