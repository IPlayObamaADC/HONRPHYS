#include <iostream>

using namespace std;

int main() {
  for(int n=1;n<=10;n++){ // goal: print out n! for each n from 1 to 10
    int x=1; // we want our answer to equal x
    for(int m=n;m>=1;m--){ //make our x equal to our answer
      x=x*m;
    }
    cout << n << " factorial is " << x << endl; // output answer
  }
}
