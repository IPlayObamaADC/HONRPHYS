#include <iostream>

using namespace std;

int main() {
     int i = 10;
     cout << "The memory address of i is " << &i << "\n";
     cout << "The data stored at memory address " << &i << " is " << i << "\n";
     int* p = &i;
     cout << "The value of p is " << p << "\n";
     cout << "We say that p 'points at' the memory location referenced by address " << p << "\n";
     cout << "The data stored at memory address " << p << " is " << *p << "\n";
     return 0;
}
