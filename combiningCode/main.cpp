/* MAIN.CPP */

#include <iostream>
#include <fstream>
// include the program dotprod.cpp so that we can find the dot_prod function
#include "dotprod.cpp"
#include "scalarmult.cpp"

using namespace std;

int main() {
  // declare the vectors
  double vector1[3];
  double vector2[3];
  double scalar;

  // open the input file
  ifstream infile;
  infile.open("vectors.txt");

  // store the input in the vectors and print the vectors for the user
  infile >> vector1[0] >> vector1[1] >> vector1[2];
  cout << " Vector 1 is (" << vector1[0] << "," << vector1[1] << "," << vector1[2] <<")" << endl;
  infile >> vector2[0] >> vector2[1] >> vector2[2];
  cout << " Vector 2 is (" << vector2[0] << "," << vector2[1] << "," << vector2[2] << ")" << endl;

  // store the input in the scalar and print the scalar for the user
  infile >> scalar;
  cout <<  " The scalar is " << scalar << endl;

  // close the input file
  infile.close();

  // call the dot_prod function from dotprod.cpp
  dot_prod(vector1,vector2);

  // call the scalar_mult function from scalarmult.cpp
  scalar_mult(vector1,scalar);
  scalar_mult(vector2,scalar);

  return 0;
}
