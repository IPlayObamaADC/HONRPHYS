#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ofstream myfile;
  myfile.open("example.txt");
  myfile << "write some junk.";
  myfile.close();
  
  return 0;
}
